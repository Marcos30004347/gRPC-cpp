// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: informer.proto

#include "informer.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class GetPortReqDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GetPortReq> _instance;
} _GetPortReq_default_instance_;
class GetPortRepDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GetPortRep> _instance;
} _GetPortRep_default_instance_;
class GetDescriptionReqDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GetDescriptionReq> _instance;
} _GetDescriptionReq_default_instance_;
class GetDescriptionRepDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GetDescriptionRep> _instance;
} _GetDescriptionRep_default_instance_;
static void InitDefaultsscc_info_GetDescriptionRep_informer_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_GetDescriptionRep_default_instance_;
    new (ptr) ::GetDescriptionRep();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GetDescriptionRep_informer_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_GetDescriptionRep_informer_2eproto}, {}};

static void InitDefaultsscc_info_GetDescriptionReq_informer_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_GetDescriptionReq_default_instance_;
    new (ptr) ::GetDescriptionReq();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GetDescriptionReq_informer_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_GetDescriptionReq_informer_2eproto}, {}};

static void InitDefaultsscc_info_GetPortRep_informer_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_GetPortRep_default_instance_;
    new (ptr) ::GetPortRep();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GetPortRep_informer_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_GetPortRep_informer_2eproto}, {}};

static void InitDefaultsscc_info_GetPortReq_informer_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_GetPortReq_default_instance_;
    new (ptr) ::GetPortReq();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GetPortReq_informer_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_GetPortReq_informer_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_informer_2eproto[4];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_informer_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_informer_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_informer_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::GetPortReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::GetPortReq, service_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::GetPortRep, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::GetPortRep, port_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::GetDescriptionReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::GetDescriptionReq, service_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::GetDescriptionRep, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::GetDescriptionRep, description_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::GetPortReq)},
  { 6, -1, sizeof(::GetPortRep)},
  { 12, -1, sizeof(::GetDescriptionReq)},
  { 18, -1, sizeof(::GetDescriptionRep)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_GetPortReq_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_GetPortRep_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_GetDescriptionReq_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_GetDescriptionRep_default_instance_),
};

const char descriptor_table_protodef_informer_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016informer.proto\"\035\n\nGetPortReq\022\017\n\007servic"
  "e\030\001 \001(\t\"\032\n\nGetPortRep\022\014\n\004port\030\001 \001(\005\"$\n\021G"
  "etDescriptionReq\022\017\n\007service\030\001 \001(\t\"(\n\021Get"
  "DescriptionRep\022\023\n\013description\030\001 \001(\t2m\n\010I"
  "nformer\022%\n\007GetPort\022\013.GetPortReq\032\013.GetPor"
  "tRep\"\000\022:\n\016GetDescription\022\022.GetDescriptio"
  "nReq\032\022.GetDescriptionRep\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_informer_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_informer_2eproto_sccs[4] = {
  &scc_info_GetDescriptionRep_informer_2eproto.base,
  &scc_info_GetDescriptionReq_informer_2eproto.base,
  &scc_info_GetPortRep_informer_2eproto.base,
  &scc_info_GetPortReq_informer_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_informer_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_informer_2eproto = {
  false, false, descriptor_table_protodef_informer_2eproto, "informer.proto", 274,
  &descriptor_table_informer_2eproto_once, descriptor_table_informer_2eproto_sccs, descriptor_table_informer_2eproto_deps, 4, 0,
  schemas, file_default_instances, TableStruct_informer_2eproto::offsets,
  file_level_metadata_informer_2eproto, 4, file_level_enum_descriptors_informer_2eproto, file_level_service_descriptors_informer_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_informer_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_informer_2eproto)), true);

// ===================================================================

class GetPortReq::_Internal {
 public:
};

GetPortReq::GetPortReq(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:GetPortReq)
}
GetPortReq::GetPortReq(const GetPortReq& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  service_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_service().empty()) {
    service_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_service(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:GetPortReq)
}

void GetPortReq::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GetPortReq_informer_2eproto.base);
  service_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

GetPortReq::~GetPortReq() {
  // @@protoc_insertion_point(destructor:GetPortReq)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void GetPortReq::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  service_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void GetPortReq::ArenaDtor(void* object) {
  GetPortReq* _this = reinterpret_cast< GetPortReq* >(object);
  (void)_this;
}
void GetPortReq::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GetPortReq::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GetPortReq& GetPortReq::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GetPortReq_informer_2eproto.base);
  return *internal_default_instance();
}


