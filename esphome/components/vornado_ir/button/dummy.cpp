#include "dummy.h"

namespace esphome {
namespace vornado_ir {

static const char *const TAG = "vornado_ir.dummy_button";

void DummyButton::press_action() { this->parent_->send_dummy(); }

}  // namespace vornado_ir
}  // namespace esphome
