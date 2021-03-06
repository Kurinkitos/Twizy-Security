--with Spark.Float_Arithmetic_Lemmas;
with Mathutil;
with Ada.Float_Text_IO; use Ada.Float_Text_IO;
with Ada.Text_IO;

package body perception with SPARK_Mode is

	--use Spark.Float_Arithmetic_Lemmas;

	function breakingDistance (s : in Speed) return Distance
	is
	   Dist : Distance;
	begin
	   pragma Assert(BreakConstant > 0.0);
	   Dist := Distance(S) * Distance(2);
	   return abs (Dist / BreakConstant);
	end breakingDistance;

	function GetDangerZone(S : in Speed; SteeringAngle : in Steering_Angle; Obj_Type : in C_type) return DangerZone
	is
	   -- These values chage when test for real values
	   BreakingDist : Distance := BreakingDistance(S);
	   LidarAngle : Lidar_Angle := 45.0;
	   BreakingDistScale : constant Distance := 1.0;
	begin
	   if Obj_Type /= UNKNOWN_UNMOVABLE then
		  if (BreakingDist >= Distance'Last / BreakingDistScale) then
			 BreakingDist := Distance'Last;
		  else
			 pragma Assume(BreakingDist * BreakingDistScale < Distance'Last);
			 pragma Assume(BreakingDist * BreakingDistScale > 0.0);
			 BreakingDist := BreakingDist * BreakingDistScale; -- Change this constant later
		  end if;
		  LidarAngle := 60.0;
	   end if;
	   return (ScopeAngle => LidarAngle, Radius => BreakingDist, SteeringAngleOffset => SteeringAngle);
	end GetDangerZone;

	function PointInDangerZone(P : in LocalPoint; DZ : in DangerZone) return Boolean
	is
		Ang  : Lidar_Angle := 0.0;

		pragma Assume(P.X * P.X + P.Y * P.Y > 0.0);
		pragma Assume(P.X * P.X + P.Y * P.Y < 6000.0);
		Dist2 : constant Distance := Distance(P.X * P.X + P.Y * P.Y);
		pragma Assume(Dist2 > 0.0);
		Dist : constant Distance := Mathutil.Sqrt(Dist2);
	begin
	    if Dist > DZ.Radius or P.Y < 0.0 then -- outside radius or behind us
		   return False;
		else
			if P.X /= 0.0 and P.Y /= 0.0 then
				Ang := Lidar_Angle(Mathutil.ArcTan(P.X, P.Y));
			elsif P.Y = 0.0 then
			    pragma Assume(P.X / P.X = 1.0 or P.X / P.X = -1.0);
				Ang := 90.0 * Lidar_Angle(P.X / P.X);
			end if;
	   end if;
	   return (abs Ang) <= DZ.ScopeAngle;
	end PointInDangerZone;

	function GetDZEdge(DZ : DangerZone; Left : Boolean) return Line
	is
	   Q : LocalPoint := (Mathutil.Cos(DZ.ScopeAngle) *  DZ.Radius, Mathutil.Sin(DZ.ScopeAngle) *  DZ.Radius, 0.0);
	begin
	   if (Left) then
		  Q.X := (-Q.X);
	   end if;
	   return (P => (0.0, 0.0, 0.0), Q => Q);
	end GetDZEdge;

	function GetOrientation(P1 : LocalPoint; P2 : LocalPoint; P3 : LocalPoint) return Orientation
	is
	   Val : constant Cartesian_Coordinate := (P2.Y - P1.Y) * (P3.X - P2.X) -
		 (P3.Y - P2.Y) * (P2.X - P1.X);
	begin
	   if Val = 0.0 then
		  return CL;
	   elsif Val < 0.0 then
		  return CCW;
	   else
		  return CW;
	   end if;
	end GetOrientation;

	-- https://www.geeksforgeeks.org/check-if-two-given-line-segments-intersect/
	function IsIntersecting(L1 : Line; L2 : Line) return Boolean
	is
	   O1 : constant Orientation := GetOrientation(L1.P, L1.Q, L2.P);
	   O2 : constant Orientation := GetOrientation(L1.P, L1.Q, L2.Q);
	   O3 : constant Orientation := GetOrientation(L2.P, L2.Q, L1.P);
	   O4 : constant Orientation := GetOrientation(L2.P, L2.Q, L1.Q);
	begin
	   -- general case
	   if O1 /= O2 and then O3 /= O4 then
		  return True;
	   end if;
	   -- we ignore the special case with colinear orientations since
	   --  that case is covered by the point in dz (we have a point on
	   --  the edge
	   return False;
	end IsIntersecting;

	function PerceptionCheck(Obstacle : in Perception_Obstacle_ada; Pose : in Pose_Ada; S : in Speed) return Boolean
	is
	    DZ : constant DangerZone := GetDangerZone(S, 0.0, Obstacle.The_C_Type);

		GX : constant FloatingNumber := FloatingNumber(Obstacle.Position.X);
		GY : constant FloatingNumber := FloatingNumber(Obstacle.Position.Y);
		X : constant FloatingNumber := FloatingNumber(Obstacle.Length) / 2.0;
		Y : constant FloatingNumber := FloatingNumber(Obstacle.Width) / 2.0;

		Stw : constant FloatingNumber := Mathutil.Sin_r(FloatingNumber(Obstacle.Theta));
		Ctw : constant FloatingNumber := Mathutil.Cos_r(FloatingNumber(Obstacle.Theta));
		-- these points are in the "world" coordinate system, whatever that means
	    P1w : constant Point := (  X * Ctw -   Y  * Stw + GX,    X  * Stw +   Y  * Ctw + GY, 0.0); -- top left
	    P2w : constant Point := (  X * Ctw - (-Y) * Stw + GX,    X  * Stw + (-Y) * Ctw + GY, 0.0); -- top right
	    P3w : constant Point := ((-X)  * Ctw - (-Y) * Stw + GX, (-X) * Stw + (-Y) * Ctw + GY, 0.0); -- bot right
	    P4w : constant Point := ((-X)  * Ctw -   Y  * Stw + GX, (-X) * Stw +   Y  * Ctw + GY, 0.0); -- bot left

		XT : constant FloatingNumber := FloatingNumber(Pose.Position.X);
		YT : constant FloatingNumber := FloatingNumber(Pose.Position.Y);

		-- translated to the cars coordinate system
	    P1t : constant Point := (P1w.X - XT, P1w.Y - YT, 0.0); -- top left
	    P2t : constant Point := (P2w.X - XT, P2w.Y - YT, 0.0); -- top right
	    P3t : constant Point := (P3w.X - XT, P3w.Y - YT, 0.0); -- bot right
	    P4t : constant Point := (P4w.X - XT, P4w.Y - YT, 0.0); -- bot left

		PI : constant FloatingNumber := 3.14159265;

		St : constant FloatingNumber := Mathutil.Sin_r(-FloatingNumber(Pose.Heading) + PI/2.0);
		Ct : constant FloatingNumber := Mathutil.Cos_r(-FloatingNumber(Pose.Heading) + PI/2.0);
		-- these points are in the car's local coordinate system
		-- to be checked against the dangerZone
	    P1 : constant Point := ( P1t.X * Ct - P1t.Y * St, P1t.X * St + P1t.Y * Ct, 0.0); -- top left
	    P2 : constant Point := ( P2t.X * Ct - P2t.Y * St, P2t.X * St + P2t.Y * Ct, 0.0); -- top right
	    P3 : constant Point := ( P3t.X * Ct - P3t.Y * St, P3t.X * St + P3t.Y * Ct, 0.0); -- bot right
	    P4 : constant Point := ( P4t.X * Ct - P4t.Y * St, P4t.X * St + P4t.Y * Ct, 0.0); -- bot left
		-- Our lines to check for intersection with the dangerzone
		L1 : constant Line := (P1, P2);
		L2 : constant Line := (P2, P3);
		L3 : constant Line := (P3, P4);
		L4 : constant Line := (P4, P1);

-- DEBUG STUFF
--		procedure Print_Point(N : String; P : Point) is
--		   begin
--			Ada.Text_IO.Put(N);
--			Put(Float(P.X), Exp => 0);
--			Ada.Text_IO.Put(",");
--			Put(Float(P.Y), Exp => 0);
--			Ada.Text_IO.New_Line(1);
--			end Print_Point;
	begin
--	   Put(Float(GX)); Ada.Text_IO.New_Line(1);
--	   Put(Float(GY)); Ada.Text_IO.New_Line(1);
--	   Ada.Text_IO.Put("XT,XY: "); Put(Float(XT)); Ada.Text_IO.Put(","); Put(Float(YT)); Ada.Text_IO.New_Line(1);
--	   Ada.Text_IO.Put_Line("Points: ");
--	   Print_Point("1: ", P1);
--	   Print_Point("2: ", P2);
--	   Print_Point("3: ", P3);
--	   Print_Point("4: ", P4);
--	   Ada.Text_IO.Put("");

	    if PointInDangerZone(P1, DZ) or
		   PointInDangerZone(P2, DZ) or
		   PointInDangerZone(P3, DZ) or
		   PointInDangerZone(P4, DZ) then
--		    Ada.Text_IO.Put_Line("Unsafe, point in DZ");
		    return False;
		end if;
		-- one optimization is to find the 2 closest lines, but that might be overkill
		if IsIntersecting(L1, GetDZEdge(DZ, False)) or
		   IsIntersecting(L1, GetDZEdge(DZ, True)) or
		   IsIntersecting(L2, GetDZEdge(DZ, False)) or
		   IsIntersecting(L2, GetDZEdge(DZ, True)) or
		   IsIntersecting(L3, GetDZEdge(DZ, False)) or
		   IsIntersecting(L3, GetDZEdge(DZ, True)) or
		   IsIntersecting(L4, GetDZEdge(DZ, False)) or
		   IsIntersecting(L4, GetDZEdge(DZ, True)) then
--		    Ada.Text_IO.Put_Line("Unsafe, line crossing DZ");
		    return False;
		end if;
		return True;
	end PerceptionCheck;
end;
