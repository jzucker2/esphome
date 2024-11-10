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

static const std::string DEFAULT_WATER_PRESSURE_STRING = "3";

enum WaterPressureStruct : uint8_t {
  WATER_PRESSURE_1 = 1,
  WATER_PRESSURE_2 = 2,
  WATER_PRESSURE_3 = 3,
  WATER_PRESSURE_4 = 4,
  WATER_PRESSURE_5 = 5
};
static const std::map<std::string, uint8_t> WATER_PRESSURE_TO_UINT{{"1", WATER_PRESSURE_1},
                                                                   {"2", WATER_PRESSURE_2},
                                                                   {"3", WATER_PRESSURE_3},
                                                                   {"4", WATER_PRESSURE_4},
                                                                   {"5", WATER_PRESSURE_5}};

class TotoIR : public Component, public remote_base::RemoteTransmittable {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
  // general functions
  void transmit_(RawTimings ir_code);
#ifdef USE_SELECT
  void set_water_pressure_select(select::Select *selector) { this->water_pressure_selector_ = selector; };
#endif
  // functions
  void send_power_toggle();
  void send_rear_wash();
  void send_feminine_wash();
  void send_start_fans();
  void send_stop();
  void set_water_pressure(const std::string &state);
  uint8_t current_water_pressure{WATER_PRESSURE_3};
#ifdef USE_SELECT
  select::Select *water_pressure_selector_{nullptr};
#endif
};

}  // namespace toto_ir
}  // namespace esphome
