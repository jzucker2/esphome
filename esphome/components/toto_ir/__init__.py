import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ID

CODEOWNERS = ["@jzucker2"]

CONF_TOTO_ID = "toto_id"

toto_ir_ns = cg.esphome_ns.namespace("toto_ir")
TotoIR = toto_ir_ns.class_("TotoIR", cg.Component)

CONFIG_SCHEMA = cv.Schema(
    {
        cv.GenerateID(): cv.declare_id(TotoIR),
    }
).extend(cv.COMPONENT_SCHEMA)


async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)
