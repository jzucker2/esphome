#include "feminine_wash.h"

namespace esphome {
namespace toto_ir {

void FeminineWashButton::press_action() { this->parent_->send_feminine_wash(); }

}  // namespace toto_ir
}  // namespace esphome
