#include "esphome/core/log.h"
#include "reset_timer_active.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.reset_timer_active";

// void ResetTimerActive::setup() {
//
// }

void ResetTimerActive::dump_config() { LOG_BINARY_SENSOR("", "Status Binary Sensor", this); }

}  // namespace toto_ir
}  // namespace esphome
