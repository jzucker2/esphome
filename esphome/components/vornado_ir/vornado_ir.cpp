#include "esphome/core/log.h"
#include "vornado_ir.h"
#include "vornado_ir_codes.h"
#include "esphome/core/application.h"

namespace esphome {
namespace vornado_ir {

static const char *TAG = "vornado_ir";

void VornadoIR::setup() { ESP_LOGCONFIG(TAG, "Setting up VornadoIR ..."); }

void VornadoIR::loop() {}

void VornadoIR::dump_config() { ESP_LOGCONFIG(TAG, "Toto IR"); }

void VornadoIR::send_power_toggle(bool reset_timer) {
  ESP_LOGI(TAG, "Sending power toggle request");
  this->transmit_(TOTO_IR_FIRST_POWER_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_POWER_TIMINGS);
  this->transmit_(TOTO_IR_THIRD_POWER_TIMINGS);
}

void VornadoIR::send_start_fans(bool reset_timer) {
  ESP_LOGI(TAG, "Sending start fans request");
  this->transmit_(TOTO_IR_FIRST_FAN_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_FAN_TIMINGS);
}

void VornadoIR::transmit_(RawTimings ir_code) {
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

}  // namespace vornado_ir
}  // namespace esphome
