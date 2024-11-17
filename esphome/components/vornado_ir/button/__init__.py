import esphome.codegen as cg
from esphome.components import button
import esphome.config_validation as cv

from .. import CONF_VORNADO_ID, VornadoIR, vornado_ir_ns

CODEOWNERS = ["@jzucker2"]
FanButton = vornado_ir_ns.class_("FanButton", button.Button)
PowerButton = vornado_ir_ns.class_("PowerButton", button.Button)

# Toto IR buttons
CONF_FAN = "fan"
CONF_POWER = "power"

# Additional icons
ICON_POWER_TOGGLE = "mdi:power-cycle"
ICON_FAN = "mdi:heat-wave"

CONFIG_SCHEMA = cv.Schema(
    {
        cv.GenerateID(CONF_VORNADO_ID): cv.use_id(VornadoIR),
        cv.Optional(CONF_FAN): button.button_schema(
            FanButton,
            icon=ICON_FAN,
        ),
        cv.Optional(CONF_POWER): button.button_schema(
            PowerButton,
            icon=ICON_POWER_TOGGLE,
        ),
    }
).extend(cv.COMPONENT_SCHEMA)


async def to_code(config):
    for button_type in [
        CONF_FAN,
        CONF_POWER,
    ]:
        if conf := config.get(button_type):
            btn = await button.new_button(conf)
            await cg.register_parented(btn, config[CONF_VORNADO_ID])
