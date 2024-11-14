#include "esphome/core/log.h"
#include "toto_ir.h"
#include "toto_ir_codes.h"
#include "esphome/core/application.h"

namespace esphome {
namespace toto_ir {

static const char *TAG = "toto_ir";
static const char *TOTO_IR_RESET_TIMER = "toto_ir_reset_timer";

void TotoIR::setup() {
  ESP_LOGCONFIG(TAG, "Setting up TotoIR ...");
  bool reset_timer = false;
  this->set_water_pressure(DEFAULT_WATER_OPTION_STRING, reset_timer);
  this->water_pressure_selector_->publish_state(DEFAULT_WATER_OPTION_STRING);
  this->set_water_position(DEFAULT_WATER_OPTION_STRING, reset_timer);
  this->water_position_selector_->publish_state(DEFAULT_WATER_OPTION_STRING);
  this->set_water_temperature(DEFAULT_TEMPERATURE_OPTION_STRING, reset_timer);
  this->water_temperature_selector_->publish_state(DEFAULT_TEMPERATURE_OPTION_STRING);
  this->set_fan_temperature(DEFAULT_TEMPERATURE_OPTION_STRING, reset_timer);
  this->fan_temperature_selector_->publish_state(DEFAULT_TEMPERATURE_OPTION_STRING);
  this->set_seat_temperature(DEFAULT_TEMPERATURE_OPTION_STRING, reset_timer);
  this->seat_temperature_selector_->publish_state(DEFAULT_TEMPERATURE_OPTION_STRING);
}

void TotoIR::loop() {}

void TotoIR::dump_config() {
  ESP_LOGCONFIG(TAG, "Toto IR");
#ifdef USE_SELECT
  ESP_LOGCONFIG(TAG, "Toto IR Select:");
  LOG_SELECT(TAG, "Water Pressure", this->water_pressure_selector_);
  LOG_SELECT(TAG, "Water Position", this->water_position_selector_);
  LOG_SELECT(TAG, "Water Temperature", this->water_temperature_selector_);
  LOG_SELECT(TAG, "Fan Temperature", this->fan_temperature_selector_);
  LOG_SELECT(TAG, "Seat Temperature", this->seat_temperature_selector_);
#endif
}

void TotoIR::send_power_toggle(bool reset_timer) {
  ESP_LOGI(TAG, "Sending power toggle request");
  this->transmit_(TOTO_IR_FIRST_POWER_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_POWER_TIMINGS);
  this->transmit_(TOTO_IR_THIRD_POWER_TIMINGS);
}
void TotoIR::send_rear_wash(bool reset_timer) {
  ESP_LOGI(TAG, "Sending rear wash request");
  this->transmit_(TOTO_IR_FIRST_REAR_WASH_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_REAR_WASH_TIMINGS);
}
void TotoIR::send_feminine_wash(bool reset_timer) {
  ESP_LOGI(TAG, "Sending feminine wash request");

  this->transmit_(TOTO_IR_FIRST_FEM_WASH_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_FEM_WASH_TIMINGS);
}
void TotoIR::send_start_fans(bool reset_timer) {
  ESP_LOGI(TAG, "Sending start fans request");
  this->transmit_(TOTO_IR_FIRST_FAN_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_FAN_TIMINGS);
}
void TotoIR::send_stop(bool reset_timer) {
  ESP_LOGI(TAG, "Sending stop request");

  this->transmit_(TOTO_IR_FIRST_STOP_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_STOP_TIMINGS);
  this->transmit_(TOTO_IR_THIRD_STOP_TIMINGS);
  this->transmit_(TOTO_IR_FOURTH_STOP_TIMINGS);
  this->transmit_(TOTO_IR_FIFTH_STOP_TIMINGS);
  this->transmit_(TOTO_IR_SIXTH_STOP_TIMINGS);
}
void TotoIR::send_oscillating_cleansing(bool reset_timer) {
  ESP_LOGI(TAG, "Sending oscillating cleansing request");
  this->transmit_(TOTO_IR_FIRST_OSCILLATING_CLEANSING_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_OSCILLATING_CLEANSING_TIMINGS);
  this->transmit_(TOTO_IR_THIRD_OSCILLATING_CLEANSING_TIMINGS);
  this->transmit_(TOTO_IR_FOURTH_OSCILLATING_CLEANSING_TIMINGS);
  this->transmit_(TOTO_IR_FIFTH_OSCILLATING_CLEANSING_TIMINGS);
  this->transmit_(TOTO_IR_SIXTH_OSCILLATING_CLEANSING_TIMINGS);
}
void TotoIR::send_pulsating_cleansing(bool reset_timer) {
  ESP_LOGI(TAG, "Sending pulsating cleansing request");
  this->transmit_(TOTO_IR_FIRST_PULSATING_CLEANSING_TIMINGS);
  this->transmit_(TOTO_IR_SECOND_PULSATING_CLEANSING_TIMINGS);
}

void TotoIR::transmit_(RawTimings ir_code) {
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

void TotoIR::set_water_pressure(const std::string &state, bool reset_timer) {
  ESP_LOGD(TAG, "Set water pressure: %s", state.c_str());
  this->current_water_pressure = WATER_OPTION_TO_UINT.at(state);
  this->water_pressure_selector_->publish_state(state);
  if (current_water_pressure == WATER_OPTION_1) {
    this->transmit_(TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_1_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_1_TIMINGS);
  } else if (current_water_pressure == WATER_OPTION_2) {
    this->transmit_(TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_2_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_2_TIMINGS);
  } else if (current_water_pressure == WATER_OPTION_3) {
    this->transmit_(TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_3_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_3_TIMINGS);
  } else if (current_water_pressure == WATER_OPTION_4) {
    this->transmit_(TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_4_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_4_TIMINGS);
  } else if (current_water_pressure == WATER_OPTION_5) {
    this->transmit_(TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_5_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_5_TIMINGS);
  }
  if (reset_timer) {
    this->set_reset_timer();
  }
}

void TotoIR::set_water_position(const std::string &state, bool reset_timer) {
  ESP_LOGD(TAG, "Set water position: %s", state.c_str());
  this->current_water_position = WATER_OPTION_TO_UINT.at(state);
  this->water_position_selector_->publish_state(state);
  if (current_water_position == WATER_OPTION_1) {
    this->transmit_(TOTO_IR_SECOND_WATER_POSITION_LEVEL_1_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_POSITION_LEVEL_1_TIMINGS);
  } else if (current_water_position == WATER_OPTION_2) {
    this->transmit_(TOTO_IR_SECOND_WATER_POSITION_LEVEL_2_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_POSITION_LEVEL_2_TIMINGS);
  } else if (current_water_position == WATER_OPTION_3) {
    this->transmit_(TOTO_IR_SECOND_WATER_POSITION_LEVEL_3_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_POSITION_LEVEL_3_TIMINGS);
  } else if (current_water_position == WATER_OPTION_4) {
    this->transmit_(TOTO_IR_SECOND_WATER_POSITION_LEVEL_4_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_POSITION_LEVEL_4_TIMINGS);
  } else if (current_water_position == WATER_OPTION_5) {
    this->transmit_(TOTO_IR_SECOND_WATER_POSITION_LEVEL_5_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_POSITION_LEVEL_5_TIMINGS);
  }
  if (reset_timer) {
    this->set_reset_timer();
  }
}

void TotoIR::set_water_temperature(const std::string &state, bool reset_timer) {
  ESP_LOGD(TAG, "Set water temperature: %s", state.c_str());
  this->current_water_temperature = WATER_SEAT_TEMP_OPTION_TO_UINT.at(state);
  this->water_temperature_selector_->publish_state(state);
  if (current_water_temperature == WATER_SEAT_TEMP_OPTION_OFF) {
    this->transmit_(TOTO_IR_SECOND_WATER_TEMPERATURE_OFF_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_TEMPERATURE_OFF_TIMINGS);
  } else if (current_water_temperature == WATER_SEAT_TEMP_OPTION_1) {
    this->transmit_(TOTO_IR_SECOND_WATER_TEMPERATURE_LEVEL_1_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_TEMPERATURE_LEVEL_1_TIMINGS);
  } else if (current_water_temperature == WATER_SEAT_TEMP_OPTION_2) {
    this->transmit_(TOTO_IR_SECOND_WATER_TEMPERATURE_LEVEL_2_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_TEMPERATURE_LEVEL_2_TIMINGS);
  } else if (current_water_temperature == WATER_SEAT_TEMP_OPTION_3) {
    this->transmit_(TOTO_IR_SECOND_WATER_TEMPERATURE_LEVEL_3_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_WATER_TEMPERATURE_LEVEL_3_TIMINGS);
  }
  if (reset_timer) {
    this->set_reset_timer();
  }
}

void TotoIR::set_seat_temperature(const std::string &state, bool reset_timer) {
  ESP_LOGD(TAG, "Set seat temperature: %s", state.c_str());
  this->current_seat_temperature = WATER_SEAT_TEMP_OPTION_TO_UINT.at(state);
  this->seat_temperature_selector_->publish_state(state);
  if (current_seat_temperature == WATER_SEAT_TEMP_OPTION_OFF) {
    this->transmit_(TOTO_IR_FIRST_SEAT_TEMPERATURE_OFF_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_SEAT_TEMPERATURE_OFF_TIMINGS);
  } else if (current_seat_temperature == WATER_SEAT_TEMP_OPTION_1) {
    this->transmit_(TOTO_IR_SECOND_SEAT_TEMPERATURE_LEVEL_1_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_SEAT_TEMPERATURE_LEVEL_1_TIMINGS);
  } else if (current_seat_temperature == WATER_SEAT_TEMP_OPTION_2) {
    this->transmit_(TOTO_IR_SECOND_SEAT_TEMPERATURE_LEVEL_2_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_SEAT_TEMPERATURE_LEVEL_2_TIMINGS);
  } else if (current_seat_temperature == WATER_SEAT_TEMP_OPTION_3) {
    this->transmit_(TOTO_IR_SECOND_SEAT_TEMPERATURE_LEVEL_3_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_SEAT_TEMPERATURE_LEVEL_3_TIMINGS);
  }
  if (reset_timer) {
    this->set_reset_timer();
  }
}

void TotoIR::set_fan_temperature(const std::string &state, bool reset_timer) {
  ESP_LOGD(TAG, "Set fan temperature: %s", state.c_str());
  this->current_fan_temperature = FAN_TEMP_OPTION_TO_UINT.at(state);
  this->fan_temperature_selector_->publish_state(state);
  if (current_fan_temperature == FAN_TEMP_OPTION_1) {
    this->transmit_(TOTO_IR_SECOND_FAN_TEMPERATURE_LEVEL_1_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_FAN_TEMPERATURE_LEVEL_1_TIMINGS);
  } else if (current_fan_temperature == FAN_TEMP_OPTION_2) {
    this->transmit_(TOTO_IR_SECOND_FAN_TEMPERATURE_LEVEL_2_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_FAN_TEMPERATURE_LEVEL_2_TIMINGS);
  } else if (current_fan_temperature == FAN_TEMP_OPTION_3) {
    this->transmit_(TOTO_IR_SECOND_FAN_TEMPERATURE_LEVEL_3_TIMINGS);
    this->transmit_(TOTO_IR_SECOND_FAN_TEMPERATURE_LEVEL_3_TIMINGS);
  }
  if (reset_timer) {
    this->set_reset_timer();
  }
}

void TotoIR::set_configuration(const TotoConfig &config, bool reset_timer) {
  ESP_LOGD(TAG, "Set configuration with reset_timer: %d", reset_timer);
  this->set_water_pressure(config.water_pressure, false);
  this->set_water_position(config.water_position, false);
  this->set_water_temperature(config.water_temperature, false);
  this->set_seat_temperature(config.seat_temperature, false);
  this->set_fan_temperature(config.fan_temperature, false);
  if (reset_timer) {
    this->set_reset_timer();
  }
}

void TotoIR::reset_configuration(bool reset_timer) {
  ESP_LOGD(TAG, "Reset configuration with reset_timer: %d", reset_timer);
  this->set_configuration(TOTO_RESET_CONFIG, reset_timer);
}

void TotoIR::set_reset_timer() {
  ESP_LOGD(TAG, "Reset timer triggered");
  this->set_timeout(TOTO_IR_RESET_TIMER, 5 * 60 * 1000, [this]() { this->reset_configuration(false); });
}

}  // namespace toto_ir
}  // namespace esphome
