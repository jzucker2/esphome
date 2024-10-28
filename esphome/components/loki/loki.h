#pragma once
#include "esphome/core/defines.h"
#ifdef USE_NETWORK

#include "esphome/core/component.h"

namespace esphome {
namespace loki {

class LokiComponent : public Component {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
  /// Loki client setup priority
  float get_setup_priority() const override;
};

}  // namespace loki
}  // namespace esphome
#endif
