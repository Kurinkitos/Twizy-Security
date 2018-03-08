// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/control/proto/lat_controller_conf.proto

#ifndef PROTOBUF_modules_2fcontrol_2fproto_2flat_5fcontroller_5fconf_2eproto__INCLUDED
#define PROTOBUF_modules_2fcontrol_2fproto_2flat_5fcontroller_5fconf_2eproto__INCLUDED

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
#include "modules/control/proto/gain_scheduler_conf.pb.h"
// @@protoc_insertion_point(includes)
namespace apollo {
namespace control {
class GainScheduler;
class GainSchedulerDefaultTypeInternal;
extern GainSchedulerDefaultTypeInternal _GainScheduler_default_instance_;
class GainSchedulerInfo;
class GainSchedulerInfoDefaultTypeInternal;
extern GainSchedulerInfoDefaultTypeInternal _GainSchedulerInfo_default_instance_;
class LatControllerConf;
class LatControllerConfDefaultTypeInternal;
extern LatControllerConfDefaultTypeInternal _LatControllerConf_default_instance_;
}  // namespace control
}  // namespace apollo

namespace apollo {
namespace control {

namespace protobuf_modules_2fcontrol_2fproto_2flat_5fcontroller_5fconf_2eproto {
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
}  // namespace protobuf_modules_2fcontrol_2fproto_2flat_5fcontroller_5fconf_2eproto

// ===================================================================

class LatControllerConf : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.control.LatControllerConf) */ {
 public:
  LatControllerConf();
  virtual ~LatControllerConf();

  LatControllerConf(const LatControllerConf& from);

