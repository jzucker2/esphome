#include "seat_temperature_select.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"

namespace esphome::toto_ir {

static const char *const TAG = "toto_ir.seat_temperature_select";

void TotoIRSeatTemperatureSelect::control(const std::string &value) {
  this->publish_state(value);
  this->parent_->set_seat_temperature(value, true);
}

}  // namespace esphome::toto_ir
