with perception_data_h;
use perception_data_h;
with localization_data_h;
use localization_data_h;
with speed_data_h;
use speed_data_h;
with Interface_utils;
use Interface_utils;
with gpsModule;

package Wrapper
    with SPARK_Mode
is
    Initialized : Boolean := False;
    Safe : Boolean := True;

    -- TODO: Remove this debug stuff
    Valid_pose_test : Boolean := False;
    Valid_id_test : Boolean := False;
    -- Here should any initialzation code be run
    procedure Init 
    with 
        Global => (In_Out => Initialized),
        Convention => C,
        Export,
        External_Name => "init_ada";
    -- Simply returns if the init function has been run or not
    function Is_Initialized return Boolean
    with
        Global => (Input => Initialized),
        Convention => C,
        Export,
        External_Name => "is_initialized_ada";

    -- This block is the callback functions for the c++ wrapper to attatch to the ROS topics
    procedure Update_Perception(perception_data : in perception_obstacle_ada)
    with
        Global => Null,
        Convention => C,
        Export,
        External_Name => "update_perception_ada";
    procedure Update_GPS(localization_estimate : in localization_estimate_ada)
    with
        Global => (Output => Safe),
        Convention => C,
        Export,
        External_Name => "update_gps_ada";
    procedure Update_Speed(speed : in speed_ada)
    with
        Global => Null,
        Convention => C,
        Export,
        External_Name => "update_speed_ada";

    -- Returns whether we are safe or not
    -- The result is based on the last run of the callback functions
    -- Once it has switched to unsafe, it will not switch back without resetting
    function Is_Safe return Boolean 
    with 
        Global => Null,
        Convention => C,
        Export,
        External_Name => "is_safe_ada";
    
end Wrapper;
