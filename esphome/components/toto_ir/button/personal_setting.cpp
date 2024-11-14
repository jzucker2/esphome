#include "personal_setting.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.personal_setting_button";

void PersonalSettingButton::press_action() {
  ESP_LOGI(TAG, "Sending personal setting request configuration");
  TotoConfig personal_config;
  personal_config.water_pressure = this->get_water_pressure();
  personal_config.water_position = this->get_water_position();
  personal_config.water_temperature = this->get_water_temperature();
  personal_config.seat_temperature = this->get_seat_temperature();
  personal_config.fan_temperature = this->get_fan_temperature();
  this->parent_->set_configuration(personal_config);
}

}  // namespace toto_ir
}  // namespace esphome
