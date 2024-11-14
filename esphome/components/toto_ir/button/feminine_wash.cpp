#include "feminine_wash.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.feminine_wash_button";

void FeminineWashButton::press_action() { this->parent_->send_feminine_wash(true); }

}  // namespace toto_ir
}  // namespace esphome
