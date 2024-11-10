#include "operating_mode_select.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.select";

void TotoIRSelect::control(const std::string &value) {
  this->publish_state(value);
  this->parent_->set_operating_mode(value);
}

}  // namespace toto_ir
}  // namespace esphome