  inline LatControllerConf& operator=(const LatControllerConf& from) {
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
  static const LatControllerConf& default_instance();

  static inline const LatControllerConf* internal_default_instance() {
    return reinterpret_cast<const LatControllerConf*>(
               &_LatControllerConf_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(LatControllerConf* other);

  // implements Message ----------------------------------------------

  inline LatControllerConf* New() const PROTOBUF_FINAL { return New(NULL); }

  LatControllerConf* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LatControllerConf& from);
  void MergeFrom(const LatControllerConf& from);
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
  void InternalSwap(LatControllerConf* other);
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

  // repeated double matrix_q = 10;
  int matrix_q_size() const;
  void clear_matrix_q();
  static const int kMatrixQFieldNumber = 10;
  double matrix_q(int index) const;
  void set_matrix_q(int index, double value);
  void add_matrix_q(double value);
  const ::google::protobuf::RepeatedField< double >&
      matrix_q() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_matrix_q();

  // optional .apollo.control.GainScheduler lat_err_gain_scheduler = 15;
  bool has_lat_err_gain_scheduler() const;
  void clear_lat_err_gain_scheduler();
  static const int kLatErrGainSchedulerFieldNumber = 15;
  const ::apollo::control::GainScheduler& lat_err_gain_scheduler() const;
  ::apollo::control::GainScheduler* mutable_lat_err_gain_scheduler();
  ::apollo::control::GainScheduler* release_lat_err_gain_scheduler();
  void set_allocated_lat_err_gain_scheduler(::apollo::control::GainScheduler* lat_err_gain_scheduler);

  // optional .apollo.control.GainScheduler heading_err_gain_scheduler = 16;
  bool has_heading_err_gain_scheduler() const;
  void clear_heading_err_gain_scheduler();
  static const int kHeadingErrGainSchedulerFieldNumber = 16;
  const ::apollo::control::GainScheduler& heading_err_gain_scheduler() const;
  ::apollo::control::GainScheduler* mutable_heading_err_gain_scheduler();
  ::apollo::control::GainScheduler* release_heading_err_gain_scheduler();
  void set_allocated_heading_err_gain_scheduler(::apollo::control::GainScheduler* heading_err_gain_scheduler);

  // optional double ts = 1;
  bool has_ts() const;
  void clear_ts();
  static const int kTsFieldNumber = 1;
  double ts() const;
  void set_ts(double value);

  // optional double cf = 3;
  bool has_cf() const;
  void clear_cf();
  static const int kCfFieldNumber = 3;
  double cf() const;
  void set_cf(double value);

  // optional int32 preview_window = 2;
  bool has_preview_window() const;
  void clear_preview_window();
  static const int kPreviewWindowFieldNumber = 2;
  ::google::protobuf::int32 preview_window() const;
  void set_preview_window(::google::protobuf::int32 value);

  // optional int32 mass_fl = 5;
  bool has_mass_fl() const;
  void clear_mass_fl();
  static const int kMassFlFieldNumber = 5;
  ::google::protobuf::int32 mass_fl() const;
  void set_mass_fl(::google::protobuf::int32 value);

  // optional double cr = 4;
  bool has_cr() const;
  void clear_cr();
  static const int kCrFieldNumber = 4;
  double cr() const;
  void set_cr(double value);

  // optional int32 mass_fr = 6;
  bool has_mass_fr() const;
  void clear_mass_fr();
  static const int kMassFrFieldNumber = 6;
  ::google::protobuf::int32 mass_fr() const;
  void set_mass_fr(::google::protobuf::int32 value);

  // optional int32 mass_rl = 7;
  bool has_mass_rl() const;
  void clear_mass_rl();
  static const int kMassRlFieldNumber = 7;
  ::google::protobuf::int32 mass_rl() const;
  void set_mass_rl(::google::protobuf::int32 value);

  // optional double eps = 9;
  bool has_eps() const;
  void clear_eps();
  static const int kEpsFieldNumber = 9;
  double eps() const;
  void set_eps(double value);

  // optional int32 mass_rr = 8;
  bool has_mass_rr() const;
  void clear_mass_rr();
  static const int kMassRrFieldNumber = 8;
  ::google::protobuf::int32 mass_rr() const;
  void set_mass_rr(::google::protobuf::int32 value);

  // optional int32 cutoff_freq = 11;
  bool has_cutoff_freq() const;
  void clear_cutoff_freq();
  static const int kCutoffFreqFieldNumber = 11;
  ::google::protobuf::int32 cutoff_freq() const;
  void set_cutoff_freq(::google::protobuf::int32 value);

  // optional int32 mean_filter_window_size = 12;
  bool has_mean_filter_window_size() const;
  void clear_mean_filter_window_size();
  static const int kMeanFilterWindowSizeFieldNumber = 12;
  ::google::protobuf::int32 mean_filter_window_size() const;
  void set_mean_filter_window_size(::google::protobuf::int32 value);

  // optional int32 max_iteration = 13;
  bool has_max_iteration() const;
  void clear_max_iteration();
  static const int kMaxIterationFieldNumber = 13;
  ::google::protobuf::int32 max_iteration() const;
  void set_max_iteration(::google::protobuf::int32 value);

  // optional double max_lateral_acceleration = 14;
  bool has_max_lateral_acceleration() const;
  void clear_max_lateral_acceleration();
  static const int kMaxLateralAccelerationFieldNumber = 14;
  double max_lateral_acceleration() const;
  void set_max_lateral_acceleration(double value);

  // @@protoc_insertion_point(class_scope:apollo.control.LatControllerConf)
 private:
  void set_has_ts();
  void clear_has_ts();
  void set_has_preview_window();
  void clear_has_preview_window();
  void set_has_cf();
  void clear_has_cf();
  void set_has_cr();
  void clear_has_cr();
  void set_has_mass_fl();
  void clear_has_mass_fl();
  void set_has_mass_fr();
  void clear_has_mass_fr();
  void set_has_mass_rl();
  void clear_has_mass_rl();
  void set_has_mass_rr();
  void clear_has_mass_rr();
  void set_has_eps();
  void clear_has_eps();
  void set_has_cutoff_freq();
  void clear_has_cutoff_freq();
  void set_has_mean_filter_window_size();
  void clear_has_mean_filter_window_size();
  void set_has_max_iteration();
  void clear_has_max_iteration();
  void set_has_max_lateral_acceleration();
  void clear_has_max_lateral_acceleration();
  void set_has_lat_err_gain_scheduler();
  void clear_has_lat_err_gain_scheduler();
  void set_has_heading_err_gain_scheduler();
  void clear_has_heading_err_gain_scheduler();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< double > matrix_q_;
  ::apollo::control::GainScheduler* lat_err_gain_scheduler_;
  ::apollo::control::GainScheduler* heading_err_gain_scheduler_;
  double ts_;
  double cf_;
  ::google::protobuf::int32 preview_window_;
  ::google::protobuf::int32 mass_fl_;
  double cr_;
  ::google::protobuf::int32 mass_fr_;
  ::google::protobuf::int32 mass_rl_;
  double eps_;
  ::google::protobuf::int32 mass_rr_;
  ::google::protobuf::int32 cutoff_freq_;
  ::google::protobuf::int32 mean_filter_window_size_;
  ::google::protobuf::int32 max_iteration_;
  double max_lateral_acceleration_;
  friend struct protobuf_modules_2fcontrol_2fproto_2flat_5fcontroller_5fconf_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LatControllerConf

// optional double ts = 1;
inline bool LatControllerConf::has_ts() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LatControllerConf::set_has_ts() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LatControllerConf::clear_has_ts() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LatControllerConf::clear_ts() {
  ts_ = 0;
  clear_has_ts();
}
inline double LatControllerConf::ts() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.ts)
  return ts_;
}
inline void LatControllerConf::set_ts(double value) {
  set_has_ts();
  ts_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.ts)
}

// optional int32 preview_window = 2;
inline bool LatControllerConf::has_preview_window() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LatControllerConf::set_has_preview_window() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LatControllerConf::clear_has_preview_window() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LatControllerConf::clear_preview_window() {
  preview_window_ = 0;
  clear_has_preview_window();
}
inline ::google::protobuf::int32 LatControllerConf::preview_window() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.preview_window)
  return preview_window_;
}
inline void LatControllerConf::set_preview_window(::google::protobuf::int32 value) {
  set_has_preview_window();
  preview_window_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.preview_window)
}

