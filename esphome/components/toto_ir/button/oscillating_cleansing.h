#pragma once

#include "esphome/components/button/button.h"
#include "../toto_ir.h"

namespace esphome::toto_ir {

class OscillatingCleansingButton : public button::Button, public Parented<TotoIR> {
 public:
  OscillatingCleansingButton() = default;

 protected:
  void press_action() override;
};

}  // namespace esphome::toto_ir
