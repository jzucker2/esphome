#include "esphome/core/log.h"
#include "toto_ir.h"

namespace esphome {
namespace toto_ir {

static const char *TAG = "toto_ir.component";

void TotoIR::setup() {}

void TotoIR::loop() {}

void TotoIR::dump_config() { ESP_LOGCONFIG(TAG, "Empty component"); }

void TotoIR::start_self_cleaning() { ESP_LOGI(TAG, "Sending self cleaning start request"); }

}  // namespace toto_ir
}  // namespace esphome
