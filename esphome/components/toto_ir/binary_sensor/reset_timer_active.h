#pragma once

#include "esphome/core/component.h"
#include "esphome/components/binary_sensor/binary_sensor.h"

namespace esphome {
namespace toto_ir {

class ResetTimerActive : binary_sensor::BinarySensor, public Component {
 public:
  //  void setup() override;
  void dump_config() override;
};

}  // namespace toto_ir
}  // namespace esphome
