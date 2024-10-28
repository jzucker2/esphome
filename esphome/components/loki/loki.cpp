#include "loki.h"
#ifdef USE_NETWORK
#include "esphome/core/log.h"

namespace esphome {
namespace loki {

static const char *TAG = "loki.component";

void LokiComponent::setup() {}

void LokiComponent::loop() {}

void LokiComponent::dump_config() { ESP_LOGCONFIG(TAG, "Loki component"); }

}  // namespace loki
}  // namespace esphome
#endif
