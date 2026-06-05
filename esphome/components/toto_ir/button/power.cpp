#include "power.h"

namespace esphome::toto_ir {

static const char *const TAG = "toto_ir.power_toggle_button";

void PowerButton::press_action() { this->parent_->send_power_toggle(); }

}  // namespace esphome::toto_ir
