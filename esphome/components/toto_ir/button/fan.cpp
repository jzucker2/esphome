#include "fan.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.fan_button";

void FanButton::press_action() { this->parent_->send_start_fans(); }

}  // namespace toto_ir
}  // namespace esphome
