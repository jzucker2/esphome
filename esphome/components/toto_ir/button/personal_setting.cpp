#include "personal_setting.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.personal_setting_button";

void PersonalSettingButton::setup() {
  TotoConfig config;
  config.water_pressure = this->get_water_pressure();
  config.water_position = this->get_water_position();
  config.water_temperature = this->get_water_temperature();
  config.seat_temperature = this->get_seat_temperature();
  config.fan_temperature = this->get_fan_temperature();
  this->personal_config_ = config;
}

void PersonalSettingButton::press_action() {
  ESP_LOGI(TAG, "Sending personal setting request configuration");
  this->parent_->set_configuration(this->personal_config_);
}

}  // namespace toto_ir
}  // namespace esphome