void GetPortReq::Clear() {
// @@protoc_insertion_point(message_clear_start:GetPortReq)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  service_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetPortReq::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string service = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_service();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "GetPortReq.service"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GetPortReq::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:GetPortReq)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string service = 1;
  if (this->service().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_service().data(), static_cast<int>(this->_internal_service().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "GetPortReq.service");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_service(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GetPortReq)
  return target;
}

size_t GetPortReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GetPortReq)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string service = 1;
  if (this->service().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_service());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetPortReq::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:GetPortReq)
  GOOGLE_DCHECK_NE(&from, this);
  const GetPortReq* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GetPortReq>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:GetPortReq)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:GetPortReq)
    MergeFrom(*source);
  }
}

void GetPortReq::MergeFrom(const GetPortReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GetPortReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.service().size() > 0) {
    _internal_set_service(from._internal_service());
  }
}

void GetPortReq::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:GetPortReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetPortReq::CopyFrom(const GetPortReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GetPortReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetPortReq::IsInitialized() const {
  return true;
}

void GetPortReq::InternalSwap(GetPortReq* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  service_.Swap(&other->service_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata GetPortReq::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class GetPortRep::_Internal {
 public:
};

GetPortRep::GetPortRep(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:GetPortRep)
}
GetPortRep::GetPortRep(const GetPortRep& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  port_ = from.port_;
  // @@protoc_insertion_point(copy_constructor:GetPortRep)
}

void GetPortRep::SharedCtor() {
  port_ = 0;
}

GetPortRep::~GetPortRep() {
  // @@protoc_insertion_point(destructor:GetPortRep)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void GetPortRep::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void GetPortRep::ArenaDtor(void* object) {
  GetPortRep* _this = reinterpret_cast< GetPortRep* >(object);
  (void)_this;
}
void GetPortRep::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GetPortRep::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GetPortRep& GetPortRep::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GetPortRep_informer_2eproto.base);
  return *internal_default_instance();
}


void GetPortRep::Clear() {
// @@protoc_insertion_point(message_clear_start:GetPortRep)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  port_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetPortRep::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 port = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GetPortRep::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:GetPortRep)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 port = 1;
  if (this->port() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_port(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GetPortRep)
  return target;
}

size_t GetPortRep::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GetPortRep)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 port = 1;
  if (this->port() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_port());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetPortRep::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:GetPortRep)
  GOOGLE_DCHECK_NE(&from, this);
  const GetPortRep* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GetPortRep>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:GetPortRep)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:GetPortRep)
    MergeFrom(*source);
  }
}

void GetPortRep::MergeFrom(const GetPortRep& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GetPortRep)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.port() != 0) {
    _internal_set_port(from._internal_port());
  }
}

void GetPortRep::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:GetPortRep)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetPortRep::CopyFrom(const GetPortRep& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GetPortRep)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetPortRep::IsInitialized() const {
  return true;
}

void GetPortRep::InternalSwap(GetPortRep* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(port_, other->port_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GetPortRep::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class GetDescriptionReq::_Internal {
 public:
};

GetDescriptionReq::GetDescriptionReq(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:GetDescriptionReq)
}
GetDescriptionReq::GetDescriptionReq(const GetDescriptionReq& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  service_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_service().empty()) {
    service_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_service(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:GetDescriptionReq)
}

void GetDescriptionReq::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GetDescriptionReq_informer_2eproto.base);
  service_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

GetDescriptionReq::~GetDescriptionReq() {
  // @@protoc_insertion_point(destructor:GetDescriptionReq)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void GetDescriptionReq::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  service_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void GetDescriptionReq::ArenaDtor(void* object) {
  GetDescriptionReq* _this = reinterpret_cast< GetDescriptionReq* >(object);
  (void)_this;
}
void GetDescriptionReq::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GetDescriptionReq::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GetDescriptionReq& GetDescriptionReq::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GetDescriptionReq_informer_2eproto.base);
  return *internal_default_instance();
}


