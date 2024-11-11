#include "personal_setting.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.personal_setting_button";

void PersonalSettingButton::press_action() {
  ESP_LOGI(TAG, "Sending personal setting request");
  this->parent_->set_water_pressure(this->get_water_pressure());
  this->parent_->set_water_position(this->get_water_position());
  this->parent_->set_water_temperature(this->get_water_temperature());
  this->parent_->set_seat_temperature(this->get_seat_temperature());
  this->parent_->set_fan_temperature(this->get_fan_temperature());
}

}  // namespace toto_ir
}  // namespace esphome
