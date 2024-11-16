#pragma once

#include "esphome/components/binary_sensor/binary_sensor.h"
#include "../toto_ir.h"

namespace esphome {
namespace toto_ir {

class ResetTimerActive : public Component, binary_sensor::BinarySensor, public Parented<TotoIR> {
 public:
  //  void setup() override;
  void dump_config() override;
};

}  // namespace toto_ir
}  // namespace esphome
