#include "personal_setting.h"

namespace esphome {
namespace toto_ir {

void PersonalSettingButton::press_action() { this->parent_->send_personal_setting(); }

}  // namespace toto_ir
}  // namespace esphome
