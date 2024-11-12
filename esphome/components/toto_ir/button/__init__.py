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
ResetButton = toto_ir_ns.class_("ResetButton", button.Button)
OscillatingCleansingButton = toto_ir_ns.class_(
    "OscillatingCleansingButton", button.Button
)
PulsatingCleansingButton = toto_ir_ns.class_("PulsatingCleansingButton", button.Button)
PersonalSettingButton = toto_ir_ns.class_("PersonalSettingButton", button.Button)


# Toto IR buttons
CONF_REAR_WASH = "rear_wash"
CONF_FEMININE_WASH = "feminine_wash"
CONF_FAN = "fan"
CONF_STOP = "stop"
CONF_POWER = "power"
CONF_OSCILLATING_CLEANSING = "oscillating_cleansing"
CONF_PULSATING_CLEANSING = "pulsating_cleansing"
CONF_RESET = "reset"
# Personal Settings
CONF_PERSONAL_SETTING = "personal_setting"
CONF_WATER_PRESSURE_OPTION = "water_pressure_option"
CONF_WATER_POSITION_OPTION = "water_position_option"
CONF_WATER_TEMPERATURE_OPTION = "water_temperature_option"
CONF_SEAT_TEMPERATURE_OPTION = "seat_temperature_option"
CONF_FAN_TEMPERATURE_OPTION = "fan_temperature_option"
CONF_DEFAULT_MAIN_OPTION = "3"
CONF_DEFAULT_SECONDARY_OPTION = "1"

# Additional icons
ICON_POWER_TOGGLE = "mdi:power-cycle"
ICON_REAR_WASH = "mdi:emoticon-poop"
ICON_FEMININE_WASH = "mdi:human-female"
ICON_STOP = "mdi:stop"
ICON_FAN = "mdi:heat-wave"
ICON_OSCILLATING_CLEANSING = "mdi:wifi-arrow-left-right"
ICON_PULSATING_CLEANSING = "mdi:wifi-minus"
ICON_PERSONAL_SETTING = "mdi:account-heart-outline"
ICON_RESET = "mdi:wifi-minus"

CONFIG_SCHEMA = cv.Schema(
    {
        cv.GenerateID(CONF_TOTO_ID): cv.use_id(TotoIR),
        cv.Optional(CONF_REAR_WASH): button.button_schema(
            RearWashButton,
            icon=ICON_REAR_WASH,
        ),
        cv.Optional(CONF_FEMININE_WASH): button.button_schema(
            FeminineWashButton,
            icon=ICON_FEMININE_WASH,
        ),
        cv.Optional(CONF_FAN): button.button_schema(
            FanButton,
            icon=ICON_FAN,
        ),
        cv.Optional(CONF_STOP): button.button_schema(
            StopButton,
            icon=ICON_STOP,
        ),
        cv.Optional(CONF_POWER): button.button_schema(
            PowerButton,
            icon=ICON_POWER_TOGGLE,
        ),
        cv.Optional(CONF_PULSATING_CLEANSING): button.button_schema(
            PulsatingCleansingButton,
            icon=ICON_PULSATING_CLEANSING,
        ),
        cv.Optional(CONF_OSCILLATING_CLEANSING): button.button_schema(
            OscillatingCleansingButton,
            icon=ICON_OSCILLATING_CLEANSING,
        ),
        cv.Optional(CONF_RESET): button.button_schema(
            ResetButton,
            icon=ICON_RESET,
        ),
        cv.Optional(CONF_PERSONAL_SETTING): button.button_schema(
            PersonalSettingButton,
            icon=ICON_PERSONAL_SETTING,
        ).extend(
            {
                cv.Optional(
                    CONF_WATER_PRESSURE_OPTION, default=CONF_DEFAULT_MAIN_OPTION
                ): cv.string,
                cv.Optional(
                    CONF_WATER_POSITION_OPTION, default=CONF_DEFAULT_MAIN_OPTION
                ): cv.string,
                cv.Optional(
                    CONF_FAN_TEMPERATURE_OPTION, default=CONF_DEFAULT_SECONDARY_OPTION
                ): cv.string,
                cv.Optional(
                    CONF_SEAT_TEMPERATURE_OPTION, default=CONF_DEFAULT_SECONDARY_OPTION
                ): cv.string,
                cv.Optional(
                    CONF_WATER_TEMPERATURE_OPTION, default=CONF_DEFAULT_SECONDARY_OPTION
                ): cv.string,
            }
        ),
    }
).extend(cv.COMPONENT_SCHEMA)


async def to_code(config):
    for button_type in [
        CONF_REAR_WASH,
        CONF_FEMININE_WASH,
        CONF_FAN,
        CONF_STOP,
        CONF_POWER,
        CONF_OSCILLATING_CLEANSING,
        CONF_PULSATING_CLEANSING,
        CONF_RESET,
        CONF_PERSONAL_SETTING,
    ]:
        if conf := config.get(button_type):
            btn = await button.new_button(conf)
            await cg.register_parented(btn, config[CONF_TOTO_ID])
            if button_type == CONF_PERSONAL_SETTING:
                cg.add(btn.set_water_pressure(conf[CONF_WATER_PRESSURE_OPTION]))
                cg.add(btn.set_water_position(conf[CONF_WATER_POSITION_OPTION]))
                cg.add(btn.set_water_temperature(conf[CONF_WATER_TEMPERATURE_OPTION]))
                cg.add(btn.set_fan_temperature(conf[CONF_FAN_TEMPERATURE_OPTION]))
                cg.add(btn.set_seat_temperature(conf[CONF_SEAT_TEMPERATURE_OPTION]))
