import esphome.codegen as cg
from esphome.components import select
import esphome.config_validation as cv

from .. import CONF_TOTO_ID, TotoIR, toto_ir_ns

CODEOWNERS = ["@jzucker2"]
CONF_WATER_PRESSURE = "water_pressure"
CONF_WATER_POSITION = "water_position"
CONF_WATER_TEMPERATURE = "water_temperature"
CONF_SEAT_TEMPERATURE = "seat_temperature"
CONF_FAN_TEMPERATURE = "fan_temperature"

CONF_WATER_POSITION_ICON = "mdi:boom-gate-arrow-up"
CONF_WATER_PRESSURE_ICON = "mdi:water-plus"
CONF_WATER_TEMPERATURE_ICON = "mdi:water-thermometer"
CONF_FAN_TEMPERATURE_ICON = "mdi:thermometer-lines"
CONF_SEAT_TEMPERATURE_ICON = "mdi:car-seat-heater"

CONF_WATER_SELECTS = [
    "1",
    "2",
    "3",
    "4",
    "5",
]
CONF_WATER_SEAT_TEMP_SELECTS = [
    "Off",
    "1",
    "2",
    "3",
]
CONF_FAN_TEMP_SELECTS = [
    "1",
    "2",
    "3",
]

TotoIRWaterPressureSelect = toto_ir_ns.class_("TotoIRWaterPressureSelect", cg.Component)
TotoIRWaterPositionSelect = toto_ir_ns.class_("TotoIRWaterPositionSelect", cg.Component)
TotoIRWaterTemperatureSelect = toto_ir_ns.class_(
    "TotoIRWaterTemperatureSelect", cg.Component
)
TotoIRFanTemperatureSelect = toto_ir_ns.class_(
    "TotoIRFanTemperatureSelect", cg.Component
)
TotoIRSeatTemperatureSelect = toto_ir_ns.class_(
    "TotoIRSeatTemperatureSelect", cg.Component
)

CONFIG_SCHEMA = cv.Schema(
    {
        cv.GenerateID(CONF_TOTO_ID): cv.use_id(TotoIR),
        cv.Required(CONF_WATER_PRESSURE): select.select_schema(
            TotoIRWaterPressureSelect,
            icon=CONF_WATER_PRESSURE_ICON,
        ),
        cv.Required(CONF_WATER_POSITION): select.select_schema(
            TotoIRWaterPositionSelect,
            icon=CONF_WATER_POSITION_ICON,
        ),
        cv.Required(CONF_WATER_TEMPERATURE): select.select_schema(
            TotoIRWaterTemperatureSelect,
            icon=CONF_WATER_TEMPERATURE_ICON,
        ),
        cv.Required(CONF_FAN_TEMPERATURE): select.select_schema(
            TotoIRFanTemperatureSelect,
            icon=CONF_FAN_TEMPERATURE_ICON,
        ),
        cv.Required(CONF_SEAT_TEMPERATURE): select.select_schema(
            TotoIRSeatTemperatureSelect,
            icon=CONF_SEAT_TEMPERATURE_ICON,
        ),
    }
).extend(cv.COMPONENT_SCHEMA)


async def to_code(config):
    TotoIR_component = await cg.get_variable(config[CONF_TOTO_ID])
    select_types = {
        CONF_WATER_PRESSURE: (
            TotoIR_component.set_water_pressure_select,
            CONF_WATER_SELECTS,
        ),
        CONF_WATER_POSITION: (
            TotoIR_component.set_water_position_select,
            CONF_WATER_SELECTS,
        ),
        CONF_WATER_TEMPERATURE: (
            TotoIR_component.set_water_temperature_select,
            CONF_WATER_SEAT_TEMP_SELECTS,
        ),
        CONF_FAN_TEMPERATURE: (
            TotoIR_component.set_fan_temperature_select,
            CONF_FAN_TEMP_SELECTS,
        ),
        CONF_SEAT_TEMPERATURE: (
            TotoIR_component.set_seat_temperature_select,
            CONF_WATER_SEAT_TEMP_SELECTS,
        ),
    }
    for select_type, select_items in select_types.items():
        if select_config := config.get(select_type):
            select_func, select_options = select_items
            sel = await select.new_select(
                select_config,
                options=[select_options],
            )
            await cg.register_parented(sel, config[CONF_TOTO_ID])
            cg.add(select_func(sel))
