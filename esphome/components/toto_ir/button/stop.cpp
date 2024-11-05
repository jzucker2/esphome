#include "stop.h"

namespace esphome {
namespace toto_ir {

void StopButton::press_action() { this->parent_->send_stop(); }

}  // namespace toto_ir
}  // namespace esphome
