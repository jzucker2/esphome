import esphome.codegen as cg
from esphome.components import remote_base
import esphome.config_validation as cv
from esphome.const import CONF_ID

DEPENDENCIES = ["remote_transmitter"]
AUTO_LOAD = ["remote_base"]
CODEOWNERS = ["@jzucker2"]

CONF_TOTO_ID = "toto_id"
CONF_RESET_TIMER_DURATION_SECONDS = "reset_timer_duration_seconds"

toto_ir_ns = cg.esphome_ns.namespace("toto_ir")
TotoIR = toto_ir_ns.class_("TotoIR", cg.Component, remote_base.RemoteTransmittable)

CONFIG_SCHEMA = (
    cv.Schema(
        {
            cv.GenerateID(): cv.declare_id(TotoIR),
        }
    )
    .extend(
        {
            cv.Optional(
                CONF_RESET_TIMER_DURATION_SECONDS,
                default="600s",
            ): cv.positive_time_period_seconds,
        }
    )
    .extend(cv.COMPONENT_SCHEMA)
    .extend(remote_base.REMOTE_TRANSMITTABLE_SCHEMA)
)


async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)
    await remote_base.register_transmittable(var, config)
    cg.add(
        var.set_reset_timer_duration_seconds(config[CONF_RESET_TIMER_DURATION_SECONDS])
    )
