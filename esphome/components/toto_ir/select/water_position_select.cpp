#include "water_position_select.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"

namespace esphome::toto_ir {

static const char *const TAG = "toto_ir.water_position_select";

void TotoIRWaterPositionSelect::control(const std::string &value) {
  this->publish_state(value);
  this->parent_->set_water_position(value, true);
}

}  // namespace esphome::toto_ir
