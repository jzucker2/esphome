#include "pulsating_cleansing.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.pulsating_cleansing_button";

void PulsatingCleansingButton::press_action() { this->parent_->send_pulsating_cleansing(true); }

}  // namespace toto_ir
}  // namespace esphome
