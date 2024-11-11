#include "oscillating_cleansing.h"

namespace esphome {
namespace toto_ir {

void OscillatingCleansingButton::press_action() { this->parent_->send_oscillating_cleansing(); }

}  // namespace toto_ir
}  // namespace esphome
