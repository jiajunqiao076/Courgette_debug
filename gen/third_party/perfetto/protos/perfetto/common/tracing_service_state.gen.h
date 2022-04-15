// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_TRACING_SERVICE_STATE_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_TRACING_SERVICE_STATE_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class TracingServiceState;
class TracingServiceState_TracingSession;
class TracingServiceState_DataSource;
class DataSourceDescriptor;
class TracingServiceState_Producer;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT TracingServiceState : public ::protozero::CppMessageObj {
 public:
  using Producer = TracingServiceState_Producer;
  using DataSource = TracingServiceState_DataSource;
  using TracingSession = TracingServiceState_TracingSession;
  enum FieldNumbers {
    kProducersFieldNumber = 1,
    kDataSourcesFieldNumber = 2,
    kTracingSessionsFieldNumber = 6,
    kSupportsTracingSessionsFieldNumber = 7,
    kNumSessionsFieldNumber = 3,
    kNumSessionsStartedFieldNumber = 4,
    kTracingServiceVersionFieldNumber = 5,
  };

  TracingServiceState();
  ~TracingServiceState() override;
  TracingServiceState(TracingServiceState&&) noexcept;
  TracingServiceState& operator=(TracingServiceState&&);
  TracingServiceState(const TracingServiceState&);
  TracingServiceState& operator=(const TracingServiceState&);
  bool operator==(const TracingServiceState&) const;
  bool operator!=(const TracingServiceState& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  const std::vector<TracingServiceState_Producer>& producers() const { return producers_; }
  std::vector<TracingServiceState_Producer>* mutable_producers() { return &producers_; }
  int producers_size() const;
  void clear_producers();
  TracingServiceState_Producer* add_producers();

  const std::vector<TracingServiceState_DataSource>& data_sources() const { return data_sources_; }
  std::vector<TracingServiceState_DataSource>* mutable_data_sources() { return &data_sources_; }
  int data_sources_size() const;
  void clear_data_sources();
  TracingServiceState_DataSource* add_data_sources();

  const std::vector<TracingServiceState_TracingSession>& tracing_sessions() const { return tracing_sessions_; }
  std::vector<TracingServiceState_TracingSession>* mutable_tracing_sessions() { return &tracing_sessions_; }
  int tracing_sessions_size() const;
  void clear_tracing_sessions();
  TracingServiceState_TracingSession* add_tracing_sessions();

  bool has_supports_tracing_sessions() const { return _has_field_[7]; }
  bool supports_tracing_sessions() const { return supports_tracing_sessions_; }
  void set_supports_tracing_sessions(bool value) { supports_tracing_sessions_ = value; _has_field_.set(7); }

  bool has_num_sessions() const { return _has_field_[3]; }
  int32_t num_sessions() const { return num_sessions_; }
  void set_num_sessions(int32_t value) { num_sessions_ = value; _has_field_.set(3); }

  bool has_num_sessions_started() const { return _has_field_[4]; }
  int32_t num_sessions_started() const { return num_sessions_started_; }
  void set_num_sessions_started(int32_t value) { num_sessions_started_ = value; _has_field_.set(4); }

  bool has_tracing_service_version() const { return _has_field_[5]; }
  const std::string& tracing_service_version() const { return tracing_service_version_; }
  void set_tracing_service_version(const std::string& value) { tracing_service_version_ = value; _has_field_.set(5); }

 private:
  std::vector<TracingServiceState_Producer> producers_;
  std::vector<TracingServiceState_DataSource> data_sources_;
  std::vector<TracingServiceState_TracingSession> tracing_sessions_;
  bool supports_tracing_sessions_{};
  int32_t num_sessions_{};
  int32_t num_sessions_started_{};
  std::string tracing_service_version_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<8> _has_field_{};
};


class PERFETTO_EXPORT TracingServiceState_TracingSession : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kIdFieldNumber = 1,
    kConsumerUidFieldNumber = 2,
    kStateFieldNumber = 3,
    kUniqueSessionNameFieldNumber = 4,
    kBufferSizeKbFieldNumber = 5,
    kDurationMsFieldNumber = 6,
    kNumDataSourcesFieldNumber = 7,
    kStartRealtimeNsFieldNumber = 8,
  };

  TracingServiceState_TracingSession();
  ~TracingServiceState_TracingSession() override;
  TracingServiceState_TracingSession(TracingServiceState_TracingSession&&) noexcept;
  TracingServiceState_TracingSession& operator=(TracingServiceState_TracingSession&&);
  TracingServiceState_TracingSession(const TracingServiceState_TracingSession&);
  TracingServiceState_TracingSession& operator=(const TracingServiceState_TracingSession&);
  bool operator==(const TracingServiceState_TracingSession&) const;
  bool operator!=(const TracingServiceState_TracingSession& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_id() const { return _has_field_[1]; }
  uint64_t id() const { return id_; }
  void set_id(uint64_t value) { id_ = value; _has_field_.set(1); }

  bool has_consumer_uid() const { return _has_field_[2]; }
  int32_t consumer_uid() const { return consumer_uid_; }
  void set_consumer_uid(int32_t value) { consumer_uid_ = value; _has_field_.set(2); }

  bool has_state() const { return _has_field_[3]; }
  const std::string& state() const { return state_; }
  void set_state(const std::string& value) { state_ = value; _has_field_.set(3); }

  bool has_unique_session_name() const { return _has_field_[4]; }
  const std::string& unique_session_name() const { return unique_session_name_; }
  void set_unique_session_name(const std::string& value) { unique_session_name_ = value; _has_field_.set(4); }

  const std::vector<uint32_t>& buffer_size_kb() const { return buffer_size_kb_; }
  std::vector<uint32_t>* mutable_buffer_size_kb() { return &buffer_size_kb_; }
  int buffer_size_kb_size() const { return static_cast<int>(buffer_size_kb_.size()); }
  void clear_buffer_size_kb() { buffer_size_kb_.clear(); }
  void add_buffer_size_kb(uint32_t value) { buffer_size_kb_.emplace_back(value); }
  uint32_t* add_buffer_size_kb() { buffer_size_kb_.emplace_back(); return &buffer_size_kb_.back(); }

  bool has_duration_ms() const { return _has_field_[6]; }
  uint32_t duration_ms() const { return duration_ms_; }
  void set_duration_ms(uint32_t value) { duration_ms_ = value; _has_field_.set(6); }

  bool has_num_data_sources() const { return _has_field_[7]; }
  uint32_t num_data_sources() const { return num_data_sources_; }
  void set_num_data_sources(uint32_t value) { num_data_sources_ = value; _has_field_.set(7); }

  bool has_start_realtime_ns() const { return _has_field_[8]; }
  int64_t start_realtime_ns() const { return start_realtime_ns_; }
  void set_start_realtime_ns(int64_t value) { start_realtime_ns_ = value; _has_field_.set(8); }

 private:
  uint64_t id_{};
  int32_t consumer_uid_{};
  std::string state_{};
  std::string unique_session_name_{};
  std::vector<uint32_t> buffer_size_kb_;
  uint32_t duration_ms_{};
  uint32_t num_data_sources_{};
  int64_t start_realtime_ns_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<9> _has_field_{};
};


