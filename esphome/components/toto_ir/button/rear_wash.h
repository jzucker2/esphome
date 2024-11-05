#pragma once

#include "esphome/components/button/button.h"
#include "../toto_ir.h"

namespace esphome {
namespace toto_ir {

class RearWashButton : public button::Button, public Parented<TotoIR> {
 public:
  RearWashButton() = default;

 protected:
  void press_action() override;
};

}  // namespace toto_ir
}  // namespace esphome
