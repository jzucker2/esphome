import esphome.codegen as cg
from esphome.components import select
import esphome.config_validation as cv
from esphome.const import ENTITY_CATEGORY_CONFIG

from .. import CONF_TOTO_ID, TotoIR, toto_ir_ns

CONF_WATER_PRESSURE = "water_pressure"
CONF_WATER_POSITION = "water_position"

CONF_WATER_POSITION_ICON = "mdi:boom-gate-arrow-up"
CONF_WATER_PRESSURE_ICON = "mdi:water-plus"

CONF_SELECTS = [
    "1",
    "2",
    "3",
    "4",
    "5",
]

TotoIRWaterPressureSelect = toto_ir_ns.class_("TotoIRWaterPressureSelect", cg.Component)
TotoIRWaterPositionSelect = toto_ir_ns.class_("TotoIRWaterPositionSelect", cg.Component)

CONFIG_SCHEMA = {
    cv.GenerateID(CONF_TOTO_ID): cv.use_id(TotoIR),
    cv.Required(CONF_WATER_PRESSURE): select.select_schema(
        TotoIRWaterPressureSelect,
        entity_category=ENTITY_CATEGORY_CONFIG,
        icon=CONF_WATER_PRESSURE_ICON,
    ),
    cv.Required(CONF_WATER_POSITION): select.select_schema(
        TotoIRWaterPositionSelect,
        entity_category=ENTITY_CATEGORY_CONFIG,
        icon=CONF_WATER_POSITION_ICON,
    ),
}


async def to_code(config):
    TotoIR_component = await cg.get_variable(config[CONF_TOTO_ID])
    select_types = {
        CONF_WATER_PRESSURE: TotoIR_component.set_water_pressure_select,
        CONF_WATER_POSITION: TotoIR_component.set_water_position_select,
    }
    for select_type, select_func in select_types.items():
        if select_config := config.get(select_type):
            sel = await select.new_select(
                select_config,
                options=[CONF_SELECTS],
            )
            await cg.register_parented(sel, config[CONF_TOTO_ID])
            cg.add(select_func(sel))