class PERFETTO_EXPORT TracingServiceState_DataSource : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kDsDescriptorFieldNumber = 1,
    kProducerIdFieldNumber = 2,
  };

  TracingServiceState_DataSource();
  ~TracingServiceState_DataSource() override;
  TracingServiceState_DataSource(TracingServiceState_DataSource&&) noexcept;
  TracingServiceState_DataSource& operator=(TracingServiceState_DataSource&&);
  TracingServiceState_DataSource(const TracingServiceState_DataSource&);
  TracingServiceState_DataSource& operator=(const TracingServiceState_DataSource&);
  bool operator==(const TracingServiceState_DataSource&) const;
  bool operator!=(const TracingServiceState_DataSource& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_ds_descriptor() const { return _has_field_[1]; }
  const DataSourceDescriptor& ds_descriptor() const { return *ds_descriptor_; }
  DataSourceDescriptor* mutable_ds_descriptor() { _has_field_.set(1); return ds_descriptor_.get(); }

  bool has_producer_id() const { return _has_field_[2]; }
  int32_t producer_id() const { return producer_id_; }
  void set_producer_id(int32_t value) { producer_id_ = value; _has_field_.set(2); }

 private:
  ::protozero::CopyablePtr<DataSourceDescriptor> ds_descriptor_;
  int32_t producer_id_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT TracingServiceState_Producer : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kIdFieldNumber = 1,
    kNameFieldNumber = 2,
    kPidFieldNumber = 5,
    kUidFieldNumber = 3,
    kSdkVersionFieldNumber = 4,
  };

  TracingServiceState_Producer();
  ~TracingServiceState_Producer() override;
  TracingServiceState_Producer(TracingServiceState_Producer&&) noexcept;
  TracingServiceState_Producer& operator=(TracingServiceState_Producer&&);
  TracingServiceState_Producer(const TracingServiceState_Producer&);
  TracingServiceState_Producer& operator=(const TracingServiceState_Producer&);
  bool operator==(const TracingServiceState_Producer&) const;
  bool operator!=(const TracingServiceState_Producer& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_id() const { return _has_field_[1]; }
  int32_t id() const { return id_; }
  void set_id(int32_t value) { id_ = value; _has_field_.set(1); }

  bool has_name() const { return _has_field_[2]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(2); }

  bool has_pid() const { return _has_field_[5]; }
  int32_t pid() const { return pid_; }
  void set_pid(int32_t value) { pid_ = value; _has_field_.set(5); }

  bool has_uid() const { return _has_field_[3]; }
  int32_t uid() const { return uid_; }
  void set_uid(int32_t value) { uid_ = value; _has_field_.set(3); }

  bool has_sdk_version() const { return _has_field_[4]; }
  const std::string& sdk_version() const { return sdk_version_; }
  void set_sdk_version(const std::string& value) { sdk_version_ = value; _has_field_.set(4); }

 private:
  int32_t id_{};
  std::string name_{};
  int32_t pid_{};
  int32_t uid_{};
  std::string sdk_version_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<6> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_TRACING_SERVICE_STATE_PROTO_CPP_H_
