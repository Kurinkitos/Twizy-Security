// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/canbus/proto/vehicle_parameter.proto

#ifndef PROTOBUF_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto__INCLUDED
#define PROTOBUF_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "modules/canbus/proto/chassis.pb.h"
// @@protoc_insertion_point(includes)
namespace apollo {
namespace canbus {
class Chassis;
class ChassisDefaultTypeInternal;
extern ChassisDefaultTypeInternal _Chassis_default_instance_;
class ChassisGPS;
class ChassisGPSDefaultTypeInternal;
extern ChassisGPSDefaultTypeInternal _ChassisGPS_default_instance_;
class VehicleParameter;
class VehicleParameterDefaultTypeInternal;
extern VehicleParameterDefaultTypeInternal _VehicleParameter_default_instance_;
}  // namespace canbus
}  // namespace apollo

namespace apollo {
namespace canbus {

namespace protobuf_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto

enum VehicleParameter_VehicleBrand {
  VehicleParameter_VehicleBrand_LINCOLN_MKZ = 0,
  VehicleParameter_VehicleBrand_RENAULT_TWIZY = 1
};
bool VehicleParameter_VehicleBrand_IsValid(int value);
const VehicleParameter_VehicleBrand VehicleParameter_VehicleBrand_VehicleBrand_MIN = VehicleParameter_VehicleBrand_LINCOLN_MKZ;
const VehicleParameter_VehicleBrand VehicleParameter_VehicleBrand_VehicleBrand_MAX = VehicleParameter_VehicleBrand_RENAULT_TWIZY;
const int VehicleParameter_VehicleBrand_VehicleBrand_ARRAYSIZE = VehicleParameter_VehicleBrand_VehicleBrand_MAX + 1;

const ::google::protobuf::EnumDescriptor* VehicleParameter_VehicleBrand_descriptor();
inline const ::std::string& VehicleParameter_VehicleBrand_Name(VehicleParameter_VehicleBrand value) {
  return ::google::protobuf::internal::NameOfEnum(
    VehicleParameter_VehicleBrand_descriptor(), value);
}
inline bool VehicleParameter_VehicleBrand_Parse(
    const ::std::string& name, VehicleParameter_VehicleBrand* value) {
  return ::google::protobuf::internal::ParseNamedEnum<VehicleParameter_VehicleBrand>(
    VehicleParameter_VehicleBrand_descriptor(), name, value);
}
// ===================================================================

class VehicleParameter : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.canbus.VehicleParameter) */ {
 public:
  VehicleParameter();
  virtual ~VehicleParameter();

  VehicleParameter(const VehicleParameter& from);

