#include "pulsating_cleansing.h"

namespace esphome {
namespace toto_ir {

void PulsatingCleansingButton::press_action() { this->parent_->send_pulsating_cleansing(); }

}  // namespace toto_ir
}  // namespace esphome
