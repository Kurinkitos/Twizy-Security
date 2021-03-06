// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/dreamview/proto/hmi_status.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "modules/dreamview/proto/hmi_status.pb.h"

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
namespace dreamview {
class HMIStatusDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<HMIStatus> {
} _HMIStatus_default_instance_;

namespace protobuf_modules_2fdreamview_2fproto_2fhmi_5fstatus_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMIStatus, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMIStatus, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMIStatus, system_status_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMIStatus, current_map_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMIStatus, current_vehicle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMIStatus, current_mode_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMIStatus, ota_update_),
  4,
  0,
  1,
  2,
  3,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 10, sizeof(HMIStatus)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_HMIStatus_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "modules/dreamview/proto/hmi_status.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _HMIStatus_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  HMIStatus::_default_current_mode_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::apollo::monitor::protobuf_modules_2fmonitor_2fproto_2fsystem_5fstatus_2eproto::InitDefaults();
  HMIStatus::_default_current_mode_.DefaultConstruct();
  *HMIStatus::_default_current_mode_.get_mutable() = ::std::string("Standard", 8);
  _HMIStatus_default_instance_.DefaultConstruct();
  _HMIStatus_default_instance_.get_mutable()->system_status_ = const_cast< ::apollo::monitor::SystemStatus*>(
      ::apollo::monitor::SystemStatus::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n(modules/dreamview/proto/hmi_status.pro"
      "to\022\020apollo.dreamview\032)modules/monitor/pr"
      "oto/system_status.proto\"\242\001\n\tHMIStatus\0223\n"
      "\rsystem_status\030\001 \001(\0132\034.apollo.monitor.Sy"
      "stemStatus\022\023\n\013current_map\030\002 \001(\t\022\027\n\017curre"
      "nt_vehicle\030\003 \001(\t\022\036\n\014current_mode\030\004 \001(\t:\010"
      "Standard\022\022\n\nota_update\030\005 \001(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 268);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "modules/dreamview/proto/hmi_status.proto", &protobuf_RegisterTypes);
  ::apollo::monitor::protobuf_modules_2fmonitor_2fproto_2fsystem_5fstatus_2eproto::AddDescriptors();
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

}  // namespace protobuf_modules_2fdreamview_2fproto_2fhmi_5fstatus_2eproto


// ===================================================================

::google::protobuf::internal::ExplicitlyConstructed< ::std::string> HMIStatus::_default_current_mode_;
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HMIStatus::kSystemStatusFieldNumber;
const int HMIStatus::kCurrentMapFieldNumber;
const int HMIStatus::kCurrentVehicleFieldNumber;
const int HMIStatus::kCurrentModeFieldNumber;
const int HMIStatus::kOtaUpdateFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HMIStatus::HMIStatus()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fdreamview_2fproto_2fhmi_5fstatus_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.dreamview.HMIStatus)
}
HMIStatus::HMIStatus(const HMIStatus& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  current_map_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_current_map()) {
    current_map_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.current_map_);
  }
  current_vehicle_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_current_vehicle()) {
    current_vehicle_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.current_vehicle_);
  }
  current_mode_.UnsafeSetDefault(&HMIStatus::_default_current_mode_.get());
  if (from.has_current_mode()) {
    current_mode_.AssignWithDefault(&HMIStatus::_default_current_mode_.get(), from.current_mode_);
  }
  ota_update_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_ota_update()) {
    ota_update_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ota_update_);
  }
  if (from.has_system_status()) {
    system_status_ = new ::apollo::monitor::SystemStatus(*from.system_status_);
  } else {
    system_status_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:apollo.dreamview.HMIStatus)
}

void HMIStatus::SharedCtor() {
  _cached_size_ = 0;
  current_map_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  current_vehicle_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  current_mode_.UnsafeSetDefault(&HMIStatus::_default_current_mode_.get());
  ota_update_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  system_status_ = NULL;
}

HMIStatus::~HMIStatus() {
  // @@protoc_insertion_point(destructor:apollo.dreamview.HMIStatus)
  SharedDtor();
}

void HMIStatus::SharedDtor() {
  current_map_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  current_vehicle_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  current_mode_.DestroyNoArena(&HMIStatus::_default_current_mode_.get());
  ota_update_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) {
    delete system_status_;
  }
}

void HMIStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HMIStatus::descriptor() {
  protobuf_modules_2fdreamview_2fproto_2fhmi_5fstatus_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fdreamview_2fproto_2fhmi_5fstatus_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const HMIStatus& HMIStatus::default_instance() {
  protobuf_modules_2fdreamview_2fproto_2fhmi_5fstatus_2eproto::InitDefaults();
  return *internal_default_instance();
}

HMIStatus* HMIStatus::New(::google::protobuf::Arena* arena) const {
  HMIStatus* n = new HMIStatus;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HMIStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.dreamview.HMIStatus)
  if (_has_bits_[0 / 32] & 31u) {
    if (has_current_map()) {
      GOOGLE_DCHECK(!current_map_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*current_map_.UnsafeRawStringPointer())->clear();
    }
    if (has_current_vehicle()) {
      GOOGLE_DCHECK(!current_vehicle_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*current_vehicle_.UnsafeRawStringPointer())->clear();
    }
    if (has_current_mode()) {
      GOOGLE_DCHECK(!current_mode_.IsDefault(&HMIStatus::_default_current_mode_.get()));
      (*current_mode_.UnsafeRawStringPointer())->assign(*&HMIStatus::_default_current_mode_.get());
    }
    if (has_ota_update()) {
      GOOGLE_DCHECK(!ota_update_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*ota_update_.UnsafeRawStringPointer())->clear();
    }
    if (has_system_status()) {
      GOOGLE_DCHECK(system_status_ != NULL);
      system_status_->::apollo::monitor::SystemStatus::Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool HMIStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.dreamview.HMIStatus)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.monitor.SystemStatus system_status = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_system_status()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string current_map = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_current_map()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->current_map().data(), this->current_map().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "apollo.dreamview.HMIStatus.current_map");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string current_vehicle = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_current_vehicle()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->current_vehicle().data(), this->current_vehicle().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "apollo.dreamview.HMIStatus.current_vehicle");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string current_mode = 4 [default = "Standard"];
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_current_mode()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->current_mode().data(), this->current_mode().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "apollo.dreamview.HMIStatus.current_mode");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string ota_update = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ota_update()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->ota_update().data(), this->ota_update().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "apollo.dreamview.HMIStatus.ota_update");
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
  // @@protoc_insertion_point(parse_success:apollo.dreamview.HMIStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.dreamview.HMIStatus)
  return false;
#undef DO_
}

void HMIStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.dreamview.HMIStatus)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.monitor.SystemStatus system_status = 1;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->system_status_, output);
  }

  // optional string current_map = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->current_map().data(), this->current_map().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.current_map");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->current_map(), output);
  }

  // optional string current_vehicle = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->current_vehicle().data(), this->current_vehicle().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.current_vehicle");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->current_vehicle(), output);
  }

  // optional string current_mode = 4 [default = "Standard"];
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->current_mode().data(), this->current_mode().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.current_mode");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->current_mode(), output);
  }

  // optional string ota_update = 5;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ota_update().data(), this->ota_update().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.ota_update");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->ota_update(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.dreamview.HMIStatus)
}

::google::protobuf::uint8* HMIStatus::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.dreamview.HMIStatus)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.monitor.SystemStatus system_status = 1;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->system_status_, deterministic, target);
  }

  // optional string current_map = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->current_map().data(), this->current_map().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.current_map");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->current_map(), target);
  }

  // optional string current_vehicle = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->current_vehicle().data(), this->current_vehicle().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.current_vehicle");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->current_vehicle(), target);
  }

  // optional string current_mode = 4 [default = "Standard"];
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->current_mode().data(), this->current_mode().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.current_mode");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->current_mode(), target);
  }

  // optional string ota_update = 5;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ota_update().data(), this->ota_update().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.ota_update");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->ota_update(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.dreamview.HMIStatus)
  return target;
}