  inline VehicleParameter& operator=(const VehicleParameter& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const VehicleParameter& default_instance();

  static inline const VehicleParameter* internal_default_instance() {
    return reinterpret_cast<const VehicleParameter*>(
               &_VehicleParameter_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(VehicleParameter* other);

  // implements Message ----------------------------------------------

  inline VehicleParameter* New() const PROTOBUF_FINAL { return New(NULL); }

  VehicleParameter* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const VehicleParameter& from);
  void MergeFrom(const VehicleParameter& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(VehicleParameter* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef VehicleParameter_VehicleBrand VehicleBrand;
  static const VehicleBrand LINCOLN_MKZ =
    VehicleParameter_VehicleBrand_LINCOLN_MKZ;
  static const VehicleBrand RENAULT_TWIZY =
    VehicleParameter_VehicleBrand_RENAULT_TWIZY;
  static inline bool VehicleBrand_IsValid(int value) {
    return VehicleParameter_VehicleBrand_IsValid(value);
  }
  static const VehicleBrand VehicleBrand_MIN =
    VehicleParameter_VehicleBrand_VehicleBrand_MIN;
  static const VehicleBrand VehicleBrand_MAX =
    VehicleParameter_VehicleBrand_VehicleBrand_MAX;
  static const int VehicleBrand_ARRAYSIZE =
    VehicleParameter_VehicleBrand_VehicleBrand_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  VehicleBrand_descriptor() {
    return VehicleParameter_VehicleBrand_descriptor();
  }
  static inline const ::std::string& VehicleBrand_Name(VehicleBrand value) {
    return VehicleParameter_VehicleBrand_Name(value);
  }
  static inline bool VehicleBrand_Parse(const ::std::string& name,
      VehicleBrand* value) {
    return VehicleParameter_VehicleBrand_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional double max_steer_angle = 2;
  bool has_max_steer_angle() const;
  void clear_max_steer_angle();
  static const int kMaxSteerAngleFieldNumber = 2;
  double max_steer_angle() const;
  void set_max_steer_angle(double value);

  // optional double max_steer_angle_spd = 3;
  bool has_max_steer_angle_spd() const;
  void clear_max_steer_angle_spd();
  static const int kMaxSteerAngleSpdFieldNumber = 3;
  double max_steer_angle_spd() const;
  void set_max_steer_angle_spd(double value);

  // optional double min_steer_angle_spd = 4;
  bool has_min_steer_angle_spd() const;
  void clear_min_steer_angle_spd();
  static const int kMinSteerAngleSpdFieldNumber = 4;
  double min_steer_angle_spd() const;
  void set_min_steer_angle_spd(double value);

  // optional double max_acc = 5;
  bool has_max_acc() const;
  void clear_max_acc();
  static const int kMaxAccFieldNumber = 5;
  double max_acc() const;
  void set_max_acc(double value);

  // optional .apollo.canbus.VehicleParameter.VehicleBrand brand = 1;
  bool has_brand() const;
  void clear_brand();
  static const int kBrandFieldNumber = 1;
  ::apollo::canbus::VehicleParameter_VehicleBrand brand() const;
  void set_brand(::apollo::canbus::VehicleParameter_VehicleBrand value);

  // optional int32 max_enable_fail_attempt = 9;
  bool has_max_enable_fail_attempt() const;
  void clear_max_enable_fail_attempt();
  static const int kMaxEnableFailAttemptFieldNumber = 9;
  ::google::protobuf::int32 max_enable_fail_attempt() const;
  void set_max_enable_fail_attempt(::google::protobuf::int32 value);

  // optional double min_acc = 6;
  bool has_min_acc() const;
  void clear_min_acc();
  static const int kMinAccFieldNumber = 6;
  double min_acc() const;
  void set_min_acc(double value);

  // optional double max_brake_pressure = 7;
  bool has_max_brake_pressure() const;
  void clear_max_brake_pressure();
  static const int kMaxBrakePressureFieldNumber = 7;
  double max_brake_pressure() const;
  void set_max_brake_pressure(double value);

  // optional double max_engine_pedal = 8;
  bool has_max_engine_pedal() const;
  void clear_max_engine_pedal();
  static const int kMaxEnginePedalFieldNumber = 8;
  double max_engine_pedal() const;
  void set_max_engine_pedal(double value);

  // optional .apollo.canbus.Chassis.DrivingMode driving_mode = 10;
  bool has_driving_mode() const;
  void clear_driving_mode();
  static const int kDrivingModeFieldNumber = 10;
  ::apollo::canbus::Chassis_DrivingMode driving_mode() const;
  void set_driving_mode(::apollo::canbus::Chassis_DrivingMode value);

  // @@protoc_insertion_point(class_scope:apollo.canbus.VehicleParameter)
 private:
  void set_has_brand();
  void clear_has_brand();
  void set_has_max_steer_angle();
  void clear_has_max_steer_angle();
  void set_has_max_steer_angle_spd();
  void clear_has_max_steer_angle_spd();
  void set_has_min_steer_angle_spd();
  void clear_has_min_steer_angle_spd();
  void set_has_max_acc();
  void clear_has_max_acc();
  void set_has_min_acc();
  void clear_has_min_acc();
  void set_has_max_brake_pressure();
  void clear_has_max_brake_pressure();
  void set_has_max_engine_pedal();
  void clear_has_max_engine_pedal();
  void set_has_max_enable_fail_attempt();
  void clear_has_max_enable_fail_attempt();
  void set_has_driving_mode();
  void clear_has_driving_mode();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  double max_steer_angle_;
  double max_steer_angle_spd_;
  double min_steer_angle_spd_;
  double max_acc_;
  int brand_;
  ::google::protobuf::int32 max_enable_fail_attempt_;
  double min_acc_;
  double max_brake_pressure_;
  double max_engine_pedal_;
  int driving_mode_;
  friend struct protobuf_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// VehicleParameter

// optional .apollo.canbus.VehicleParameter.VehicleBrand brand = 1;
inline bool VehicleParameter::has_brand() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void VehicleParameter::set_has_brand() {
  _has_bits_[0] |= 0x00000010u;
}
inline void VehicleParameter::clear_has_brand() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void VehicleParameter::clear_brand() {
  brand_ = 0;
  clear_has_brand();
}
inline ::apollo::canbus::VehicleParameter_VehicleBrand VehicleParameter::brand() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.brand)
  return static_cast< ::apollo::canbus::VehicleParameter_VehicleBrand >(brand_);
}
inline void VehicleParameter::set_brand(::apollo::canbus::VehicleParameter_VehicleBrand value) {
  assert(::apollo::canbus::VehicleParameter_VehicleBrand_IsValid(value));
  set_has_brand();
  brand_ = value;
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.brand)
}

// optional double max_steer_angle = 2;
inline bool VehicleParameter::has_max_steer_angle() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VehicleParameter::set_has_max_steer_angle() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VehicleParameter::clear_has_max_steer_angle() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VehicleParameter::clear_max_steer_angle() {
  max_steer_angle_ = 0;
  clear_has_max_steer_angle();
}
inline double VehicleParameter::max_steer_angle() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.max_steer_angle)
  return max_steer_angle_;
}
inline void VehicleParameter::set_max_steer_angle(double value) {
  set_has_max_steer_angle();
  max_steer_angle_ = value;
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.max_steer_angle)
}

// optional double max_steer_angle_spd = 3;
inline bool VehicleParameter::has_max_steer_angle_spd() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VehicleParameter::set_has_max_steer_angle_spd() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VehicleParameter::clear_has_max_steer_angle_spd() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VehicleParameter::clear_max_steer_angle_spd() {
  max_steer_angle_spd_ = 0;
  clear_has_max_steer_angle_spd();
}
inline double VehicleParameter::max_steer_angle_spd() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.max_steer_angle_spd)
  return max_steer_angle_spd_;
}
inline void VehicleParameter::set_max_steer_angle_spd(double value) {
  set_has_max_steer_angle_spd();
  max_steer_angle_spd_ = value;
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.max_steer_angle_spd)
}

