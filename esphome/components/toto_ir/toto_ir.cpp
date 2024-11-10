#include "esphome/core/log.h"
#include "toto_ir.h"
#include "toto_ir_codes.h"

namespace esphome {
namespace toto_ir {

static const char *TAG = "toto_ir";

void TotoIR::setup() {}

void TotoIR::loop() {}

void TotoIR::dump_config() { ESP_LOGCONFIG(TAG, "Toto IR"); }

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
}

}  // namespace toto_ir
}  // namespace esphome
