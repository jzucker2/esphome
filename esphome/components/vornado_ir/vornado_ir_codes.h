#pragma once

#include <cstdint>

namespace esphome {
namespace vornado_ir {

static const uint32_t VORNADO_IR_POWER_TOGGLE_CODE = 0xD84;
static const uint32_t VORNADO_IR_CHANGE_DIRECTION_CODE = 0xD81;
static const uint32_t VORNADO_IR_INCREASE_CODE = 0xDC6;
static const uint32_t VORNADO_IR_DECREASE_CODE = 0xD82;
static const uint8_t VORNADO_IR_NBITS = 12;

}  // namespace vornado_ir
}  // namespace esphome
