#pragma once

#include "../toto_ir.h"
#include "esphome/components/select/select.h"

namespace esphome {
namespace toto_ir {

class TotoIRSeatTemperatureSelect : public Component, public select::Select, public Parented<TotoIR> {
 public:
  TotoIRSeatTemperatureSelect() = default;

 protected:
  void control(const std::string &value) override;
};

}  // namespace toto_ir
}  // namespace esphome
