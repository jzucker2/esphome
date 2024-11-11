#include "stop.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.stop_button";

void StopButton::press_action() { this->parent_->send_stop(); }

}  // namespace toto_ir
}  // namespace esphome
