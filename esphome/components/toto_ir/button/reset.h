#pragma once

#include "esphome/components/button/button.h"
#include "../toto_ir.h"

namespace esphome::toto_ir {

class ResetButton : public button::Button, public Parented<TotoIR> {
 public:
  ResetButton() = default;

 protected:
  void press_action() override;
};

}  // namespace esphome::toto_ir
