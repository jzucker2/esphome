#include "power.h"

namespace esphome {
namespace toto_ir {

void PowerButton::press_action() { this->parent_->send_power_toggle(); }

}  // namespace toto_ir
}  // namespace esphome
