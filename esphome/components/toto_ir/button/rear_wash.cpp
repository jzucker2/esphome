#include "rear_wash.h"

namespace esphome {
namespace toto_ir {

void RearWashButton::press_action() { this->parent_->start_self_cleaning(); }

}  // namespace toto_ir
}  // namespace esphome
