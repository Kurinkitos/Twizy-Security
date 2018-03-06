// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/common/proto/header.proto

#ifndef PROTOBUF_modules_2fcommon_2fproto_2fheader_2eproto__INCLUDED
#define PROTOBUF_modules_2fcommon_2fproto_2fheader_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "modules/common/proto/error_code.pb.h"
// @@protoc_insertion_point(includes)
namespace apollo {
namespace common {
class Header;
class HeaderDefaultTypeInternal;
extern HeaderDefaultTypeInternal _Header_default_instance_;
class StatusPb;
class StatusPbDefaultTypeInternal;
extern StatusPbDefaultTypeInternal _StatusPb_default_instance_;
}  // namespace common
}  // namespace apollo

namespace apollo {
namespace common {

namespace protobuf_modules_2fcommon_2fproto_2fheader_2eproto {
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
}  // namespace protobuf_modules_2fcommon_2fproto_2fheader_2eproto

// ===================================================================

class Header : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.common.Header) */ {
 public:
  Header();
  virtual ~Header();

  Header(const Header& from);

  inline Header& operator=(const Header& from) {
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
  static const Header& default_instance();

  static inline const Header* internal_default_instance() {
    return reinterpret_cast<const Header*>(
               &_Header_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Header* other);

  // implements Message ----------------------------------------------

  inline Header* New() const PROTOBUF_FINAL { return New(NULL); }

  Header* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Header& from);
  void MergeFrom(const Header& from);
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
  void InternalSwap(Header* other);
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

  // accessors -------------------------------------------------------

  // optional string module_name = 2;
  bool has_module_name() const;
  void clear_module_name();
  static const int kModuleNameFieldNumber = 2;
  const ::std::string& module_name() const;
  void set_module_name(const ::std::string& value);
  #if LANG_CXX11
  void set_module_name(::std::string&& value);
  #endif
  void set_module_name(const char* value);
  void set_module_name(const char* value, size_t size);
  ::std::string* mutable_module_name();
  ::std::string* release_module_name();
  void set_allocated_module_name(::std::string* module_name);

  // optional .apollo.common.StatusPb status = 8;
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 8;
  const ::apollo::common::StatusPb& status() const;
  ::apollo::common::StatusPb* mutable_status();
  ::apollo::common::StatusPb* release_status();
  void set_allocated_status(::apollo::common::StatusPb* status);

  // optional double timestamp_sec = 1;
  bool has_timestamp_sec() const;
  void clear_timestamp_sec();
  static const int kTimestampSecFieldNumber = 1;
  double timestamp_sec() const;
  void set_timestamp_sec(double value);

  // optional uint64 lidar_timestamp = 4;
  bool has_lidar_timestamp() const;
  void clear_lidar_timestamp();
  static const int kLidarTimestampFieldNumber = 4;
  ::google::protobuf::uint64 lidar_timestamp() const;
  void set_lidar_timestamp(::google::protobuf::uint64 value);

  // optional uint64 camera_timestamp = 5;
  bool has_camera_timestamp() const;
  void clear_camera_timestamp();
  static const int kCameraTimestampFieldNumber = 5;
  ::google::protobuf::uint64 camera_timestamp() const;
  void set_camera_timestamp(::google::protobuf::uint64 value);

  // optional uint64 radar_timestamp = 6;
  bool has_radar_timestamp() const;
  void clear_radar_timestamp();
  static const int kRadarTimestampFieldNumber = 6;
  ::google::protobuf::uint64 radar_timestamp() const;
  void set_radar_timestamp(::google::protobuf::uint64 value);

  // optional uint32 sequence_num = 3;
  bool has_sequence_num() const;
  void clear_sequence_num();
  static const int kSequenceNumFieldNumber = 3;
  ::google::protobuf::uint32 sequence_num() const;
  void set_sequence_num(::google::protobuf::uint32 value);

  // optional uint32 version = 7 [default = 1];
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 7;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:apollo.common.Header)
 private:
  void set_has_timestamp_sec();
  void clear_has_timestamp_sec();
  void set_has_module_name();
  void clear_has_module_name();
  void set_has_sequence_num();
  void clear_has_sequence_num();
  void set_has_lidar_timestamp();
  void clear_has_lidar_timestamp();
  void set_has_camera_timestamp();
  void clear_has_camera_timestamp();
  void set_has_radar_timestamp();
  void clear_has_radar_timestamp();
  void set_has_version();
  void clear_has_version();
  void set_has_status();
  void clear_has_status();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr module_name_;
  ::apollo::common::StatusPb* status_;
  double timestamp_sec_;
  ::google::protobuf::uint64 lidar_timestamp_;
  ::google::protobuf::uint64 camera_timestamp_;
  ::google::protobuf::uint64 radar_timestamp_;
  ::google::protobuf::uint32 sequence_num_;
  ::google::protobuf::uint32 version_;
  friend struct protobuf_modules_2fcommon_2fproto_2fheader_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Header

// optional double timestamp_sec = 1;
inline bool Header::has_timestamp_sec() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Header::set_has_timestamp_sec() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Header::clear_has_timestamp_sec() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Header::clear_timestamp_sec() {
  timestamp_sec_ = 0;
  clear_has_timestamp_sec();
}
inline double Header::timestamp_sec() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.timestamp_sec)
  return timestamp_sec_;
}
inline void Header::set_timestamp_sec(double value) {
  set_has_timestamp_sec();
  timestamp_sec_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.Header.timestamp_sec)
}

