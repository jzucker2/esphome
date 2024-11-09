
#pragma once

#include "esphome/core/component.h"
#include "esphome/components/remote_base/remote_base.h"
#include "esphome/components/remote_transmitter/remote_transmitter.h"

namespace esphome {
namespace toto_ir {

using remote_base::RemoteTransmitterBase;

class TotoIR : public Component, public remote_base::RemoteTransmittable {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
  // general functions
  void transmit_(RawTimings &ir_code);
  // functions
  void send_power_toggle();
  void send_rear_wash();
  void send_feminine_wash();
  void send_start_fans();
  void send_stop();
};

}  // namespace toto_ir
}  // namespace esphome