void GetDescriptionReq::Clear() {
// @@protoc_insertion_point(message_clear_start:GetDescriptionReq)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  service_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetDescriptionReq::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string service = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_service();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "GetDescriptionReq.service"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GetDescriptionReq::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:GetDescriptionReq)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string service = 1;
  if (this->service().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_service().data(), static_cast<int>(this->_internal_service().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "GetDescriptionReq.service");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_service(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GetDescriptionReq)
  return target;
}

size_t GetDescriptionReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GetDescriptionReq)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string service = 1;
  if (this->service().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_service());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetDescriptionReq::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:GetDescriptionReq)
  GOOGLE_DCHECK_NE(&from, this);
  const GetDescriptionReq* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GetDescriptionReq>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:GetDescriptionReq)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:GetDescriptionReq)
    MergeFrom(*source);
  }
}

void GetDescriptionReq::MergeFrom(const GetDescriptionReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GetDescriptionReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.service().size() > 0) {
    _internal_set_service(from._internal_service());
  }
}

void GetDescriptionReq::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:GetDescriptionReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetDescriptionReq::CopyFrom(const GetDescriptionReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GetDescriptionReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetDescriptionReq::IsInitialized() const {
  return true;
}

void GetDescriptionReq::InternalSwap(GetDescriptionReq* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  service_.Swap(&other->service_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata GetDescriptionReq::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class GetDescriptionRep::_Internal {
 public:
};

GetDescriptionRep::GetDescriptionRep(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:GetDescriptionRep)
}
GetDescriptionRep::GetDescriptionRep(const GetDescriptionRep& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_description().empty()) {
    description_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_description(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:GetDescriptionRep)
}

void GetDescriptionRep::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GetDescriptionRep_informer_2eproto.base);
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

GetDescriptionRep::~GetDescriptionRep() {
  // @@protoc_insertion_point(destructor:GetDescriptionRep)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void GetDescriptionRep::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  description_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void GetDescriptionRep::ArenaDtor(void* object) {
  GetDescriptionRep* _this = reinterpret_cast< GetDescriptionRep* >(object);
  (void)_this;
}
void GetDescriptionRep::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GetDescriptionRep::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GetDescriptionRep& GetDescriptionRep::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GetDescriptionRep_informer_2eproto.base);
  return *internal_default_instance();
}


void GetDescriptionRep::Clear() {
// @@protoc_insertion_point(message_clear_start:GetDescriptionRep)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  description_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetDescriptionRep::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string description = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_description();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "GetDescriptionRep.description"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GetDescriptionRep::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:GetDescriptionRep)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string description = 1;
  if (this->description().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_description().data(), static_cast<int>(this->_internal_description().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "GetDescriptionRep.description");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_description(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GetDescriptionRep)
  return target;
}

size_t GetDescriptionRep::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GetDescriptionRep)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string description = 1;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_description());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetDescriptionRep::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:GetDescriptionRep)
  GOOGLE_DCHECK_NE(&from, this);
  const GetDescriptionRep* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GetDescriptionRep>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:GetDescriptionRep)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:GetDescriptionRep)
    MergeFrom(*source);
  }
}

void GetDescriptionRep::MergeFrom(const GetDescriptionRep& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GetDescriptionRep)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.description().size() > 0) {
    _internal_set_description(from._internal_description());
  }
}

void GetDescriptionRep::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:GetDescriptionRep)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetDescriptionRep::CopyFrom(const GetDescriptionRep& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GetDescriptionRep)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetDescriptionRep::IsInitialized() const {
  return true;
}

void GetDescriptionRep::InternalSwap(GetDescriptionRep* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  description_.Swap(&other->description_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata GetDescriptionRep::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::GetPortReq* Arena::CreateMaybeMessage< ::GetPortReq >(Arena* arena) {
  return Arena::CreateMessageInternal< ::GetPortReq >(arena);
}
template<> PROTOBUF_NOINLINE ::GetPortRep* Arena::CreateMaybeMessage< ::GetPortRep >(Arena* arena) {
  return Arena::CreateMessageInternal< ::GetPortRep >(arena);
}
template<> PROTOBUF_NOINLINE ::GetDescriptionReq* Arena::CreateMaybeMessage< ::GetDescriptionReq >(Arena* arena) {
  return Arena::CreateMessageInternal< ::GetDescriptionReq >(arena);
}
template<> PROTOBUF_NOINLINE ::GetDescriptionRep* Arena::CreateMaybeMessage< ::GetDescriptionRep >(Arena* arena) {
  return Arena::CreateMessageInternal< ::GetDescriptionRep >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
