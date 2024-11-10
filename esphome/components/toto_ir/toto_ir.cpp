#include "esphome/core/log.h"
#include "toto_ir.h"

namespace esphome {
namespace toto_ir {

static const char *TAG = "toto_ir";

void TotoIR::setup() {}

void TotoIR::loop() {}

void TotoIR::dump_config() { ESP_LOGCONFIG(TAG, "Toto IR"); }

void TotoIR::send_power_toggle() {
  ESP_LOGI(TAG, "Sending power toggle request");
  //  esphome::remote_base::RawTimings first_power_code = {
  //      6020, -3037, 537,   -575, 537,  -1713, 537,  -575, 537,   -575,  537,   -575,  564,   -575, 537,   -575,  537,
  //      -575, 536,   -602,  537,  -575, 537,   -575, 537,  -1713, 537,   -576,  536,   -576,  560,  -552,  560, -578,
  //      536,  -576,  561,   -551, 536,  -576,  587,  -552, 560,   -552,  560,   -552,  535,   -576, 587,   -1664, 536,
  //      -576, 536,   -1714, 560,  -552, 536,   -576, 560,  -579,  560,   -1663, 560,   -1691, 536,  -1688, 536, -576,
  //      562,  -1688, 560,   -553, 535,  -577,  586,  -552, 535,   -1688, 536,   -1715, 560};
  //
  //  esphome::remote_base::RawTimings second_power_code = {
  //      5991, -3037, 560,   -552, 537,  -1713, 537,  -576, 536,   -576,  536,   -576,  586,   -552, 537,   -575,  537,
  //      -575, 537,   -575,  587,  -552, 560,   -552, 536,  -1714, 561,   -551,  536,   -576,  536,  -576,  560, -578,
  //      536,  -576,  560,   -552, 536,  -576,  536,  -603, 560,   -552,  559,   -552,  537,   -576, 562,   -1687, 537,
  //      -576, 560,   -1690, 536,  -576, 536,   -576, 536,  -603,  535,   -1688, 536,   -1715, 559,  -1665, 560, -552,
  //      562,  -1688, 560,   -553, 535,  -577,  585,  -553, 559,   -1665, 559,   -1691, 560};
  //  esphome::remote_base::RawTimings third_power_code = {
  //      5992, -3036, 538,   -575, 536,  -1714, 561,  -551, 537,   -575,  560,   -552,  563,   -575, 561,   -551,  537,
  //      -575, 537,   -576,  562,  -576, 536,   -576, 536,  -1714, 537,   -575,  537,   -575,  536,  -576,  536, -603,
  //      559,  -553,  536,   -576, 560,  -552,  536,  -602, 551,   -561,  560,   -552,  560,   -552, 586,   -1664, 536,
  //      -576, 536,   -1714, 561,  -552, 559,   -553, 535,  -603,  536,   -1688, 535,   -1715, 560,  -1664, 560, -553,
  //      561,  -1689, 535,   -577, 559,  -553,  586,  -552, 559,   -1665, 535,   -1715, 560};
  this->transmit_(esphome::remote_base::TotoIRCodes::FIRST_POWER_CODE);
  this->transmit_(esphome::remote_base::TotoIRCodes::SECOND_POWER_CODE);
  this->transmit_(esphome::remote_base::TotoIRCodes::THIRD_POWER_CODE);
}
void TotoIR::send_rear_wash() {
  ESP_LOGI(TAG, "Sending rear wash request");
  //  esphome::remote_base::RawTimings first_rear_wash_code = {
  //      6020, -3036, 562,  -550,  562,  -1689, 537,  -575,  537,   -575,  537,  -575, 563,  -576, 537,   -575,  536,
  //      -576, 560,   -578, 561,   -551, 537,   -575, 536,   -1714, 537,   -575, 537,  -576, 536,  -575,  563,   -576,
  //      560,  -552,  536,  -1687, 564,  -575,  536,  -1688, 560,   -1690, 561,  -552, 536,  -576, 560,   -1690, 560,
  //      -552, 536,   -576, 536,   -602, 536,   -577, 535,   -576,  536,   -576, 563,  -576, 560,  -1663, 537,   -576,
  //      562,  -1688, 536,  -576,  560,  -1690, 560,  -1664, 536,   -603,  559,  -553, 535};
  //
  //  esphome::remote_base::RawTimings second_rear_wash_code = {
  //      6016, -3037, 537,  -575,  561,  -1663, 537,  -601,  561,   -551,  537,  -575, 537,  -575, 564,   -575,  536,
  //      -576, 536,   -576, 560,   -552, 563,   -575, 537,   -1687, 537,   -601, 537,  -576, 536,  -576,  536,   -576,
  //      536,  -602,  561,  -1663, 536,  -576,  561,  -1689, 537,   -1687, 563,  -576, 536,  -576, 561,   -1662, 587,
  //      -553, 560,   -551, 560,   -552, 560,   -579, 536,   -576,  535,   -577, 535,  -577, 535,  -1715, 536,   -576,
  //      536,  -1714, 560,  -552,  536,  -1688, 562,  -1688, 536,   -577,  560,  -552, 586};
  //  this->transmit_(first_rear_wash_code);
  //  this->transmit_(second_rear_wash_code);
}
void TotoIR::send_feminine_wash() {
  ESP_LOGI(TAG, "Sending feminine wash request");
  //  esphome::remote_base::RawTimings first_fem_wash_code = {
  //      6020,  -3036, 537,  -575,  537,  -1687, 537,  -601,  561,   -551,  537,  -575, 537,  -575, 564,  -575, 561,
  //      -551,  536,   -576, 560,   -552, 587,   -551, 537,   -1687, 537,   -601, 537,  -576, 536,  -576, 536,  -576,
  //      536,   -602,  536,  -1687, 537,  -576,  536,  -1714, 536,   -1688, 587,  -552, 536,  -576, 536,  -576, 560,
  //      -1690, 536,   -576, 536,   -576, 536,   -602, 536,   -576,  536,   -576, 536,  -576, 536,  -603, 559,  -1664,
  //      560,   -1691, 559,  -553,  535,  -1689, 586,  -1664, 559,   -553,  560,  -552, 586};
  //
  //  esphome::remote_base::RawTimings second_fem_wash_code = {
  //      6015,  -3037, 537,  -575,  537,  -1687, 563,  -576,  536,   -576,  536,  -576, 536,  -602, 537,  -575, 536,
  //      -576,  536,   -576, 536,   -602, 561,   -552, 536,   -1687, 563,   -576, 536,  -576, 536,  -576, 560,  -552,
  //      562,   -576,  536,  -1688, 536,  -603,  535,  -1688, 536,   -1715, 536,  -576, 536,  -576, 536,  -576, 536,
  //      -1714, 536,   -576, 536,   -576, 562,   -577, 559,   -553,  560,   -552, 535,  -577, 561,  -577, 535,  -1689,
  //      535,   -1715, 559,  -553,  560,  -1690, 536,  -1689, 559,   -553,  561,  -577, 560};
  //  this->transmit_(first_fem_wash_code);
  //  this->transmit_(second_fem_wash_code);
}
void TotoIR::send_start_fans() {
  ESP_LOGI(TAG, "Sending start fans request");
  //  esphome::remote_base::RawTimings first_fan_code = {
  //      6019,  -3010, 564,  -575, 537,  -1686, 538,  -575, 563,   -575, 537,  -575, 562,  -550, 537,   -601,  538,
  //      -574,  537,   -576, 537,  -575, 560,   -578, 537,  -1686, 538,  -575, 563,  -575, 561,  -551,  537,   -575,
  //      537,   -575,  563,  -576, 536,  -576,  536,  -576, 536,   -576, 563,  -575, 560,  -552, 536,   -1714, 537,
  //      -1687, 537,   -575, 561,  -578, 560,   -552, 560,  -552,  536,  -576, 587,  -552, 535,  -1688, 536,   -1714,
  //      537,   -576,  560,  -552, 559,  -579,  536,  -576, 536,   -576, 536,  -576, 536};
  //
  //  esphome::remote_base::RawTimings second_fan_code = {
  //      6017,  -3036, 538,  -574, 538,  -1686, 564,  -574, 538,   -574, 562,  -550, 538,  -575, 563,   -575,  537,
  //      -575,  561,   -551, 537,  -602, 561,   -550, 537,  -1687, 537,  -602, 537,  -575, 561,  -551,  561,   -551,
  //      536,   -602,  537,  -575, 537,  -575,  537,  -575, 563,   -576, 536,  -576, 536,  -576, 536,   -1714, 560,
  //      -1664, 536,   -603, 536,  -576, 560,   -551, 537,  -575,  561,  -578, 536,  -576, 536,  -1688, 562,   -1688,
  //      536,   -576,  560,  -552, 563,  -576,  560,  -552, 560,   -551, 536,  -577, 586};
  //  this->transmit_(first_fan_code);
  //  this->transmit_(second_fan_code);
}
void TotoIR::send_stop() {
  ESP_LOGI(TAG, "Sending stop request");
  //  esphome::remote_base::RawTimings first_stop_code = {
  //      6019,  -3036, 562,  -551,  537,   -1686, 588,   -551,  537,   -575, 562,   -550,  537,  -575, 563,  -576, 536,
  //      -575,  537,   -575, 537,   -602,  537,   -575,  536,   -1687, 537,  -602,  537,   -575, 537,  -575, 537,
  //      -1713, 561,   -552,  560,  -1663, 588,   -551,  536,   -1688, 536,   -576, 563,   -1687, 537,  -576, 536,
  //      -1714, 560, -1664, 536,   -602, 561,   -1663, 536,   -1714, 561,   -552,  559,  -1665, 562,   -576, 560, -552,
  //      536,   -1714, 560,   -1664, 536,  -1715, 559,   -553,  536,   -576,  560,   -552, 560,   -579,  559};
  //
  //  esphome::remote_base::RawTimings second_stop_code = {
  //      5992,  -3036, 538,  -575,  536,   -1687, 537,   -602,  537,   -575, 537,   -575,  561,  -551, 563,  -576, 536,
  //      -576,  536,   -576, 536,   -576,  562,   -576,  536,   -1688, 561,  -577,  536,   -576, 536,  -576, 536,
  //      -1714, 561,   -552,  536,  -1687, 537,   -602,  536,   -1688, 536,   -576, 562,   -1688, 561,  -552, 535,
  //      -1714, 537, -1688, 536,   -602, 536,   -1688, 560,   -1690, 561,   -552,  560,  -1663, 563,   -576, 536, -576,
  //      559,   -1665, 562,   -1688, 536,  -1688, 562,   -577,  535,   -577,  535,   -577, 560,   -579,  534};
  //  esphome::remote_base::RawTimings third_stop_code = {
  //      5992,  -3010, 563,  -576,  537,   -1686, 537,   -576,  563,   -575, 537,   -575,  560,  -552, 537,  -602, 536,
  //      -576,  536,   -575, 537,   -575,  537,   -602,  536,   -1688, 536,  -576,  536,   -602, 536,  -576, 561,
  //      -1663, 586,   -553,  536,  -1687, 537,   -576,  562,   -1688, 536,   -576, 536,   -1714, 537,  -576, 560,
  //      -1690, 535, -1688, 537,   -576, 562,   -1688, 536,   -1688, 587,   -552,  559,  -1664, 536,   -577, 561, -577,
  //      535,   -1689, 560,   -1690, 560,  -1664, 536,   -603,  535,   -577,  559,   -553, 559,   -553,  561};
  //
  //  esphome::remote_base::RawTimings fourth_stop_code = {
  //      5991, -3037, 537,  -576, 536,  -1687, 564,  -575, 537,   -575, 537,  -575, 537,  -601, 561,  -551, 537,
  //      -576, 560,   -551, 537,  -602, 536,   -576, 536,  -1688, 536,  -602, 537,  -575, 561,  -551, 561,  -551,
  //      563,  -576,  536,  -576, 536,  -576,  560,  -552, 586,   -552, 536,  -576, 536,  -576, 560,  -579, 559,
  //      -553, 535,   -576, 560,  -552, 536,   -603, 559,  -553,  536,  -576, 559,  -553, 586,  -552, 536,  -576,
  //      536,  -576,  536,  -576, 586,  -553,  559,  -553, 559,   -553, 535,  -577, 585};
  //  esphome::remote_base::RawTimings fifth_stop_code = {
  //      6017, -3037, 537,  -575, 561,  -1662, 564,  -575, 537,   -575, 537,  -575, 537,  -575, 587,  -551, 537,
  //      -576, 536,   -575, 537,  -602, 536,   -576, 536,  -1688, 560,  -578, 537,  -575, 537,  -575, 560,  -552,
  //      563,  -576,  536,  -576, 536,  -576,  536,  -575, 563,   -576, 536,  -576, 536,  -576, 536,  -576, 587,
  //      -552, 560,   -552, 535,  -577, 560,   -578, 560,  -552,  560,  -552, 560,  -552, 536,  -602, 560,  -552,
  //      560,  -552,  560,  -552, 586,  -553,  560,  -552, 535,   -577, 559,  -553, 585};
  //
  //  esphome::remote_base::RawTimings sixth_stop_code = {
  //      6018, -3036, 537,  -576, 537,  -1686, 564,  -575, 561,   -551, 537,  -575, 537,  -575, 563,  -575, 537,
  //      -575, 537,   -575, 537,  -602, 561,   -551, 537,  -1687, 537,  -602, 536,  -575, 537,  -575, 537,  -575,
  //      563,  -576,  536,  -576, 536,  -576,  536,  -576, 562,   -576, 536,  -576, 536,  -576, 561,  -578, 536,
  //      -576, 559,   -553, 535,  -577, 536,   -602, 536,  -576,  536,  -576, 560,  -552, 536,  -603, 535,  -577,
  //      535,  -577,  535,  -577, 562,  -576,  560,  -552, 559,   -553, 535,  -577, 586};
  //  this->transmit_(first_stop_code);
  //  this->transmit_(second_stop_code);
  //  this->transmit_(third_stop_code);
  //  this->transmit_(fourth_stop_code);
  //  this->transmit_(fifth_stop_code);
  //  this->transmit_(sixth_stop_code);
}

void TotoIR::transmit_(remote_base::TotoIRCodes::RawTimings ir_code) {
  ESP_LOGD(TAG, "Sending ir_code");
  auto transmit = this->transmitter_->transmit();
  ESP_LOGD(TAG, "Sending ir_code got transmitter");
  auto data = transmit.get_data();

  data->set_data(ir_code);
  data->set_carrier_frequency(38000);
  transmit.set_send_times(3);
  transmit.set_send_wait(40000);
  ESP_LOGD(TAG, "Sending ir_code actual perform transmit");
  transmit.perform();
}

}  // namespace toto_ir
}  // namespace esphome
