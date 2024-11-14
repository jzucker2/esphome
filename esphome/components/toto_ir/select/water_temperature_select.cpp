#include "water_temperature_select.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.water_temperature_select";

void TotoIRWaterTemperatureSelect::control(const std::string &value) {
  this->publish_state(value);
  this->parent_->set_water_temperature(value, true);
}

}  // namespace toto_ir
}  // namespace esphome
