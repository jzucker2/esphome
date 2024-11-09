#include "esphome/core/log.h"
#include "toto_ir.h"

namespace esphome {
namespace toto_ir {

static const char *TAG = "toto_ir";

void TotoIR::setup() {}

void TotoIR::loop() {}

void TotoIR::dump_config() { ESP_LOGCONFIG(TAG, "Toto IR"); }

void TotoIR::send_power_toggle() { ESP_LOGI(TAG, "Sending power toggle request"); }
void TotoIR::send_rear_wash() { ESP_LOGI(TAG, "Sending rear wash request"); }
void TotoIR::send_feminine_wash() { ESP_LOGI(TAG, "Sending feminine wash request"); }
void TotoIR::send_start_fans() {
  ESP_LOGI(TAG, "Sending start fans request");
  esphome::remote_base::RawTimings first_fan_code = {
      6019,  -3010, 564,  -575, 537,  -1686, 538,  -575, 563,   -575, 537,  -575, 562,  -550, 537,   -601,  538,
      -574,  537,   -576, 537,  -575, 560,   -578, 537,  -1686, 538,  -575, 563,  -575, 561,  -551,  537,   -575,
      537,   -575,  563,  -576, 536,  -576,  536,  -576, 536,   -576, 563,  -575, 560,  -552, 536,   -1714, 537,
      -1687, 537,   -575, 561,  -578, 560,   -552, 560,  -552,  536,  -576, 587,  -552, 535,  -1688, 536,   -1714,
      537,   -576,  560,  -552, 559,  -579,  536,  -576, 536,   -576, 536,  -576, 536};

  esphome::remote_base::RawTimings second_fan_code = {
      6017,  -3036, 538,  -574, 538,  -1686, 564,  -574, 538,   -574, 562,  -550, 538,  -575, 563,   -575,  537,
      -575,  561,   -551, 537,  -602, 561,   -550, 537,  -1687, 537,  -602, 537,  -575, 561,  -551,  561,   -551,
      536,   -602,  537,  -575, 537,  -575,  537,  -575, 563,   -576, 536,  -576, 536,  -576, 536,   -1714, 560,
      -1664, 536,   -603, 536,  -576, 560,   -551, 537,  -575,  561,  -578, 536,  -576, 536,  -1688, 562,   -1688,
      536,   -576,  560,  -552, 563,  -576,  560,  -552, 560,   -551, 536,  -577, 586};
  this->transmit_(first_fan_code);
  this->transmit_(second_fan_code);
}
void TotoIR::send_stop() { ESP_LOGI(TAG, "Sending stop request"); }

void TotoIR::transmit_(RawTimings &ir_code) {
  ESP_LOGD(TAG, "Sending ir_code");
  auto transmit = id(remote_transmitter).transmit();
  // auto transmit = this->transmitter_->transmit();
  ESP_LOGD(TAG, "Sending ir_code got transmitter");
  auto data = transmit.get_data();
  data->set_data(ir_code);
  data->set_carrier_frequency(38000);
  transmit.set_send_times(3);
  transmit.set_send_wait(40000);
  ESP_LOGD(TAG, "Sending ir_code actual perform transmit");
  transmit.perform();
}

}  // namespace toto_ir
}  // namespace esphome
