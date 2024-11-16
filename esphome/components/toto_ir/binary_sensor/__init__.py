import esphome.codegen as cg
from esphome.components import binary_sensor
import esphome.config_validation as cv

from .. import CONF_TOTO_ID, TotoIR, toto_ir_ns

CODEOWNERS = ["@jzucker2"]
ResetTimerActive = toto_ir_ns.class_("ResetTimerActive", binary_sensor.BinarySensor)

CONF_RESET_TIMER_ACTIVE = "reset_timer_active"
ICON_RESET_TIMER_ACTIVE = "mdi:timer-play"


CONFIG_SCHEMA = cv.Schema(
    {
        cv.GenerateID(CONF_TOTO_ID): cv.use_id(TotoIR),
        cv.Optional(CONF_RESET_TIMER_ACTIVE): binary_sensor.binary_sensor_schema(
            ResetTimerActive,
            icon=ICON_RESET_TIMER_ACTIVE,
        ),
    }
).extend(cv.COMPONENT_SCHEMA)


async def to_code(config):
    TotoIR_component = await cg.get_variable(config[CONF_TOTO_ID])
    if bin_config := config.get(CONF_RESET_TIMER_ACTIVE):
        var = await binary_sensor.new_binary_sensor(bin_config)
        await cg.register_parented(var, config[CONF_TOTO_ID])
        cg.add(TotoIR_component.set_reset_timer_active_binary_sensor(var))
