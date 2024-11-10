import esphome.codegen as cg
from esphome.components import select
import esphome.config_validation as cv
from esphome.const import ENTITY_CATEGORY_CONFIG

from .. import CONF_TOTO_ID, TotoIR, toto_ir_ns

CONF_WATER_PRESSURE_ICON = "mdi:water-plus"
CONF_WATER_PRESSURE = "water_pressure"
CONF_SELECTS = [
    "1",
    "2",
    "3",
    "4",
    "5",
]

TotoIRWaterPressureSelect = toto_ir_ns.class_("TotoIRWaterPressureSelect", cg.Component)

CONFIG_SCHEMA = {
    cv.GenerateID(CONF_TOTO_ID): cv.use_id(TotoIR),
    cv.Required(CONF_WATER_PRESSURE): select.select_schema(
        TotoIRWaterPressureSelect,
        entity_category=ENTITY_CATEGORY_CONFIG,
        icon=CONF_WATER_PRESSURE_ICON,
    ),
}


async def to_code(config):
    LD2420_component = await cg.get_variable(config[CONF_TOTO_ID])
    if operating_mode_config := config.get(CONF_WATER_PRESSURE):
        sel = await select.new_select(
            operating_mode_config,
            options=[CONF_SELECTS],
        )
        await cg.register_parented(sel, config[CONF_TOTO_ID])
        cg.add(LD2420_component.set_operating_mode_select(sel))
