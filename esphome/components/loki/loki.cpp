#include "loki.h"
#ifdef USE_NETWORK
#include "esphome/components/logger/logger.h"
#include "esphome/core/log.h"

namespace esphome {
namespace loki {

static const char *TAG = "loki.component";

void LokiComponent::setup() {
  if (this->is_log_message_enabled() && logger::global_logger != nullptr) {
    logger::global_logger->add_on_log_callback([this](int level, const char *tag, const char *message) {
      if (level <= this->log_level_ && this->is_connected()) {
        //        this->publish({.topic = this->log_message_.topic,
        //                       .payload = message,
        //                       .qos = this->log_message_.qos,
        //                       .retain = this->log_message_.retain});
      }
    });
  }
}

void LokiComponent::loop() {}

void LokiComponent::dump_config() { ESP_LOGCONFIG(TAG, "Loki component"); }

float LokiComponent::get_setup_priority() const { return setup_priority::AFTER_WIFI; }

}  // namespace loki
}  // namespace esphome
#endif
