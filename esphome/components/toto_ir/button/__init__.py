import esphome.codegen as cg
from esphome.components import button
import esphome.config_validation as cv

from .. import CONF_TOTO_ID, TotoIR, toto_ir_ns

CODEOWNERS = ["@jzucker2"]
RearWashButton = toto_ir_ns.class_("RearWashButton", button.Button)
FeminineWashButton = toto_ir_ns.class_("FeminineWashButton", button.Button)
FanButton = toto_ir_ns.class_("FanButton", button.Button)
StopButton = toto_ir_ns.class_("StopButton", button.Button)
PowerButton = toto_ir_ns.class_("PowerButton", button.Button)


# Toto IR buttons
CONF_REAR_WASH = "rear_wash"
CONF_FEMININE_WASH = "feminine_wash"
CONF_FAN = "fan"
CONF_STOP = "stop"
CONF_POWER = "power"

# Additional icons
ICON_SPRAY_BOTTLE = "mdi:spray-bottle"

CONFIG_SCHEMA = cv.Schema(
    {
        cv.GenerateID(CONF_TOTO_ID): cv.use_id(TotoIR),
        cv.Optional(CONF_REAR_WASH): button.button_schema(
            RearWashButton,
            icon=ICON_SPRAY_BOTTLE,
        ),
        cv.Optional(CONF_FEMININE_WASH): button.button_schema(
            FeminineWashButton,
            icon=ICON_SPRAY_BOTTLE,
        ),
        cv.Optional(CONF_FAN): button.button_schema(
            FanButton,
            icon=ICON_SPRAY_BOTTLE,
        ),
        cv.Optional(CONF_STOP): button.button_schema(
            StopButton,
            icon=ICON_SPRAY_BOTTLE,
        ),
        cv.Optional(CONF_POWER): button.button_schema(
            PowerButton,
            icon=ICON_SPRAY_BOTTLE,
        ),
    }
)


async def to_code(config):
    for button_type in [
        CONF_REAR_WASH,
        CONF_FEMININE_WASH,
        CONF_FAN,
        CONF_STOP,
        CONF_POWER,
    ]:
        if conf := config.get(button_type):
            btn = await button.new_button(conf)
            await cg.register_parented(btn, config[CONF_TOTO_ID])
