
#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace toto_ir {

class TotoIR : public Component {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
  // functions
  void send_power_toggle();
  void send_rear_wash();
  void send_feminine_wash();
  void send_start_fans();
  void send_stop();
};

}  // namespace toto_ir
}  // namespace esphome