size_t HMIStatus::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.dreamview.HMIStatus)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 31u) {
    // optional string current_map = 2;
    if (has_current_map()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->current_map());
    }

    // optional string current_vehicle = 3;
    if (has_current_vehicle()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->current_vehicle());
    }

    // optional string current_mode = 4 [default = "Standard"];
    if (has_current_mode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->current_mode());
    }

    // optional string ota_update = 5;
    if (has_ota_update()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ota_update());
    }

    // optional .apollo.monitor.SystemStatus system_status = 1;
    if (has_system_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->system_status_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HMIStatus::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.dreamview.HMIStatus)
  GOOGLE_DCHECK_NE(&from, this);
  const HMIStatus* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const HMIStatus>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.dreamview.HMIStatus)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.dreamview.HMIStatus)
    MergeFrom(*source);
  }
}

void HMIStatus::MergeFrom(const HMIStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.dreamview.HMIStatus)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_current_map();
      current_map_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.current_map_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_current_vehicle();
      current_vehicle_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.current_vehicle_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_current_mode();
      current_mode_.AssignWithDefault(&HMIStatus::_default_current_mode_.get(), from.current_mode_);
    }
    if (cached_has_bits & 0x00000008u) {
      set_has_ota_update();
      ota_update_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ota_update_);
    }
    if (cached_has_bits & 0x00000010u) {
      mutable_system_status()->::apollo::monitor::SystemStatus::MergeFrom(from.system_status());
    }
  }
}

