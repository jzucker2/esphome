#include "esphome/core/log.h"
#include "vornado_ir.h"
#include "vornado_ir_codes.h"

namespace esphome {
namespace vornado_ir {

static const char *const TAG = "vornado_ir";

void VornadoIR::dump_config() { ESP_LOGCONFIG(TAG, "Vornado IR"); }

void VornadoIR::send_power_toggle() {
  ESP_LOGI(TAG, "Sending power toggle request");
  this->transmit_(VORNADO_IR_POWER_TOGGLE_CODE, VORNADO_IR_NBITS);
}

void VornadoIR::send_change_direction() {
  ESP_LOGI(TAG, "Sending change direction request");
  this->transmit_(VORNADO_IR_CHANGE_DIRECTION_CODE, VORNADO_IR_NBITS);
}

void VornadoIR::send_increase() {
  ESP_LOGI(TAG, "Sending increase request");
  this->transmit_(VORNADO_IR_INCREASE_CODE, VORNADO_IR_NBITS);
}

void VornadoIR::send_decrease() {
  ESP_LOGI(TAG, "Sending decrease request");
  this->transmit_(VORNADO_IR_DECREASE_CODE, VORNADO_IR_NBITS);
}

void VornadoIR::transmit_(uint32_t code, uint8_t nbits) {
  ESP_LOGD(TAG, "Sending ir_code");
  auto transmit = this->transmitter_->transmit();
  ESP_LOGD(TAG, "Sending ir_code got transmitter");
  remote_base::SymphonyData data{};
  data.data = code;
  data.nbits = nbits;
  data.repeats = 2;
  remote_base::SymphonyProtocol().encode(transmit.get_data(), data);
  ESP_LOGD(TAG, "Sending ir_code actual perform transmit");
  transmit.perform();
}

}  // namespace vornado_ir
}  // namespace esphome
