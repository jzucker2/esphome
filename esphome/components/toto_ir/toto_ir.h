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

enum OpModeStruct : uint8_t { OP_NORMAL_MODE = 1, OP_CALIBRATE_MODE = 2, OP_SIMPLE_MODE = 3 };
static const std::map<std::string, uint8_t> OP_MODE_TO_UINT{
    {"Normal", OP_NORMAL_MODE}, {"Calibrate", OP_CALIBRATE_MODE}, {"Simple", OP_SIMPLE_MODE}};

class TotoIR : public Component, public remote_base::RemoteTransmittable {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
  // general functions
  void transmit_(RawTimings ir_code);
#ifdef USE_SELECT
  void set_operating_mode_select(select::Select *selector) { this->operating_selector_ = selector; };
#endif
  // functions
  void send_power_toggle();
  void send_rear_wash();
  void send_feminine_wash();
  void send_start_fans();
  void send_stop();
  void set_operating_mode(const std::string &state);
#ifdef USE_SELECT
  select::Select *operating_selector_{nullptr};
#endif
};

}  // namespace toto_ir
}  // namespace esphome
