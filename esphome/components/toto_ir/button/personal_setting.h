#pragma once

#include "esphome/components/button/button.h"
#include "../toto_ir.h"

namespace esphome {
namespace toto_ir {

class PersonalSettingButton : public button::Button, public Parented<TotoIR> {
 public:
  PersonalSettingButton() = default;
  void set_water_pressure(const std::string &water_pressure) { this->water_pressure_ = water_pressure; }
  std::string get_water_pressure_() const { return this->water_pressure_; }

 protected:
  void press_action() override;
  std::string water_pressure_{};
};

}  // namespace toto_ir
}  // namespace esphome
