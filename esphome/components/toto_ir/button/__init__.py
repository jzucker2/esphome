import esphome.codegen as cg
from esphome.components import button
import esphome.config_validation as cv

# from ..climate import (
#     CONF_HAIER_ID,
#     HonClimate,
#     haier_ns,
# )
from .. import CONF_TOTO_ID, TotoIR, toto_ir_ns

CODEOWNERS = ["@jzucker2"]
RearWashButton = toto_ir_ns.class_("RearWashButton", button.Button)


# Toto IR buttons
CONF_REAR_WASH = "rear_wash"

# Additional icons
ICON_SPRAY_BOTTLE = "mdi:spray-bottle"

CONFIG_SCHEMA = cv.Schema(
    {
        cv.GenerateID(CONF_TOTO_ID): cv.use_id(TotoIR),
        cv.Optional(CONF_REAR_WASH): button.button_schema(
            RearWashButton,
            icon=ICON_SPRAY_BOTTLE,
        ),
    }
)


async def to_code(config):
    for button_type in [CONF_REAR_WASH]:
        if conf := config.get(button_type):
            btn = await button.new_button(conf)
            await cg.register_parented(btn, config[CONF_TOTO_ID])
