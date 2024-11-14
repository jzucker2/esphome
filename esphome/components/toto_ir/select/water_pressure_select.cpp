#include "water_pressure_select.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.water_pressure_select";

void TotoIRWaterPressureSelect::control(const std::string &value) {
  this->publish_state(value);
  this->parent_->set_water_pressure(value, true);
}

}  // namespace toto_ir
}  // namespace esphome