// optional double min_steer_angle_spd = 4;
inline bool VehicleParameter::has_min_steer_angle_spd() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VehicleParameter::set_has_min_steer_angle_spd() {
  _has_bits_[0] |= 0x00000004u;
}
inline void VehicleParameter::clear_has_min_steer_angle_spd() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void VehicleParameter::clear_min_steer_angle_spd() {
  min_steer_angle_spd_ = 0;
  clear_has_min_steer_angle_spd();
}
inline double VehicleParameter::min_steer_angle_spd() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.min_steer_angle_spd)
  return min_steer_angle_spd_;
}
inline void VehicleParameter::set_min_steer_angle_spd(double value) {
  set_has_min_steer_angle_spd();
  min_steer_angle_spd_ = value;
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.min_steer_angle_spd)
}

// optional double max_acc = 5;
inline bool VehicleParameter::has_max_acc() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void VehicleParameter::set_has_max_acc() {
  _has_bits_[0] |= 0x00000008u;
}
inline void VehicleParameter::clear_has_max_acc() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void VehicleParameter::clear_max_acc() {
  max_acc_ = 0;
  clear_has_max_acc();
}
inline double VehicleParameter::max_acc() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.max_acc)
  return max_acc_;
}
inline void VehicleParameter::set_max_acc(double value) {
  set_has_max_acc();
  max_acc_ = value;
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.max_acc)
}