// optional string module_name = 2;
inline bool Header::has_module_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Header::set_has_module_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Header::clear_has_module_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Header::clear_module_name() {
  module_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_module_name();
}
inline const ::std::string& Header::module_name() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.module_name)
  return module_name_.GetNoArena();
}
inline void Header::set_module_name(const ::std::string& value) {
  set_has_module_name();
  module_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.common.Header.module_name)
}
#if LANG_CXX11
inline void Header::set_module_name(::std::string&& value) {
  set_has_module_name();
  module_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.common.Header.module_name)
}
#endif
inline void Header::set_module_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_module_name();
  module_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.common.Header.module_name)
}
inline void Header::set_module_name(const char* value, size_t size) {
  set_has_module_name();
  module_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.common.Header.module_name)
}
inline ::std::string* Header::mutable_module_name() {
  set_has_module_name();
  // @@protoc_insertion_point(field_mutable:apollo.common.Header.module_name)
  return module_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Header::release_module_name() {
  // @@protoc_insertion_point(field_release:apollo.common.Header.module_name)
  clear_has_module_name();
  return module_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Header::set_allocated_module_name(::std::string* module_name) {
  if (module_name != NULL) {
    set_has_module_name();
  } else {
    clear_has_module_name();
  }
  module_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), module_name);
  // @@protoc_insertion_point(field_set_allocated:apollo.common.Header.module_name)
}

// optional uint32 sequence_num = 3;
inline bool Header::has_sequence_num() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Header::set_has_sequence_num() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Header::clear_has_sequence_num() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Header::clear_sequence_num() {
  sequence_num_ = 0u;
  clear_has_sequence_num();
}
inline ::google::protobuf::uint32 Header::sequence_num() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.sequence_num)
  return sequence_num_;
}
inline void Header::set_sequence_num(::google::protobuf::uint32 value) {
  set_has_sequence_num();
  sequence_num_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.Header.sequence_num)
}

// optional uint64 lidar_timestamp = 4;
inline bool Header::has_lidar_timestamp() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Header::set_has_lidar_timestamp() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Header::clear_has_lidar_timestamp() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Header::clear_lidar_timestamp() {
  lidar_timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_lidar_timestamp();
}
inline ::google::protobuf::uint64 Header::lidar_timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.lidar_timestamp)
  return lidar_timestamp_;
}
inline void Header::set_lidar_timestamp(::google::protobuf::uint64 value) {
  set_has_lidar_timestamp();
  lidar_timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.Header.lidar_timestamp)
}

// optional uint64 camera_timestamp = 5;
inline bool Header::has_camera_timestamp() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Header::set_has_camera_timestamp() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Header::clear_has_camera_timestamp() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Header::clear_camera_timestamp() {
  camera_timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_camera_timestamp();
}
inline ::google::protobuf::uint64 Header::camera_timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.camera_timestamp)
  return camera_timestamp_;
}
inline void Header::set_camera_timestamp(::google::protobuf::uint64 value) {
  set_has_camera_timestamp();
  camera_timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.Header.camera_timestamp)
}

// optional uint64 radar_timestamp = 6;
inline bool Header::has_radar_timestamp() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Header::set_has_radar_timestamp() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Header::clear_has_radar_timestamp() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Header::clear_radar_timestamp() {
  radar_timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_radar_timestamp();
}
inline ::google::protobuf::uint64 Header::radar_timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.radar_timestamp)
  return radar_timestamp_;
}
inline void Header::set_radar_timestamp(::google::protobuf::uint64 value) {
  set_has_radar_timestamp();
  radar_timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.Header.radar_timestamp)
}

// optional uint32 version = 7 [default = 1];
inline bool Header::has_version() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Header::set_has_version() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Header::clear_has_version() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Header::clear_version() {
  version_ = 1u;
  clear_has_version();
}
inline ::google::protobuf::uint32 Header::version() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.version)
  return version_;
}
inline void Header::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.Header.version)
}

// optional .apollo.common.StatusPb status = 8;
inline bool Header::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Header::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Header::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Header::clear_status() {
  if (status_ != NULL) status_->::apollo::common::StatusPb::Clear();
  clear_has_status();
}
inline const ::apollo::common::StatusPb& Header::status() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.status)
  return status_ != NULL ? *status_
                         : *::apollo::common::StatusPb::internal_default_instance();
}
inline ::apollo::common::StatusPb* Header::mutable_status() {
  set_has_status();
  if (status_ == NULL) {
    status_ = new ::apollo::common::StatusPb;
  }
  // @@protoc_insertion_point(field_mutable:apollo.common.Header.status)
  return status_;
}
inline ::apollo::common::StatusPb* Header::release_status() {
  // @@protoc_insertion_point(field_release:apollo.common.Header.status)
  clear_has_status();
  ::apollo::common::StatusPb* temp = status_;
  status_ = NULL;
  return temp;
}
inline void Header::set_allocated_status(::apollo::common::StatusPb* status) {
  delete status_;
  status_ = status;
  if (status) {
    set_has_status();
  } else {
    clear_has_status();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.common.Header.status)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace common
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fcommon_2fproto_2fheader_2eproto__INCLUDED