// optional double cf = 3;
inline bool LatControllerConf::has_cf() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LatControllerConf::set_has_cf() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LatControllerConf::clear_has_cf() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LatControllerConf::clear_cf() {
  cf_ = 0;
  clear_has_cf();
}
inline double LatControllerConf::cf() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.cf)
  return cf_;
}
inline void LatControllerConf::set_cf(double value) {
  set_has_cf();
  cf_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.cf)
}

// optional double cr = 4;
inline bool LatControllerConf::has_cr() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void LatControllerConf::set_has_cr() {
  _has_bits_[0] |= 0x00000040u;
}
inline void LatControllerConf::clear_has_cr() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void LatControllerConf::clear_cr() {
  cr_ = 0;
  clear_has_cr();
}
inline double LatControllerConf::cr() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.cr)
  return cr_;
}
inline void LatControllerConf::set_cr(double value) {
  set_has_cr();
  cr_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.cr)
}

// optional int32 mass_fl = 5;
inline bool LatControllerConf::has_mass_fl() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void LatControllerConf::set_has_mass_fl() {
  _has_bits_[0] |= 0x00000020u;
}
inline void LatControllerConf::clear_has_mass_fl() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void LatControllerConf::clear_mass_fl() {
  mass_fl_ = 0;
  clear_has_mass_fl();
}
inline ::google::protobuf::int32 LatControllerConf::mass_fl() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.mass_fl)
  return mass_fl_;
}
inline void LatControllerConf::set_mass_fl(::google::protobuf::int32 value) {
  set_has_mass_fl();
  mass_fl_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.mass_fl)
}

// optional int32 mass_fr = 6;
inline bool LatControllerConf::has_mass_fr() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void LatControllerConf::set_has_mass_fr() {
  _has_bits_[0] |= 0x00000080u;
}
inline void LatControllerConf::clear_has_mass_fr() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void LatControllerConf::clear_mass_fr() {
  mass_fr_ = 0;
  clear_has_mass_fr();
}
inline ::google::protobuf::int32 LatControllerConf::mass_fr() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.mass_fr)
  return mass_fr_;
}
inline void LatControllerConf::set_mass_fr(::google::protobuf::int32 value) {
  set_has_mass_fr();
  mass_fr_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.mass_fr)
}

// optional int32 mass_rl = 7;
inline bool LatControllerConf::has_mass_rl() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void LatControllerConf::set_has_mass_rl() {
  _has_bits_[0] |= 0x00000100u;
}
inline void LatControllerConf::clear_has_mass_rl() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void LatControllerConf::clear_mass_rl() {
  mass_rl_ = 0;
  clear_has_mass_rl();
}
inline ::google::protobuf::int32 LatControllerConf::mass_rl() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.mass_rl)
  return mass_rl_;
}
inline void LatControllerConf::set_mass_rl(::google::protobuf::int32 value) {
  set_has_mass_rl();
  mass_rl_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.mass_rl)
}

// optional int32 mass_rr = 8;
inline bool LatControllerConf::has_mass_rr() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void LatControllerConf::set_has_mass_rr() {
  _has_bits_[0] |= 0x00000400u;
}
inline void LatControllerConf::clear_has_mass_rr() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void LatControllerConf::clear_mass_rr() {
  mass_rr_ = 0;
  clear_has_mass_rr();
}
inline ::google::protobuf::int32 LatControllerConf::mass_rr() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.mass_rr)
  return mass_rr_;
}
inline void LatControllerConf::set_mass_rr(::google::protobuf::int32 value) {
  set_has_mass_rr();
  mass_rr_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.mass_rr)
}

