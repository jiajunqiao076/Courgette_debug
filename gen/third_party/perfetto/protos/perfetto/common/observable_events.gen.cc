#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/common/observable_events.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ObservableEvents::ObservableEvents() = default;
ObservableEvents::~ObservableEvents() = default;
ObservableEvents::ObservableEvents(const ObservableEvents&) = default;
ObservableEvents& ObservableEvents::operator=(const ObservableEvents&) = default;
ObservableEvents::ObservableEvents(ObservableEvents&&) noexcept = default;
ObservableEvents& ObservableEvents::operator=(ObservableEvents&&) = default;

bool ObservableEvents::operator==(const ObservableEvents& other) const {
  return unknown_fields_ == other.unknown_fields_
   && instance_state_changes_ == other.instance_state_changes_
   && all_data_sources_started_ == other.all_data_sources_started_;
}

int ObservableEvents::instance_state_changes_size() const { return static_cast<int>(instance_state_changes_.size()); }
void ObservableEvents::clear_instance_state_changes() { instance_state_changes_.clear(); }
ObservableEvents_DataSourceInstanceStateChange* ObservableEvents::add_instance_state_changes() { instance_state_changes_.emplace_back(); return &instance_state_changes_.back(); }
bool ObservableEvents::ParseFromArray(const void* raw, size_t size) {
  instance_state_changes_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* instance_state_changes */:
        instance_state_changes_.emplace_back();
        instance_state_changes_.back().ParseFromArray(field.data(), field.size());
        break;
      case 2 /* all_data_sources_started */:
        field.get(&all_data_sources_started_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ObservableEvents::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ObservableEvents::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ObservableEvents::Serialize(::protozero::Message* msg) const {
  // Field 1: instance_state_changes
  for (auto& it : instance_state_changes_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  // Field 2: all_data_sources_started
  if (_has_field_[2]) {
    msg->AppendTinyVarInt(2, all_data_sources_started_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}


ObservableEvents_DataSourceInstanceStateChange::ObservableEvents_DataSourceInstanceStateChange() = default;
ObservableEvents_DataSourceInstanceStateChange::~ObservableEvents_DataSourceInstanceStateChange() = default;
ObservableEvents_DataSourceInstanceStateChange::ObservableEvents_DataSourceInstanceStateChange(const ObservableEvents_DataSourceInstanceStateChange&) = default;
ObservableEvents_DataSourceInstanceStateChange& ObservableEvents_DataSourceInstanceStateChange::operator=(const ObservableEvents_DataSourceInstanceStateChange&) = default;
ObservableEvents_DataSourceInstanceStateChange::ObservableEvents_DataSourceInstanceStateChange(ObservableEvents_DataSourceInstanceStateChange&&) noexcept = default;
ObservableEvents_DataSourceInstanceStateChange& ObservableEvents_DataSourceInstanceStateChange::operator=(ObservableEvents_DataSourceInstanceStateChange&&) = default;

bool ObservableEvents_DataSourceInstanceStateChange::operator==(const ObservableEvents_DataSourceInstanceStateChange& other) const {
  return unknown_fields_ == other.unknown_fields_
   && producer_name_ == other.producer_name_
   && data_source_name_ == other.data_source_name_
   && state_ == other.state_;
}

bool ObservableEvents_DataSourceInstanceStateChange::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* producer_name */:
        field.get(&producer_name_);
        break;
      case 2 /* data_source_name */:
        field.get(&data_source_name_);
        break;
      case 3 /* state */:
        field.get(&state_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ObservableEvents_DataSourceInstanceStateChange::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ObservableEvents_DataSourceInstanceStateChange::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ObservableEvents_DataSourceInstanceStateChange::Serialize(::protozero::Message* msg) const {
  // Field 1: producer_name
  if (_has_field_[1]) {
    msg->AppendString(1, producer_name_);
  }

  // Field 2: data_source_name
  if (_has_field_[2]) {
    msg->AppendString(2, data_source_name_);
  }

  // Field 3: state
  if (_has_field_[3]) {
    msg->AppendVarInt(3, state_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
