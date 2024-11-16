#pragma once

#include "esphome/core/component.h"
#include "esphome/components/binary_sensor/binary_sensor.h"
#include "../toto_ir.h"

namespace esphome {
namespace toto_ir {

class ResetTimerActive : binary_sensor::BinarySensor, public Parented<TotoIR> {
  // public:
  //  void setup() override;
  void dump_config() override;
};

}  // namespace toto_ir
}  // namespace esphome
