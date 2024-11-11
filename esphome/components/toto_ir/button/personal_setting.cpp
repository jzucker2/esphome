#include "personal_setting.h"

namespace esphome {
namespace toto_ir {

static const char *const TAG = "toto_ir.personal_setting_button";

void PersonalSettingButton::press_action() {
  ESP_LOGI(TAG, "Sending personal setting request");
  this->parent_->set_water_pressure("5");
  this->parent_->set_water_position("5");
  this->parent_->set_water_temperature("3");
  this->parent_->set_seat_temperature("3");
  this->parent_->set_fan_temperature("3");
}

}  // namespace toto_ir
}  // namespace esphome
