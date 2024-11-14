#include "reset.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.reset_button";

void ResetButton::press_action() { this->parent_->reset_configuration(false); }

}  // namespace toto_ir
}  // namespace esphome
