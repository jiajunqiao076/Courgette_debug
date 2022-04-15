// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_RENDERER_SCHEDULER_STATE_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_RENDERER_SCHEDULER_STATE_PROTO_CPP_H_

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
class ChromeRendererSchedulerState;
enum ChromeRAILMode : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {
enum ChromeRAILMode : int {
  RAIL_MODE_NONE = 0,
  RAIL_MODE_RESPONSE = 1,
  RAIL_MODE_ANIMATION = 2,
  RAIL_MODE_IDLE = 3,
  RAIL_MODE_LOAD = 4,
};

class PERFETTO_EXPORT ChromeRendererSchedulerState : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kRailModeFieldNumber = 1,
    kIsBackgroundedFieldNumber = 2,
    kIsHiddenFieldNumber = 3,
  };

  ChromeRendererSchedulerState();
  ~ChromeRendererSchedulerState() override;
  ChromeRendererSchedulerState(ChromeRendererSchedulerState&&) noexcept;
  ChromeRendererSchedulerState& operator=(ChromeRendererSchedulerState&&);
  ChromeRendererSchedulerState(const ChromeRendererSchedulerState&);
  ChromeRendererSchedulerState& operator=(const ChromeRendererSchedulerState&);
  bool operator==(const ChromeRendererSchedulerState&) const;
  bool operator!=(const ChromeRendererSchedulerState& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_rail_mode() const { return _has_field_[1]; }
  ChromeRAILMode rail_mode() const { return rail_mode_; }
  void set_rail_mode(ChromeRAILMode value) { rail_mode_ = value; _has_field_.set(1); }

  bool has_is_backgrounded() const { return _has_field_[2]; }
  bool is_backgrounded() const { return is_backgrounded_; }
  void set_is_backgrounded(bool value) { is_backgrounded_ = value; _has_field_.set(2); }

  bool has_is_hidden() const { return _has_field_[3]; }
  bool is_hidden() const { return is_hidden_; }
  void set_is_hidden(bool value) { is_hidden_ = value; _has_field_.set(3); }

 private:
  ChromeRAILMode rail_mode_{};
  bool is_backgrounded_{};
  bool is_hidden_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_RENDERER_SCHEDULER_STATE_PROTO_CPP_H_
