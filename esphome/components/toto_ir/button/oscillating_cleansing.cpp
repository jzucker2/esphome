#include "oscillating_cleansing.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.oscillating_cleansing_button";

void OscillatingCleansingButton::press_action() { this->parent_->send_oscillating_cleansing(true); }

}  // namespace toto_ir
}  // namespace esphome
