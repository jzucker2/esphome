#include "esphome/core/log.h"
#include "reset_timer_active.h"

namespace esphome::toto_ir {

static const char *const TAG = "toto_ir.reset_timer_active";

void ResetTimerActive::dump_config() { LOG_BINARY_SENSOR("", "Reset Timer Active Binary Sensor", this); }

}  // namespace esphome::toto_ir
