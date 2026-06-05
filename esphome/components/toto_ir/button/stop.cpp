#include "stop.h"

namespace esphome::toto_ir {

static const char *const TAG = "toto_ir.stop_button";

void StopButton::press_action() { this->parent_->send_stop(true); }

}  // namespace esphome::toto_ir
