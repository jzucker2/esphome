#include "rear_wash.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.rear_wash_button";

void RearWashButton::press_action() { this->parent_->send_rear_wash(true); }

}  // namespace toto_ir
}  // namespace esphome
