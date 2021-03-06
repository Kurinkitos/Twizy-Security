// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/control/proto/pid_conf.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "modules/control/proto/pid_conf.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace apollo {
namespace control {
class PidConfDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<PidConf> {
} _PidConf_default_instance_;

namespace protobuf_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, integrator_enable_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, integrator_saturation_level_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, kp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, ki_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, kd_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, kaw_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, output_saturation_level_),
  6,
  0,
  1,
  2,
  3,
  4,
  5,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 12, sizeof(PidConf)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_PidConf_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "modules/control/proto/pid_conf.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _PidConf_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _PidConf_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n$modules/control/proto/pid_conf.proto\022\016"
      "apollo.control\"\236\001\n\007PidConf\022\031\n\021integrator"
      "_enable\030\001 \001(\010\022#\n\033integrator_saturation_l"
      "evel\030\002 \001(\001\022\n\n\002kp\030\003 \001(\001\022\n\n\002ki\030\004 \001(\001\022\n\n\002kd"
      "\030\005 \001(\001\022\016\n\003kaw\030\006 \001(\001:\0010\022\037\n\027output_saturat"
      "ion_level\030\007 \001(\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 215);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "modules/control/proto/pid_conf.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PidConf::kIntegratorEnableFieldNumber;
const int PidConf::kIntegratorSaturationLevelFieldNumber;
const int PidConf::kKpFieldNumber;
const int PidConf::kKiFieldNumber;
const int PidConf::kKdFieldNumber;
const int PidConf::kKawFieldNumber;
const int PidConf::kOutputSaturationLevelFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PidConf::PidConf()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.control.PidConf)
}
PidConf::PidConf(const PidConf& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&integrator_saturation_level_, &from.integrator_saturation_level_,
    reinterpret_cast<char*>(&integrator_enable_) -
    reinterpret_cast<char*>(&integrator_saturation_level_) + sizeof(integrator_enable_));
  // @@protoc_insertion_point(copy_constructor:apollo.control.PidConf)
}

void PidConf::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&integrator_saturation_level_, 0, reinterpret_cast<char*>(&integrator_enable_) -
    reinterpret_cast<char*>(&integrator_saturation_level_) + sizeof(integrator_enable_));
}

PidConf::~PidConf() {
  // @@protoc_insertion_point(destructor:apollo.control.PidConf)
  SharedDtor();
}

void PidConf::SharedDtor() {
}

void PidConf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PidConf::descriptor() {
  protobuf_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PidConf& PidConf::default_instance() {
  protobuf_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

PidConf* PidConf::New(::google::protobuf::Arena* arena) const {
  PidConf* n = new PidConf;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PidConf::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.control.PidConf)
  if (_has_bits_[0 / 32] & 127u) {
    ::memset(&integrator_saturation_level_, 0, reinterpret_cast<char*>(&integrator_enable_) -
      reinterpret_cast<char*>(&integrator_saturation_level_) + sizeof(integrator_enable_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PidConf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.control.PidConf)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool integrator_enable = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_integrator_enable();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &integrator_enable_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double integrator_saturation_level = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u)) {
          set_has_integrator_saturation_level();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &integrator_saturation_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double kp = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u)) {
          set_has_kp();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &kp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double ki = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u)) {
          set_has_ki();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &ki_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double kd = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u)) {
          set_has_kd();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &kd_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double kaw = 6 [default = 0];
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u)) {
          set_has_kaw();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &kaw_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double output_saturation_level = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(57u)) {
          set_has_output_saturation_level();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &output_saturation_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.control.PidConf)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.control.PidConf)
  return false;
#undef DO_
}

void PidConf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.control.PidConf)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool integrator_enable = 1;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->integrator_enable(), output);
  }

  // optional double integrator_saturation_level = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->integrator_saturation_level(), output);
  }

  // optional double kp = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->kp(), output);
  }

  // optional double ki = 4;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->ki(), output);
  }

  // optional double kd = 5;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->kd(), output);
  }

  // optional double kaw = 6 [default = 0];
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->kaw(), output);
  }

  // optional double output_saturation_level = 7;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->output_saturation_level(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.control.PidConf)
}

::google::protobuf::uint8* PidConf::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.control.PidConf)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool integrator_enable = 1;
  if (cached_has_bits & 0x00000040u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->integrator_enable(), target);
  }

  // optional double integrator_saturation_level = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->integrator_saturation_level(), target);
  }

  // optional double kp = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->kp(), target);
  }

  // optional double ki = 4;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->ki(), target);
  }

  // optional double kd = 5;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->kd(), target);
  }

  // optional double kaw = 6 [default = 0];
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->kaw(), target);
  }

  // optional double output_saturation_level = 7;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->output_saturation_level(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.control.PidConf)
  return target;
}

size_t PidConf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.control.PidConf)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 127u) {
    // optional double integrator_saturation_level = 2;
    if (has_integrator_saturation_level()) {
      total_size += 1 + 8;
    }

    // optional double kp = 3;
    if (has_kp()) {
      total_size += 1 + 8;
    }

    // optional double ki = 4;
    if (has_ki()) {
      total_size += 1 + 8;
    }

    // optional double kd = 5;
    if (has_kd()) {
      total_size += 1 + 8;
    }

    // optional double kaw = 6 [default = 0];
    if (has_kaw()) {
      total_size += 1 + 8;
    }

    // optional double output_saturation_level = 7;
    if (has_output_saturation_level()) {
      total_size += 1 + 8;
    }

    // optional bool integrator_enable = 1;
    if (has_integrator_enable()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PidConf::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.control.PidConf)
  GOOGLE_DCHECK_NE(&from, this);
  const PidConf* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PidConf>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.control.PidConf)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.control.PidConf)
    MergeFrom(*source);
  }
}