void HMIStatus::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.dreamview.HMIStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HMIStatus::CopyFrom(const HMIStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.dreamview.HMIStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HMIStatus::IsInitialized() const {
  return true;
}

void HMIStatus::Swap(HMIStatus* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HMIStatus::InternalSwap(HMIStatus* other) {
  current_map_.Swap(&other->current_map_);
  current_vehicle_.Swap(&other->current_vehicle_);
  current_mode_.Swap(&other->current_mode_);
  ota_update_.Swap(&other->ota_update_);
  std::swap(system_status_, other->system_status_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata HMIStatus::GetMetadata() const {
  protobuf_modules_2fdreamview_2fproto_2fhmi_5fstatus_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fdreamview_2fproto_2fhmi_5fstatus_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HMIStatus

// optional .apollo.monitor.SystemStatus system_status = 1;
bool HMIStatus::has_system_status() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void HMIStatus::set_has_system_status() {
  _has_bits_[0] |= 0x00000010u;
}
void HMIStatus::clear_has_system_status() {
  _has_bits_[0] &= ~0x00000010u;
}
void HMIStatus::clear_system_status() {
  if (system_status_ != NULL) system_status_->::apollo::monitor::SystemStatus::Clear();
  clear_has_system_status();
}
const ::apollo::monitor::SystemStatus& HMIStatus::system_status() const {
  // @@protoc_insertion_point(field_get:apollo.dreamview.HMIStatus.system_status)
  return system_status_ != NULL ? *system_status_
                         : *::apollo::monitor::SystemStatus::internal_default_instance();
}
::apollo::monitor::SystemStatus* HMIStatus::mutable_system_status() {
  set_has_system_status();
  if (system_status_ == NULL) {
    system_status_ = new ::apollo::monitor::SystemStatus;
  }
  // @@protoc_insertion_point(field_mutable:apollo.dreamview.HMIStatus.system_status)
  return system_status_;
}
::apollo::monitor::SystemStatus* HMIStatus::release_system_status() {
  // @@protoc_insertion_point(field_release:apollo.dreamview.HMIStatus.system_status)
  clear_has_system_status();
  ::apollo::monitor::SystemStatus* temp = system_status_;
  system_status_ = NULL;
  return temp;
}
void HMIStatus::set_allocated_system_status(::apollo::monitor::SystemStatus* system_status) {
  delete system_status_;
  system_status_ = system_status;
  if (system_status) {
    set_has_system_status();
  } else {
    clear_has_system_status();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.dreamview.HMIStatus.system_status)
}

// optional string current_map = 2;
bool HMIStatus::has_current_map() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void HMIStatus::set_has_current_map() {
  _has_bits_[0] |= 0x00000001u;
}
void HMIStatus::clear_has_current_map() {
  _has_bits_[0] &= ~0x00000001u;
}
void HMIStatus::clear_current_map() {
  current_map_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_current_map();
}
const ::std::string& HMIStatus::current_map() const {
  // @@protoc_insertion_point(field_get:apollo.dreamview.HMIStatus.current_map)
  return current_map_.GetNoArena();
}
void HMIStatus::set_current_map(const ::std::string& value) {
  set_has_current_map();
  current_map_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.dreamview.HMIStatus.current_map)
}
#if LANG_CXX11
void HMIStatus::set_current_map(::std::string&& value) {
  set_has_current_map();
  current_map_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.dreamview.HMIStatus.current_map)
}
#endif
void HMIStatus::set_current_map(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_current_map();
  current_map_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.dreamview.HMIStatus.current_map)
}
void HMIStatus::set_current_map(const char* value, size_t size) {
  set_has_current_map();
  current_map_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.dreamview.HMIStatus.current_map)
}
::std::string* HMIStatus::mutable_current_map() {
  set_has_current_map();
  // @@protoc_insertion_point(field_mutable:apollo.dreamview.HMIStatus.current_map)
  return current_map_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* HMIStatus::release_current_map() {
  // @@protoc_insertion_point(field_release:apollo.dreamview.HMIStatus.current_map)
  clear_has_current_map();
  return current_map_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void HMIStatus::set_allocated_current_map(::std::string* current_map) {
  if (current_map != NULL) {
    set_has_current_map();
  } else {
    clear_has_current_map();
  }
  current_map_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), current_map);
  // @@protoc_insertion_point(field_set_allocated:apollo.dreamview.HMIStatus.current_map)
}

// optional string current_vehicle = 3;
bool HMIStatus::has_current_vehicle() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void HMIStatus::set_has_current_vehicle() {
  _has_bits_[0] |= 0x00000002u;
}
void HMIStatus::clear_has_current_vehicle() {
  _has_bits_[0] &= ~0x00000002u;
}
void HMIStatus::clear_current_vehicle() {
  current_vehicle_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_current_vehicle();
}
const ::std::string& HMIStatus::current_vehicle() const {
  // @@protoc_insertion_point(field_get:apollo.dreamview.HMIStatus.current_vehicle)
  return current_vehicle_.GetNoArena();
}
void HMIStatus::set_current_vehicle(const ::std::string& value) {
  set_has_current_vehicle();
  current_vehicle_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.dreamview.HMIStatus.current_vehicle)
}
#if LANG_CXX11
void HMIStatus::set_current_vehicle(::std::string&& value) {
  set_has_current_vehicle();
  current_vehicle_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.dreamview.HMIStatus.current_vehicle)
}
#endif
void HMIStatus::set_current_vehicle(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_current_vehicle();
  current_vehicle_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.dreamview.HMIStatus.current_vehicle)
}
void HMIStatus::set_current_vehicle(const char* value, size_t size) {
  set_has_current_vehicle();
  current_vehicle_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.dreamview.HMIStatus.current_vehicle)
}
::std::string* HMIStatus::mutable_current_vehicle() {
  set_has_current_vehicle();
  // @@protoc_insertion_point(field_mutable:apollo.dreamview.HMIStatus.current_vehicle)
  return current_vehicle_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* HMIStatus::release_current_vehicle() {
  // @@protoc_insertion_point(field_release:apollo.dreamview.HMIStatus.current_vehicle)
  clear_has_current_vehicle();
  return current_vehicle_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void HMIStatus::set_allocated_current_vehicle(::std::string* current_vehicle) {
  if (current_vehicle != NULL) {
    set_has_current_vehicle();
  } else {
    clear_has_current_vehicle();
  }
  current_vehicle_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), current_vehicle);
  // @@protoc_insertion_point(field_set_allocated:apollo.dreamview.HMIStatus.current_vehicle)
}