// optional double eps = 9;
inline bool LatControllerConf::has_eps() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void LatControllerConf::set_has_eps() {
  _has_bits_[0] |= 0x00000200u;
}
inline void LatControllerConf::clear_has_eps() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void LatControllerConf::clear_eps() {
  eps_ = 0;
  clear_has_eps();
}
inline double LatControllerConf::eps() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.eps)
  return eps_;
}
inline void LatControllerConf::set_eps(double value) {
  set_has_eps();
  eps_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.eps)
}

// repeated double matrix_q = 10;
inline int LatControllerConf::matrix_q_size() const {
  return matrix_q_.size();
}
inline void LatControllerConf::clear_matrix_q() {
  matrix_q_.Clear();
}
inline double LatControllerConf::matrix_q(int index) const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.matrix_q)
  return matrix_q_.Get(index);
}
inline void LatControllerConf::set_matrix_q(int index, double value) {
  matrix_q_.Set(index, value);
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.matrix_q)
}
inline void LatControllerConf::add_matrix_q(double value) {
  matrix_q_.Add(value);
  // @@protoc_insertion_point(field_add:apollo.control.LatControllerConf.matrix_q)
}
inline const ::google::protobuf::RepeatedField< double >&
LatControllerConf::matrix_q() const {
  // @@protoc_insertion_point(field_list:apollo.control.LatControllerConf.matrix_q)
  return matrix_q_;
}
inline ::google::protobuf::RepeatedField< double >*
LatControllerConf::mutable_matrix_q() {
  // @@protoc_insertion_point(field_mutable_list:apollo.control.LatControllerConf.matrix_q)
  return &matrix_q_;
}

// optional int32 cutoff_freq = 11;
inline bool LatControllerConf::has_cutoff_freq() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void LatControllerConf::set_has_cutoff_freq() {
  _has_bits_[0] |= 0x00000800u;
}
inline void LatControllerConf::clear_has_cutoff_freq() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void LatControllerConf::clear_cutoff_freq() {
  cutoff_freq_ = 0;
  clear_has_cutoff_freq();
}
inline ::google::protobuf::int32 LatControllerConf::cutoff_freq() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.cutoff_freq)
  return cutoff_freq_;
}
inline void LatControllerConf::set_cutoff_freq(::google::protobuf::int32 value) {
  set_has_cutoff_freq();
  cutoff_freq_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.cutoff_freq)
}

// optional int32 mean_filter_window_size = 12;
inline bool LatControllerConf::has_mean_filter_window_size() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void LatControllerConf::set_has_mean_filter_window_size() {
  _has_bits_[0] |= 0x00001000u;
}
inline void LatControllerConf::clear_has_mean_filter_window_size() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void LatControllerConf::clear_mean_filter_window_size() {
  mean_filter_window_size_ = 0;
  clear_has_mean_filter_window_size();
}
inline ::google::protobuf::int32 LatControllerConf::mean_filter_window_size() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.mean_filter_window_size)
  return mean_filter_window_size_;
}
inline void LatControllerConf::set_mean_filter_window_size(::google::protobuf::int32 value) {
  set_has_mean_filter_window_size();
  mean_filter_window_size_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.mean_filter_window_size)
}

// optional int32 max_iteration = 13;
inline bool LatControllerConf::has_max_iteration() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void LatControllerConf::set_has_max_iteration() {
  _has_bits_[0] |= 0x00002000u;
}
inline void LatControllerConf::clear_has_max_iteration() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void LatControllerConf::clear_max_iteration() {
  max_iteration_ = 0;
  clear_has_max_iteration();
}
inline ::google::protobuf::int32 LatControllerConf::max_iteration() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.max_iteration)
  return max_iteration_;
}
inline void LatControllerConf::set_max_iteration(::google::protobuf::int32 value) {
  set_has_max_iteration();
  max_iteration_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.max_iteration)
}

// optional double max_lateral_acceleration = 14;
inline bool LatControllerConf::has_max_lateral_acceleration() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void LatControllerConf::set_has_max_lateral_acceleration() {
  _has_bits_[0] |= 0x00004000u;
}
inline void LatControllerConf::clear_has_max_lateral_acceleration() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void LatControllerConf::clear_max_lateral_acceleration() {
  max_lateral_acceleration_ = 0;
  clear_has_max_lateral_acceleration();
}
inline double LatControllerConf::max_lateral_acceleration() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.max_lateral_acceleration)
  return max_lateral_acceleration_;
}
inline void LatControllerConf::set_max_lateral_acceleration(double value) {
  set_has_max_lateral_acceleration();
  max_lateral_acceleration_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.LatControllerConf.max_lateral_acceleration)
}

