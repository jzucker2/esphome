#include "fan.h"

namespace esphome {
namespace vornado_ir {

static const char *const TAG = "vornado_ir.fan_button";

void FanButton::press_action() { this->parent_->send_start_fans(true); }

}  // namespace vornado_ir
}  // namespace esphome