// optional double min_acc = 6;
inline bool VehicleParameter::has_min_acc() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void VehicleParameter::set_has_min_acc() {
  _has_bits_[0] |= 0x00000040u;
}
inline void VehicleParameter::clear_has_min_acc() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void VehicleParameter::clear_min_acc() {
  min_acc_ = 0;
  clear_has_min_acc();
}
inline double VehicleParameter::min_acc() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.min_acc)
  return min_acc_;
}
inline void VehicleParameter::set_min_acc(double value) {
  set_has_min_acc();
  min_acc_ = value;
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.min_acc)
}

// optional double max_brake_pressure = 7;
inline bool VehicleParameter::has_max_brake_pressure() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void VehicleParameter::set_has_max_brake_pressure() {
  _has_bits_[0] |= 0x00000080u;
}
inline void VehicleParameter::clear_has_max_brake_pressure() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void VehicleParameter::clear_max_brake_pressure() {
  max_brake_pressure_ = 0;
  clear_has_max_brake_pressure();
}
inline double VehicleParameter::max_brake_pressure() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.max_brake_pressure)
  return max_brake_pressure_;
}
inline void VehicleParameter::set_max_brake_pressure(double value) {
  set_has_max_brake_pressure();
  max_brake_pressure_ = value;
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.max_brake_pressure)
}

// optional double max_engine_pedal = 8;
inline bool VehicleParameter::has_max_engine_pedal() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void VehicleParameter::set_has_max_engine_pedal() {
  _has_bits_[0] |= 0x00000100u;
}
inline void VehicleParameter::clear_has_max_engine_pedal() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void VehicleParameter::clear_max_engine_pedal() {
  max_engine_pedal_ = 0;
  clear_has_max_engine_pedal();
}
inline double VehicleParameter::max_engine_pedal() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.max_engine_pedal)
  return max_engine_pedal_;
}
inline void VehicleParameter::set_max_engine_pedal(double value) {
  set_has_max_engine_pedal();
  max_engine_pedal_ = value;
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.max_engine_pedal)
}

// optional int32 max_enable_fail_attempt = 9;
inline bool VehicleParameter::has_max_enable_fail_attempt() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void VehicleParameter::set_has_max_enable_fail_attempt() {
  _has_bits_[0] |= 0x00000020u;
}
inline void VehicleParameter::clear_has_max_enable_fail_attempt() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void VehicleParameter::clear_max_enable_fail_attempt() {
  max_enable_fail_attempt_ = 0;
  clear_has_max_enable_fail_attempt();
}
inline ::google::protobuf::int32 VehicleParameter::max_enable_fail_attempt() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.max_enable_fail_attempt)
  return max_enable_fail_attempt_;
}
inline void VehicleParameter::set_max_enable_fail_attempt(::google::protobuf::int32 value) {
  set_has_max_enable_fail_attempt();
  max_enable_fail_attempt_ = value;
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.max_enable_fail_attempt)
}

// optional .apollo.canbus.Chassis.DrivingMode driving_mode = 10;
inline bool VehicleParameter::has_driving_mode() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void VehicleParameter::set_has_driving_mode() {
  _has_bits_[0] |= 0x00000200u;
}
inline void VehicleParameter::clear_has_driving_mode() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void VehicleParameter::clear_driving_mode() {
  driving_mode_ = 0;
  clear_has_driving_mode();
}
inline ::apollo::canbus::Chassis_DrivingMode VehicleParameter::driving_mode() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.driving_mode)
  return static_cast< ::apollo::canbus::Chassis_DrivingMode >(driving_mode_);
}
inline void VehicleParameter::set_driving_mode(::apollo::canbus::Chassis_DrivingMode value) {
  assert(::apollo::canbus::Chassis_DrivingMode_IsValid(value));
  set_has_driving_mode();
  driving_mode_ = value;
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.driving_mode)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace canbus
}  // namespace apollo

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::apollo::canbus::VehicleParameter_VehicleBrand> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::canbus::VehicleParameter_VehicleBrand>() {
  return ::apollo::canbus::VehicleParameter_VehicleBrand_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto__INCLUDED
