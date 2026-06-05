#pragma once

#include "esphome/components/button/button.h"
#include "../toto_ir.h"

namespace esphome::toto_ir {

class FanButton : public button::Button, public Parented<TotoIR> {
 public:
  FanButton() = default;

 protected:
  void press_action() override;
};

}  // namespace esphome::toto_ir
