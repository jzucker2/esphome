#pragma once

#include "esphome/components/button/button.h"
#include "../toto_ir.h"

namespace esphome {
namespace toto_ir {

class PersonalSettingButton : public button::Button, public Parented<TotoIR> {
 public:
  PersonalSettingButton() = default;
  void set_water_pressure(const std::string &water_pressure) { this->water_pressure_ = water_pressure; }
  std::string get_water_pressure() const { return this->water_pressure_; }
  void set_water_position(const std::string &water_position) { this->water_position_ = water_position; }
  std::string get_water_position() const { return this->water_position_; }
  void set_water_temperature(const std::string &water_temperature) { this->water_temperature_ = water_temperature; }
  std::string get_water_temperature() const { return this->water_temperature_; }
  void set_fan_temperature(const std::string &fan_temperature) { this->fan_temperature_ = fan_temperature; }
  std::string get_fan_temperature() const { return this->fan_temperature_; }
  void set_seat_temperature(const std::string &seat_temperature) { this->seat_temperature_ = seat_temperature; }
  std::string get_seat_temperature() const { return this->seat_temperature_; }

 protected:
  void press_action() override;
  std::string water_pressure_{};
  std::string water_position_{};
  std::string water_temperature_{};
  std::string fan_temperature_{};
  std::string seat_temperature_{};
};

}  // namespace toto_ir
}  // namespace esphome
