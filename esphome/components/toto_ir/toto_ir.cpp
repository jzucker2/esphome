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
  std::vector<int32_t> hvac_code;
  fan_first_code = {6019, -3010, 564, -575, 537, -1686, 538, -575,  563, -575,  537, -575,  562, -550,
                    537,  -601,  538, -574, 537, -576,  537, -575,  560, -578,  537, -1686, 538, -575,
                    563,  -575,  561, -551, 537, -575,  537, -575,  563, -576,  536, -576,  536, -576,
                    536,  -576,  563, -575, 560, -552,  536, -1714, 537, -1687, 537, -575,  561, -578,
                    560,  -552,  560, -552, 536, -576,  587, -552,  535, -1688, 536, -1714, 537, -576,
                    560,  -552,  559, -579, 536, -576,  536, -576,  536, -576,  536};
  // Call remote transmitter using selected code
  auto transmit = this->transmitter_->transmit();
  // auto call = id(my_remote_transmitter).transmit();
  esphome::remote_base::RemoteTransmitData *RTD;
  RTD.set_data(fan_first_code);
  RTD.set_carrier_frequency(38000);
  transmit.set_send_times(3);
  transmit.set_send_wait(40000);
  esphome::remote_base::RawAction<esphome::remote_base::RemoteTransmitData>().encode(RTD);
  transmit.get_data(RTD);
  transmit.perform();
}
void TotoIR::send_stop() { ESP_LOGI(TAG, "Sending stop request"); }

void TotoIR::send_data() {
  ESP_LOGD(TAG, "Sending data");

  auto transmit = this->transmitter_->transmit();
  auto *data = transmit.get_data();

  data->set_carrier_frequency(38000);
  transmit.perform();
}

}  // namespace toto_ir
}  // namespace esphome
