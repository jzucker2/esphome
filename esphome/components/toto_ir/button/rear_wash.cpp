#include "rear_wash.h"

namespace esphome {
namespace toto_ir {

void RearWashButton::press_action() { this->parent_->send_rear_wash(); }

}  // namespace toto_ir
}  // namespace esphome
