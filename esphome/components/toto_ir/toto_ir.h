#pragma once

#include "esphome/core/component.h"
#include "esphome/components/remote_base/remote_base.h"
#include "esphome/components/remote_transmitter/remote_transmitter.h"
#ifdef USE_SELECT
#include "esphome/components/select/select.h"
#endif
#include <map>
#include <functional>

namespace esphome {
namespace toto_ir {

using remote_base::RemoteTransmitterBase;
using remote_base::RawTimings;

static const std::string DEFAULT_WATER_OPTION_STRING = "3";
static const std::string DEFAULT_TEMPERATURE_OPTION_STRING = "2";

enum WaterOptionsStruct : uint8_t {
  WATER_OPTION_1 = 1,
  WATER_OPTION_2 = 2,
  WATER_OPTION_3 = 3,
  WATER_OPTION_4 = 4,
  WATER_OPTION_5 = 5
};
static const std::map<std::string, uint8_t> WATER_OPTION_TO_UINT{
    {"1", WATER_OPTION_1}, {"2", WATER_OPTION_2}, {"3", WATER_OPTION_3}, {"4", WATER_OPTION_4}, {"5", WATER_OPTION_5}};

enum WaterSeatTempOptionsStruct : uint8_t {
  WATER_SEAT_TEMP_OPTION_OFF = 0,
  WATER_SEAT_TEMP_OPTION_1 = 1,
  WATER_SEAT_TEMP_OPTION_2 = 2,
  WATER_SEAT_TEMP_OPTION_3 = 3,
};
static const std::map<std::string, uint8_t> WATER_SEAT_TEMP_OPTION_TO_UINT{{"Off", WATER_SEAT_TEMP_OPTION_OFF},
                                                                           {"1", WATER_SEAT_TEMP_OPTION_1},
                                                                           {"2", WATER_SEAT_TEMP_OPTION_2},
                                                                           {"3", WATER_SEAT_TEMP_OPTION_3}};

enum FanTempOptionsStruct : uint8_t {
  FAN_TEMP_OPTION_1 = 1,
  FAN_TEMP_OPTION_2 = 2,
  FAN_TEMP_OPTION_3 = 3,
};
static const std::map<std::string, uint8_t> FAN_TEMP_OPTION_TO_UINT{
    {"1", FAN_TEMP_OPTION_1}, {"2", FAN_TEMP_OPTION_2}, {"3", FAN_TEMP_OPTION_3}};

struct toto_ir::TotoConfig {
  std::string water_pressure;
  std::string water_position;
  std::string water_temperature;
  std::string seat_temperature;
  std::string fan_temperature;
};

const struct toto_ir::TotoConfig TOTO_RESET_CONFIG = {"3", "3", "2", "2", "2"};

class TotoIR : public Component, public remote_base::RemoteTransmittable {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
  // general functions
  void transmit_(RawTimings ir_code);
#ifdef USE_SELECT
  void set_water_pressure_select(select::Select *selector) { this->water_pressure_selector_ = selector; };
  void set_water_position_select(select::Select *selector) { this->water_position_selector_ = selector; };
  void set_water_temperature_select(select::Select *selector) { this->water_temperature_selector_ = selector; };
  void set_fan_temperature_select(select::Select *selector) { this->fan_temperature_selector_ = selector; };
  void set_seat_temperature_select(select::Select *selector) { this->seat_temperature_selector_ = selector; };
#endif
  // direct actions
  void send_power_toggle();
  void send_rear_wash();
  void send_feminine_wash();
  void send_start_fans();
  void send_stop();
  void send_oscillating_cleansing();
  void send_pulsating_cleansing();
  // level sets
  void set_water_pressure(const std::string &state);
  uint8_t current_water_pressure{WATER_OPTION_3};
  void set_water_position(const std::string &state);
  uint8_t current_water_position{WATER_OPTION_3};
  void set_water_temperature(const std::string &state);
  uint8_t current_water_temperature{WATER_SEAT_TEMP_OPTION_2};
  void set_seat_temperature(const std::string &state);
  uint8_t current_seat_temperature{WATER_SEAT_TEMP_OPTION_2};
  void set_fan_temperature(const std::string &state);
  uint8_t current_fan_temperature{FAN_TEMP_OPTION_2};
  // multi set
  void set_configuration(const toto_ir::TotoConfig &config);
  void reset_configuration();
#ifdef USE_SELECT
  select::Select *water_pressure_selector_{nullptr};
  select::Select *water_position_selector_{nullptr};
  select::Select *water_temperature_selector_{nullptr};
  select::Select *fan_temperature_selector_{nullptr};
  select::Select *seat_temperature_selector_{nullptr};
#endif
};

}  // namespace toto_ir
}  // namespace esphome
