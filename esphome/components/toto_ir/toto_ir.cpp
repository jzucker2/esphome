#include "esphome/core/log.h"
#include "toto_ir.h"
#include "toto_ir_codes.h"

namespace esphome {
namespace toto_ir {

static const char *TAG = "toto_ir";

void TotoIR::setup() {
  ESP_LOGCONFIG(TAG, "Setting up TotoIR ...");
  this->set_operating_mode(OP_SIMPLE_MODE_STRING);
  this->operating_selector_->publish_state(OP_SIMPLE_MODE_STRING);
}

void TotoIR::loop() {}

void TotoIR::dump_config() {
  ESP_LOGCONFIG(TAG, "Toto IR");
#ifdef USE_SELECT
  ESP_LOGCONFIG(TAG, "Toto IR Select:");
  LOG_SELECT(TAG, "  Operating Mode", this->operating_selector_);
#endif
}

void TotoIR::send_power_toggle() {
  ESP_LOGI(TAG, "Sending power toggle request");
  this->transmit_(TOTO_IR_FIRST_POWER_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_POWER_TIMINGS);
  this->transmit_(TOTO_IR_THIRD_POWER_TIMINGS);
}
void TotoIR::send_rear_wash() {
  ESP_LOGI(TAG, "Sending rear wash request");
  this->transmit_(TOTO_IR_FIRST_REAR_WASH_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_REAR_WASH_TIMINGS);
}
void TotoIR::send_feminine_wash() {
  ESP_LOGI(TAG, "Sending feminine wash request");

  this->transmit_(TOTO_IR_FIRST_FEM_WASH_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_FEM_WASH_TIMINGS);
}
void TotoIR::send_start_fans() {
  ESP_LOGI(TAG, "Sending start fans request");
  this->transmit_(TOTO_IR_FIRST_FAN_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_FAN_TIMINGS);
}
void TotoIR::send_stop() {
  ESP_LOGI(TAG, "Sending stop request");

  this->transmit_(TOTO_IR_FIRST_STOP_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_STOP_TIMINGS);
  this->transmit_(TOTO_IR_THIRD_STOP_TIMINGS);
  this->transmit_(TOTO_IR_FOURTH_STOP_TIMINGS);
  this->transmit_(TOTO_IR_FIFTH_STOP_TIMINGS);
  this->transmit_(TOTO_IR_SIXTH_STOP_TIMINGS);
}

void TotoIR::transmit_(RawTimings ir_code) {
  ESP_LOGD(TAG, "Sending ir_code");
  auto transmit = this->transmitter_->transmit();
  ESP_LOGD(TAG, "Sending ir_code got transmitter");
  auto data = transmit.get_data();
  data->set_data(ir_code);
  data->set_carrier_frequency(38000);
  transmit.set_send_times(3);
  transmit.set_send_wait(40000);
  ESP_LOGD(TAG, "Sending ir_code actual perform transmit");
  transmit.perform();
}

void TotoIR::set_operating_mode(const std::string &state) {
  // If unsupported firmware ignore mode select
  ESP_LOGD(TAG, "Set operating mode!!!!");
  this->current_operating_mode = OP_MODE_TO_UINT.at(state);
  this->operating_selector_->publish_state(state);
  if (current_operating_mode == OP_NORMAL_MODE) {
    ESP_LOGD(TAG, "normal operating mode");
  } else if (current_operating_mode == OP_CALIBRATE_MODE) {
    ESP_LOGD(TAG, "calibrate operating mode");
    this->transmit_(TOTO_IR_FIRST_INCREASE_WATER_PRESSURE_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_INCREASE_WATER_PRESSURE_TIMINGS);
  } else if (current_operating_mode == OP_SIMPLE_MODE) {
    ESP_LOGD(TAG, "simple operating mode");
  }
}

}  // namespace toto_ir
}  // namespace esphome
