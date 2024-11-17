import esphome.codegen as cg
from esphome.components import button
import esphome.config_validation as cv

from .. import CONF_VORNADO_ID, VornadoIR, vornado_ir_ns

CODEOWNERS = ["@jzucker2"]
PowerButton = vornado_ir_ns.class_("PowerButton", button.Button)
ChangeDirectionButton = vornado_ir_ns.class_("ChangeDirectionButton", button.Button)
IncreaseButton = vornado_ir_ns.class_("IncreaseButton", button.Button)
DecreaseButton = vornado_ir_ns.class_("DecreaseButton", button.Button)

# Vornado IR buttons
CONF_POWER = "power"
CONF_CHANGE_DIRECTION = "change_direction"
CONF_INCREASE = "increase"
CONF_DECREASE = "decrease"

# Additional icons
ICON_POWER_TOGGLE = "mdi:power-cycle"
ICON_CHANGE_DIRECTION = "mdi:power-cycle"
ICON_INCREASE = "mdi:power-cycle"
ICON_DECREASE = "mdi:power-cycle"

CONFIG_SCHEMA = cv.Schema(
    {
        cv.GenerateID(CONF_VORNADO_ID): cv.use_id(VornadoIR),
        cv.Optional(CONF_POWER): button.button_schema(
            PowerButton,
            icon=ICON_POWER_TOGGLE,
        ),
        cv.Optional(CONF_CHANGE_DIRECTION): button.button_schema(
            ChangeDirectionButton,
            icon=ICON_CHANGE_DIRECTION,
        ),
        cv.Optional(ICON_INCREASE): button.button_schema(
            IncreaseButton,
            icon=ICON_INCREASE,
        ),
        cv.Optional(ICON_DECREASE): button.button_schema(
            DecreaseButton,
            icon=ICON_DECREASE,
        ),
    }
).extend(cv.COMPONENT_SCHEMA)


async def to_code(config):
    for button_type in [
        CONF_POWER,
        CONF_CHANGE_DIRECTION,
        CONF_INCREASE,
        CONF_DECREASE,
    ]:
        if conf := config.get(button_type):
            btn = await button.new_button(conf)
            await cg.register_parented(btn, config[CONF_VORNADO_ID])
