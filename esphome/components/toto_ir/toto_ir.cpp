#include "esphome/core/log.h"
#include "toto_ir.h"
#include "toto_ir_codes.h"

namespace esphome {
namespace toto_ir {

static const char *TAG = "toto_ir";

void TotoIR::setup() {
  ESP_LOGCONFIG(TAG, "Setting up TotoIR ...");
  this->set_water_pressure(DEFAULT_WATER_OPTION_STRING);
  this->water_pressure_selector_->publish_state(DEFAULT_WATER_OPTION_STRING);
  this->set_water_position(DEFAULT_WATER_OPTION_STRING);
  this->water_position_selector_->publish_state(DEFAULT_WATER_OPTION_STRING);
}

void TotoIR::loop() {}

void TotoIR::dump_config() {
  ESP_LOGCONFIG(TAG, "Toto IR");
#ifdef USE_SELECT
  ESP_LOGCONFIG(TAG, "Toto IR Select:");
  LOG_SELECT(TAG, "Water Pressure", this->water_pressure_selector_);
  LOG_SELECT(TAG, "Water Position", this->water_position_selector_);
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

void TotoIR::set_water_pressure(const std::string &state) {
  ESP_LOGD(TAG, "Set water pressure!!!!");
  this->current_water_pressure = WATER_OPTION_TO_UINT.at(state);
  this->water_pressure_selector_->publish_state(state);
  if (current_water_pressure == WATER_OPTION_1) {
    ESP_LOGD(TAG, "lowest water pressure");
  } else if (current_water_pressure == WATER_OPTION_2) {
    ESP_LOGD(TAG, "2nd lowest water pressure");
  } else if (current_water_pressure == WATER_OPTION_3) {
    ESP_LOGD(TAG, "middle water pressure");
    this->transmit_(TOTO_IR_FIRST_INCREASE_WATER_PRESSURE_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_INCREASE_WATER_PRESSURE_TIMINGS);
  } else if (current_water_pressure == WATER_OPTION_4) {
    ESP_LOGD(TAG, "higher water pressure");
  } else if (current_water_pressure == WATER_OPTION_5) {
    ESP_LOGD(TAG, "highest water pressure");
  }
}

void TotoIR::set_water_position(const std::string &state) {
  ESP_LOGD(TAG, "Set water position!!!!");
  this->current_water_position = WATER_OPTION_TO_UINT.at(state);
  this->water_position_selector_->publish_state(state);
  if (current_water_position == WATER_OPTION_1) {
    ESP_LOGD(TAG, "lowest water position");
  } else if (current_water_position == WATER_OPTION_2) {
    ESP_LOGD(TAG, "2nd lowest water position");
  } else if (current_water_position == WATER_OPTION_3) {
    ESP_LOGD(TAG, "middle water position");
    this->transmit_(TOTO_IR_FIRST_INCREASE_WATER_POSITION_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_INCREASE_WATER_POSITION_TIMINGS);
  } else if (current_water_position == WATER_OPTION_4) {
    ESP_LOGD(TAG, "higher water position");
  } else if (current_water_position == WATER_OPTION_5) {
    ESP_LOGD(TAG, "highest water position");
  }
}

}  // namespace toto_ir
}  // namespace esphome
