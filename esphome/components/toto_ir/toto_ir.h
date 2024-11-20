#pragma once

#include "esphome/core/component.h"
#include "esphome/components/remote_base/remote_base.h"
#include "esphome/components/remote_transmitter/remote_transmitter.h"
#ifdef USE_SELECT
#include "esphome/components/select/select.h"
#endif
#ifdef USE_BINARY_SENSOR
#include "esphome/components/binary_sensor/binary_sensor.h"
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

struct TotoConfig {
  std::string water_pressure;
  std::string water_position;
  std::string water_temperature;
  std::string seat_temperature;
  std::string fan_temperature;
};

const struct TotoConfig TOTO_RESET_CONFIG = {"3", "3", "2", "2", "2"};

class TotoIR : public Component, public remote_base::RemoteTransmittable {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
  // general functions
  void transmit_(const RawTimings &ir_code);
  void set_reset_timer_duration_seconds(int reset_timer_duration_seconds) {
    this->reset_timer_duration_seconds_ = reset_timer_duration_seconds;
  }
  // direct actions
  void send_power_toggle(bool reset_timer = false);
  void send_rear_wash(bool reset_timer = false);
  void send_feminine_wash(bool reset_timer = false);
  void send_start_fans(bool reset_timer = false);
  void send_stop(bool reset_timer = false);
  void send_oscillating_cleansing(bool reset_timer = false);
  void send_pulsating_cleansing(bool reset_timer = false);
  // level sets
  void set_water_pressure(const std::string &state, bool reset_timer = false);
  uint8_t current_water_pressure{WATER_OPTION_3};
  void set_water_position(const std::string &state, bool reset_timer = false);
  uint8_t current_water_position{WATER_OPTION_3};
  void set_water_temperature(const std::string &state, bool reset_timer = false);
  uint8_t current_water_temperature{WATER_SEAT_TEMP_OPTION_2};
  void set_seat_temperature(const std::string &state, bool reset_timer = false);
  uint8_t current_seat_temperature{WATER_SEAT_TEMP_OPTION_2};
  void set_fan_temperature(const std::string &state, bool reset_timer = false);
  uint8_t current_fan_temperature{FAN_TEMP_OPTION_2};
  // multi set
  void set_configuration(const TotoConfig &config, bool reset_timer = false);
  void reset_configuration(bool reset_timer = false);
#ifdef USE_SELECT
  SUB_SELECT(water_pressure)
  SUB_SELECT(water_position)
  SUB_SELECT(water_temperature)
  SUB_SELECT(fan_temperature)
  SUB_SELECT(seat_temperature)
#endif
#ifdef USE_BINARY_SENSOR
  SUB_BINARY_SENSOR(reset_timer_active)
#endif
 protected:
  // reset timer
  void set_reset_timer_();
  bool has_active_reset_timer_ = false;
  int reset_timer_duration_seconds_ = 0;
  bool set_has_active_reset_timer_(bool active_reset_timer, bool publish_state = true);
  bool get_reset_timer_enabled_();
};

}  // namespace toto_ir
}  // namespace esphome