// optional string current_mode = 4 [default = "Standard"];
bool HMIStatus::has_current_mode() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void HMIStatus::set_has_current_mode() {
  _has_bits_[0] |= 0x00000004u;
}
void HMIStatus::clear_has_current_mode() {
  _has_bits_[0] &= ~0x00000004u;
}
void HMIStatus::clear_current_mode() {
  current_mode_.ClearToDefaultNoArena(&HMIStatus::_default_current_mode_.get());
  clear_has_current_mode();
}
const ::std::string& HMIStatus::current_mode() const {
  // @@protoc_insertion_point(field_get:apollo.dreamview.HMIStatus.current_mode)
  return current_mode_.GetNoArena();
}
void HMIStatus::set_current_mode(const ::std::string& value) {
  set_has_current_mode();
  current_mode_.SetNoArena(&HMIStatus::_default_current_mode_.get(), value);
  // @@protoc_insertion_point(field_set:apollo.dreamview.HMIStatus.current_mode)
}
#if LANG_CXX11
void HMIStatus::set_current_mode(::std::string&& value) {
  set_has_current_mode();
  current_mode_.SetNoArena(
    &HMIStatus::_default_current_mode_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.dreamview.HMIStatus.current_mode)
}
#endif
void HMIStatus::set_current_mode(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_current_mode();
  current_mode_.SetNoArena(&HMIStatus::_default_current_mode_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.dreamview.HMIStatus.current_mode)
}
void HMIStatus::set_current_mode(const char* value, size_t size) {
  set_has_current_mode();
  current_mode_.SetNoArena(&HMIStatus::_default_current_mode_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.dreamview.HMIStatus.current_mode)
}
::std::string* HMIStatus::mutable_current_mode() {
  set_has_current_mode();
  // @@protoc_insertion_point(field_mutable:apollo.dreamview.HMIStatus.current_mode)
  return current_mode_.MutableNoArena(&HMIStatus::_default_current_mode_.get());
}
::std::string* HMIStatus::release_current_mode() {
  // @@protoc_insertion_point(field_release:apollo.dreamview.HMIStatus.current_mode)
  clear_has_current_mode();
  return current_mode_.ReleaseNoArena(&HMIStatus::_default_current_mode_.get());
}
void HMIStatus::set_allocated_current_mode(::std::string* current_mode) {
  if (current_mode != NULL) {
    set_has_current_mode();
  } else {
    clear_has_current_mode();
  }
  current_mode_.SetAllocatedNoArena(&HMIStatus::_default_current_mode_.get(), current_mode);
  // @@protoc_insertion_point(field_set_allocated:apollo.dreamview.HMIStatus.current_mode)
}

// optional string ota_update = 5;
bool HMIStatus::has_ota_update() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void HMIStatus::set_has_ota_update() {
  _has_bits_[0] |= 0x00000008u;
}
void HMIStatus::clear_has_ota_update() {
  _has_bits_[0] &= ~0x00000008u;
}
void HMIStatus::clear_ota_update() {
  ota_update_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_ota_update();
}
const ::std::string& HMIStatus::ota_update() const {
  // @@protoc_insertion_point(field_get:apollo.dreamview.HMIStatus.ota_update)
  return ota_update_.GetNoArena();
}
void HMIStatus::set_ota_update(const ::std::string& value) {
  set_has_ota_update();
  ota_update_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.dreamview.HMIStatus.ota_update)
}
#if LANG_CXX11
void HMIStatus::set_ota_update(::std::string&& value) {
  set_has_ota_update();
  ota_update_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.dreamview.HMIStatus.ota_update)
}
#endif
void HMIStatus::set_ota_update(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_ota_update();
  ota_update_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.dreamview.HMIStatus.ota_update)
}
void HMIStatus::set_ota_update(const char* value, size_t size) {
  set_has_ota_update();
  ota_update_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.dreamview.HMIStatus.ota_update)
}
::std::string* HMIStatus::mutable_ota_update() {
  set_has_ota_update();
  // @@protoc_insertion_point(field_mutable:apollo.dreamview.HMIStatus.ota_update)
  return ota_update_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* HMIStatus::release_ota_update() {
  // @@protoc_insertion_point(field_release:apollo.dreamview.HMIStatus.ota_update)
  clear_has_ota_update();
  return ota_update_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void HMIStatus::set_allocated_ota_update(::std::string* ota_update) {
  if (ota_update != NULL) {
    set_has_ota_update();
  } else {
    clear_has_ota_update();
  }
  ota_update_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ota_update);
  // @@protoc_insertion_point(field_set_allocated:apollo.dreamview.HMIStatus.ota_update)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace dreamview
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
