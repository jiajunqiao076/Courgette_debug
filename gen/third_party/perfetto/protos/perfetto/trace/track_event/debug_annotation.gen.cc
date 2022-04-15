#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/track_event/debug_annotation.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

DebugAnnotationName::DebugAnnotationName() = default;
DebugAnnotationName::~DebugAnnotationName() = default;
DebugAnnotationName::DebugAnnotationName(const DebugAnnotationName&) = default;
DebugAnnotationName& DebugAnnotationName::operator=(const DebugAnnotationName&) = default;
DebugAnnotationName::DebugAnnotationName(DebugAnnotationName&&) noexcept = default;
DebugAnnotationName& DebugAnnotationName::operator=(DebugAnnotationName&&) = default;

bool DebugAnnotationName::operator==(const DebugAnnotationName& other) const {
  return unknown_fields_ == other.unknown_fields_
   && iid_ == other.iid_
   && name_ == other.name_;
}

bool DebugAnnotationName::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* iid */:
        field.get(&iid_);
        break;
      case 2 /* name */:
        field.get(&name_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string DebugAnnotationName::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> DebugAnnotationName::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void DebugAnnotationName::Serialize(::protozero::Message* msg) const {
  // Field 1: iid
  if (_has_field_[1]) {
    msg->AppendVarInt(1, iid_);
  }

  // Field 2: name
  if (_has_field_[2]) {
    msg->AppendString(2, name_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}


DebugAnnotation::DebugAnnotation() = default;
DebugAnnotation::~DebugAnnotation() = default;
DebugAnnotation::DebugAnnotation(const DebugAnnotation&) = default;
DebugAnnotation& DebugAnnotation::operator=(const DebugAnnotation&) = default;
DebugAnnotation::DebugAnnotation(DebugAnnotation&&) noexcept = default;
DebugAnnotation& DebugAnnotation::operator=(DebugAnnotation&&) = default;

bool DebugAnnotation::operator==(const DebugAnnotation& other) const {
  return unknown_fields_ == other.unknown_fields_
   && name_iid_ == other.name_iid_
   && name_ == other.name_
   && bool_value_ == other.bool_value_
   && uint_value_ == other.uint_value_
   && int_value_ == other.int_value_
   && double_value_ == other.double_value_
   && string_value_ == other.string_value_
   && pointer_value_ == other.pointer_value_
   && nested_value_ == other.nested_value_
   && legacy_json_value_ == other.legacy_json_value_
   && dict_entries_ == other.dict_entries_
   && array_values_ == other.array_values_;
}

int DebugAnnotation::dict_entries_size() const { return static_cast<int>(dict_entries_.size()); }
void DebugAnnotation::clear_dict_entries() { dict_entries_.clear(); }
DebugAnnotation* DebugAnnotation::add_dict_entries() { dict_entries_.emplace_back(); return &dict_entries_.back(); }
int DebugAnnotation::array_values_size() const { return static_cast<int>(array_values_.size()); }
void DebugAnnotation::clear_array_values() { array_values_.clear(); }
DebugAnnotation* DebugAnnotation::add_array_values() { array_values_.emplace_back(); return &array_values_.back(); }
bool DebugAnnotation::ParseFromArray(const void* raw, size_t size) {
  dict_entries_.clear();
  array_values_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* name_iid */:
        field.get(&name_iid_);
        break;
      case 10 /* name */:
        field.get(&name_);
        break;
      case 2 /* bool_value */:
        field.get(&bool_value_);
        break;
      case 3 /* uint_value */:
        field.get(&uint_value_);
        break;
      case 4 /* int_value */:
        field.get(&int_value_);
        break;
      case 5 /* double_value */:
        field.get(&double_value_);
        break;
      case 6 /* string_value */:
        field.get(&string_value_);
        break;
      case 7 /* pointer_value */:
        field.get(&pointer_value_);
        break;
      case 8 /* nested_value */:
        (*nested_value_).ParseFromArray(field.data(), field.size());
        break;
      case 9 /* legacy_json_value */:
        field.get(&legacy_json_value_);
        break;
      case 11 /* dict_entries */:
        dict_entries_.emplace_back();
        dict_entries_.back().ParseFromArray(field.data(), field.size());
        break;
      case 12 /* array_values */:
        array_values_.emplace_back();
        array_values_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string DebugAnnotation::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> DebugAnnotation::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void DebugAnnotation::Serialize(::protozero::Message* msg) const {
  // Field 1: name_iid
  if (_has_field_[1]) {
    msg->AppendVarInt(1, name_iid_);
  }

  // Field 10: name
  if (_has_field_[10]) {
    msg->AppendString(10, name_);
  }

  // Field 2: bool_value
  if (_has_field_[2]) {
    msg->AppendTinyVarInt(2, bool_value_);
  }

  // Field 3: uint_value
  if (_has_field_[3]) {
    msg->AppendVarInt(3, uint_value_);
  }

  // Field 4: int_value
  if (_has_field_[4]) {
    msg->AppendVarInt(4, int_value_);
  }

  // Field 5: double_value
  if (_has_field_[5]) {
    msg->AppendFixed(5, double_value_);
  }

  // Field 6: string_value
  if (_has_field_[6]) {
    msg->AppendString(6, string_value_);
  }

  // Field 7: pointer_value
  if (_has_field_[7]) {
    msg->AppendVarInt(7, pointer_value_);
  }

  // Field 8: nested_value
  if (_has_field_[8]) {
    (*nested_value_).Serialize(msg->BeginNestedMessage<::protozero::Message>(8));
  }

  // Field 9: legacy_json_value
  if (_has_field_[9]) {
    msg->AppendString(9, legacy_json_value_);
  }

  // Field 11: dict_entries
  for (auto& it : dict_entries_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(11));
  }

  // Field 12: array_values
  for (auto& it : array_values_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(12));
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}


DebugAnnotation_NestedValue::DebugAnnotation_NestedValue() = default;
DebugAnnotation_NestedValue::~DebugAnnotation_NestedValue() = default;
DebugAnnotation_NestedValue::DebugAnnotation_NestedValue(const DebugAnnotation_NestedValue&) = default;
DebugAnnotation_NestedValue& DebugAnnotation_NestedValue::operator=(const DebugAnnotation_NestedValue&) = default;
DebugAnnotation_NestedValue::DebugAnnotation_NestedValue(DebugAnnotation_NestedValue&&) noexcept = default;
DebugAnnotation_NestedValue& DebugAnnotation_NestedValue::operator=(DebugAnnotation_NestedValue&&) = default;

bool DebugAnnotation_NestedValue::operator==(const DebugAnnotation_NestedValue& other) const {
  return unknown_fields_ == other.unknown_fields_
   && nested_type_ == other.nested_type_
   && dict_keys_ == other.dict_keys_
   && dict_values_ == other.dict_values_
   && array_values_ == other.array_values_
   && int_value_ == other.int_value_
   && double_value_ == other.double_value_
   && bool_value_ == other.bool_value_
   && string_value_ == other.string_value_;
}

int DebugAnnotation_NestedValue::dict_values_size() const { return static_cast<int>(dict_values_.size()); }
void DebugAnnotation_NestedValue::clear_dict_values() { dict_values_.clear(); }
DebugAnnotation_NestedValue* DebugAnnotation_NestedValue::add_dict_values() { dict_values_.emplace_back(); return &dict_values_.back(); }
int DebugAnnotation_NestedValue::array_values_size() const { return static_cast<int>(array_values_.size()); }
void DebugAnnotation_NestedValue::clear_array_values() { array_values_.clear(); }
DebugAnnotation_NestedValue* DebugAnnotation_NestedValue::add_array_values() { array_values_.emplace_back(); return &array_values_.back(); }
bool DebugAnnotation_NestedValue::ParseFromArray(const void* raw, size_t size) {
  dict_keys_.clear();
  dict_values_.clear();
  array_values_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* nested_type */:
        field.get(&nested_type_);
        break;
      case 2 /* dict_keys */:
        dict_keys_.emplace_back();
        field.get(&dict_keys_.back());
        break;
      case 3 /* dict_values */:
        dict_values_.emplace_back();
        dict_values_.back().ParseFromArray(field.data(), field.size());
        break;
      case 4 /* array_values */:
        array_values_.emplace_back();
        array_values_.back().ParseFromArray(field.data(), field.size());
        break;
      case 5 /* int_value */:
        field.get(&int_value_);
        break;
      case 6 /* double_value */:
        field.get(&double_value_);
        break;
      case 7 /* bool_value */:
        field.get(&bool_value_);
        break;
      case 8 /* string_value */:
        field.get(&string_value_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string DebugAnnotation_NestedValue::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> DebugAnnotation_NestedValue::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void DebugAnnotation_NestedValue::Serialize(::protozero::Message* msg) const {
  // Field 1: nested_type
  if (_has_field_[1]) {
    msg->AppendVarInt(1, nested_type_);
  }

  // Field 2: dict_keys
  for (auto& it : dict_keys_) {
    msg->AppendString(2, it);
  }

  // Field 3: dict_values
  for (auto& it : dict_values_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(3));
  }

  // Field 4: array_values
  for (auto& it : array_values_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(4));
  }

  // Field 5: int_value
  if (_has_field_[5]) {
    msg->AppendVarInt(5, int_value_);
  }

  // Field 6: double_value
  if (_has_field_[6]) {
    msg->AppendFixed(6, double_value_);
  }

  // Field 7: bool_value
  if (_has_field_[7]) {
    msg->AppendTinyVarInt(7, bool_value_);
  }

  // Field 8: string_value
  if (_has_field_[8]) {
    msg->AppendString(8, string_value_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