void PidConf::MergeFrom(const PidConf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.control.PidConf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 127u) {
    if (cached_has_bits & 0x00000001u) {
      integrator_saturation_level_ = from.integrator_saturation_level_;
    }
    if (cached_has_bits & 0x00000002u) {
      kp_ = from.kp_;
    }
    if (cached_has_bits & 0x00000004u) {
      ki_ = from.ki_;
    }
    if (cached_has_bits & 0x00000008u) {
      kd_ = from.kd_;
    }
    if (cached_has_bits & 0x00000010u) {
      kaw_ = from.kaw_;
    }
    if (cached_has_bits & 0x00000020u) {
      output_saturation_level_ = from.output_saturation_level_;
    }
    if (cached_has_bits & 0x00000040u) {
      integrator_enable_ = from.integrator_enable_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PidConf::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.control.PidConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PidConf::CopyFrom(const PidConf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.control.PidConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PidConf::IsInitialized() const {
  return true;
}

void PidConf::Swap(PidConf* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PidConf::InternalSwap(PidConf* other) {
  std::swap(integrator_saturation_level_, other->integrator_saturation_level_);
  std::swap(kp_, other->kp_);
  std::swap(ki_, other->ki_);
  std::swap(kd_, other->kd_);
  std::swap(kaw_, other->kaw_);
  std::swap(output_saturation_level_, other->output_saturation_level_);
  std::swap(integrator_enable_, other->integrator_enable_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PidConf::GetMetadata() const {
  protobuf_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PidConf

// optional bool integrator_enable = 1;
bool PidConf::has_integrator_enable() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void PidConf::set_has_integrator_enable() {
  _has_bits_[0] |= 0x00000040u;
}
void PidConf::clear_has_integrator_enable() {
  _has_bits_[0] &= ~0x00000040u;
}
void PidConf::clear_integrator_enable() {
  integrator_enable_ = false;
  clear_has_integrator_enable();
}
bool PidConf::integrator_enable() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.integrator_enable)
  return integrator_enable_;
}
void PidConf::set_integrator_enable(bool value) {
  set_has_integrator_enable();
  integrator_enable_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.integrator_enable)
}

// optional double integrator_saturation_level = 2;
bool PidConf::has_integrator_saturation_level() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PidConf::set_has_integrator_saturation_level() {
  _has_bits_[0] |= 0x00000001u;
}
void PidConf::clear_has_integrator_saturation_level() {
  _has_bits_[0] &= ~0x00000001u;
}
void PidConf::clear_integrator_saturation_level() {
  integrator_saturation_level_ = 0;
  clear_has_integrator_saturation_level();
}
double PidConf::integrator_saturation_level() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.integrator_saturation_level)
  return integrator_saturation_level_;
}
void PidConf::set_integrator_saturation_level(double value) {
  set_has_integrator_saturation_level();
  integrator_saturation_level_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.integrator_saturation_level)
}

// optional double kp = 3;
bool PidConf::has_kp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void PidConf::set_has_kp() {
  _has_bits_[0] |= 0x00000002u;
}
void PidConf::clear_has_kp() {
  _has_bits_[0] &= ~0x00000002u;
}
void PidConf::clear_kp() {
  kp_ = 0;
  clear_has_kp();
}
double PidConf::kp() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.kp)
  return kp_;
}
void PidConf::set_kp(double value) {
  set_has_kp();
  kp_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.kp)
}

// optional double ki = 4;
bool PidConf::has_ki() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void PidConf::set_has_ki() {
  _has_bits_[0] |= 0x00000004u;
}
void PidConf::clear_has_ki() {
  _has_bits_[0] &= ~0x00000004u;
}
void PidConf::clear_ki() {
  ki_ = 0;
  clear_has_ki();
}
double PidConf::ki() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.ki)
  return ki_;
}
void PidConf::set_ki(double value) {
  set_has_ki();
  ki_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.ki)
}

// optional double kd = 5;
bool PidConf::has_kd() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void PidConf::set_has_kd() {
  _has_bits_[0] |= 0x00000008u;
}
void PidConf::clear_has_kd() {
  _has_bits_[0] &= ~0x00000008u;
}
void PidConf::clear_kd() {
  kd_ = 0;
  clear_has_kd();
}
double PidConf::kd() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.kd)
  return kd_;
}
void PidConf::set_kd(double value) {
  set_has_kd();
  kd_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.kd)
}

// optional double kaw = 6 [default = 0];
bool PidConf::has_kaw() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void PidConf::set_has_kaw() {
  _has_bits_[0] |= 0x00000010u;
}
void PidConf::clear_has_kaw() {
  _has_bits_[0] &= ~0x00000010u;
}
void PidConf::clear_kaw() {
  kaw_ = 0;
  clear_has_kaw();
}
double PidConf::kaw() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.kaw)
  return kaw_;
}
void PidConf::set_kaw(double value) {
  set_has_kaw();
  kaw_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.kaw)
}

// optional double output_saturation_level = 7;
bool PidConf::has_output_saturation_level() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void PidConf::set_has_output_saturation_level() {
  _has_bits_[0] |= 0x00000020u;
}
void PidConf::clear_has_output_saturation_level() {
  _has_bits_[0] &= ~0x00000020u;
}
void PidConf::clear_output_saturation_level() {
  output_saturation_level_ = 0;
  clear_has_output_saturation_level();
}
double PidConf::output_saturation_level() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.output_saturation_level)
  return output_saturation_level_;
}
void PidConf::set_output_saturation_level(double value) {
  set_has_output_saturation_level();
  output_saturation_level_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.output_saturation_level)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace control
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