// optional .apollo.control.GainScheduler lat_err_gain_scheduler = 15;
inline bool LatControllerConf::has_lat_err_gain_scheduler() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LatControllerConf::set_has_lat_err_gain_scheduler() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LatControllerConf::clear_has_lat_err_gain_scheduler() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LatControllerConf::clear_lat_err_gain_scheduler() {
  if (lat_err_gain_scheduler_ != NULL) lat_err_gain_scheduler_->::apollo::control::GainScheduler::Clear();
  clear_has_lat_err_gain_scheduler();
}
inline const ::apollo::control::GainScheduler& LatControllerConf::lat_err_gain_scheduler() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.lat_err_gain_scheduler)
  return lat_err_gain_scheduler_ != NULL ? *lat_err_gain_scheduler_
                         : *::apollo::control::GainScheduler::internal_default_instance();
}
inline ::apollo::control::GainScheduler* LatControllerConf::mutable_lat_err_gain_scheduler() {
  set_has_lat_err_gain_scheduler();
  if (lat_err_gain_scheduler_ == NULL) {
    lat_err_gain_scheduler_ = new ::apollo::control::GainScheduler;
  }
  // @@protoc_insertion_point(field_mutable:apollo.control.LatControllerConf.lat_err_gain_scheduler)
  return lat_err_gain_scheduler_;
}
inline ::apollo::control::GainScheduler* LatControllerConf::release_lat_err_gain_scheduler() {
  // @@protoc_insertion_point(field_release:apollo.control.LatControllerConf.lat_err_gain_scheduler)
  clear_has_lat_err_gain_scheduler();
  ::apollo::control::GainScheduler* temp = lat_err_gain_scheduler_;
  lat_err_gain_scheduler_ = NULL;
  return temp;
}
inline void LatControllerConf::set_allocated_lat_err_gain_scheduler(::apollo::control::GainScheduler* lat_err_gain_scheduler) {
  delete lat_err_gain_scheduler_;
  lat_err_gain_scheduler_ = lat_err_gain_scheduler;
  if (lat_err_gain_scheduler) {
    set_has_lat_err_gain_scheduler();
  } else {
    clear_has_lat_err_gain_scheduler();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.control.LatControllerConf.lat_err_gain_scheduler)
}

// optional .apollo.control.GainScheduler heading_err_gain_scheduler = 16;
inline bool LatControllerConf::has_heading_err_gain_scheduler() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LatControllerConf::set_has_heading_err_gain_scheduler() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LatControllerConf::clear_has_heading_err_gain_scheduler() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LatControllerConf::clear_heading_err_gain_scheduler() {
  if (heading_err_gain_scheduler_ != NULL) heading_err_gain_scheduler_->::apollo::control::GainScheduler::Clear();
  clear_has_heading_err_gain_scheduler();
}
inline const ::apollo::control::GainScheduler& LatControllerConf::heading_err_gain_scheduler() const {
  // @@protoc_insertion_point(field_get:apollo.control.LatControllerConf.heading_err_gain_scheduler)
  return heading_err_gain_scheduler_ != NULL ? *heading_err_gain_scheduler_
                         : *::apollo::control::GainScheduler::internal_default_instance();
}
inline ::apollo::control::GainScheduler* LatControllerConf::mutable_heading_err_gain_scheduler() {
  set_has_heading_err_gain_scheduler();
  if (heading_err_gain_scheduler_ == NULL) {
    heading_err_gain_scheduler_ = new ::apollo::control::GainScheduler;
  }
  // @@protoc_insertion_point(field_mutable:apollo.control.LatControllerConf.heading_err_gain_scheduler)
  return heading_err_gain_scheduler_;
}
inline ::apollo::control::GainScheduler* LatControllerConf::release_heading_err_gain_scheduler() {
  // @@protoc_insertion_point(field_release:apollo.control.LatControllerConf.heading_err_gain_scheduler)
  clear_has_heading_err_gain_scheduler();
  ::apollo::control::GainScheduler* temp = heading_err_gain_scheduler_;
  heading_err_gain_scheduler_ = NULL;
  return temp;
}
inline void LatControllerConf::set_allocated_heading_err_gain_scheduler(::apollo::control::GainScheduler* heading_err_gain_scheduler) {
  delete heading_err_gain_scheduler_;
  heading_err_gain_scheduler_ = heading_err_gain_scheduler;
  if (heading_err_gain_scheduler) {
    set_has_heading_err_gain_scheduler();
  } else {
    clear_has_heading_err_gain_scheduler();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.control.LatControllerConf.heading_err_gain_scheduler)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace control
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fcontrol_2fproto_2flat_5fcontroller_5fconf_2eproto__INCLUDED
