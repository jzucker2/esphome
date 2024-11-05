
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
  void start_self_cleaning();
};

}  // namespace toto_ir
}  // namespace esphome
