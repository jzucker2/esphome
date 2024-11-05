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
void TotoIR::send_start_fans() { ESP_LOGI(TAG, "Sending start fans request"); }
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
