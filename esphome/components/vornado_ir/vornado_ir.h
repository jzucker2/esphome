#pragma once

#include "esphome/core/component.h"
#include "esphome/components/remote_base/symphony_protocol.h"
#include "esphome/components/remote_transmitter/remote_transmitter.h"

namespace esphome {
namespace vornado_ir {

class VornadoIR : public Component, public remote_base::RemoteTransmittable {
 public:
  void dump_config() override;
  void send_power_toggle();
  void send_change_direction();
  void send_increase();
  void send_decrease();

 protected:
  void transmit_(uint32_t code, uint8_t nbits);
};

}  // namespace vornado_ir
}  // namespace esphome
