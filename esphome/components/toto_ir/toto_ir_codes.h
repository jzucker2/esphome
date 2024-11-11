#pragma once

#include "esphome/components/remote_base/remote_base.h"

namespace esphome {
namespace toto_ir {

// Power Toggle
const remote_base::RawTimings TOTO_IR_FIRST_POWER_TIMINGS = {
    6020, -3037, 537,   -575, 537,  -1713, 537,  -575, 537,   -575,  537,   -575,  564,   -575, 537,   -575,  537,
    -575, 536,   -602,  537,  -575, 537,   -575, 537,  -1713, 537,   -576,  536,   -576,  560,  -552,  560,   -578,
    536,  -576,  561,   -551, 536,  -576,  587,  -552, 560,   -552,  560,   -552,  535,   -576, 587,   -1664, 536,
    -576, 536,   -1714, 560,  -552, 536,   -576, 560,  -579,  560,   -1663, 560,   -1691, 536,  -1688, 536,   -576,
    562,  -1688, 560,   -553, 535,  -577,  586,  -552, 535,   -1688, 536,   -1715, 560};

const remote_base::RawTimings TOTO_IR_SECOND_POWER_TIMINGS = {
    5991, -3037, 560,   -552, 537,  -1713, 537,  -576, 536,   -576,  536,   -576,  586,   -552, 537,   -575,  537,
    -575, 537,   -575,  587,  -552, 560,   -552, 536,  -1714, 561,   -551,  536,   -576,  536,  -576,  560,   -578,
    536,  -576,  560,   -552, 536,  -576,  536,  -603, 560,   -552,  559,   -552,  537,   -576, 562,   -1687, 537,
    -576, 560,   -1690, 536,  -576, 536,   -576, 536,  -603,  535,   -1688, 536,   -1715, 559,  -1665, 560,   -552,
    562,  -1688, 560,   -553, 535,  -577,  585,  -553, 559,   -1665, 559,   -1691, 560};

const remote_base::RawTimings TOTO_IR_THIRD_POWER_TIMINGS = {
    5992, -3036, 538,   -575, 536,  -1714, 561,  -551, 537,   -575,  560,   -552,  563,   -575, 561,   -551,  537,
    -575, 537,   -576,  562,  -576, 536,   -576, 536,  -1714, 537,   -575,  537,   -575,  536,  -576,  536,   -603,
    559,  -553,  536,   -576, 560,  -552,  536,  -602, 551,   -561,  560,   -552,  560,   -552, 586,   -1664, 536,
    -576, 536,   -1714, 561,  -552, 559,   -553, 535,  -603,  536,   -1688, 535,   -1715, 560,  -1664, 560,   -553,
    561,  -1689, 535,   -577, 559,  -553,  586,  -552, 559,   -1665, 535,   -1715, 560};

// Rear Wash
const remote_base::RawTimings TOTO_IR_FIRST_REAR_WASH_TIMINGS = {
    6020, -3036, 562,  -550,  562,  -1689, 537,  -575,  537,   -575,  537,  -575, 563,  -576, 537,   -575,  536,
    -576, 560,   -578, 561,   -551, 537,   -575, 536,   -1714, 537,   -575, 537,  -576, 536,  -575,  563,   -576,
    560,  -552,  536,  -1687, 564,  -575,  536,  -1688, 560,   -1690, 561,  -552, 536,  -576, 560,   -1690, 560,
    -552, 536,   -576, 536,   -602, 536,   -577, 535,   -576,  536,   -576, 563,  -576, 560,  -1663, 537,   -576,
    562,  -1688, 536,  -576,  560,  -1690, 560,  -1664, 536,   -603,  559,  -553, 535};

const remote_base::RawTimings TOTO_IR_SECOND_REAR_WASH_TIMINGS = {
    6016, -3037, 537,  -575,  561,  -1663, 537,  -601,  561,   -551,  537,  -575, 537,  -575, 564,   -575,  536,
    -576, 536,   -576, 560,   -552, 563,   -575, 537,   -1687, 537,   -601, 537,  -576, 536,  -576,  536,   -576,
    536,  -602,  561,  -1663, 536,  -576,  561,  -1689, 537,   -1687, 563,  -576, 536,  -576, 561,   -1662, 587,
    -553, 560,   -551, 560,   -552, 560,   -579, 536,   -576,  535,   -577, 535,  -577, 535,  -1715, 536,   -576,
    536,  -1714, 560,  -552,  536,  -1688, 562,  -1688, 536,   -577,  560,  -552, 586};

// Feminine Wash
const remote_base::RawTimings TOTO_IR_FIRST_FEM_WASH_TIMINGS = {
    6020,  -3036, 537,  -575,  537,  -1687, 537,  -601,  561,   -551,  537,  -575, 537,  -575, 564,  -575, 561,
    -551,  536,   -576, 560,   -552, 587,   -551, 537,   -1687, 537,   -601, 537,  -576, 536,  -576, 536,  -576,
    536,   -602,  536,  -1687, 537,  -576,  536,  -1714, 536,   -1688, 587,  -552, 536,  -576, 536,  -576, 560,
    -1690, 536,   -576, 536,   -576, 536,   -602, 536,   -576,  536,   -576, 536,  -576, 536,  -603, 559,  -1664,
    560,   -1691, 559,  -553,  535,  -1689, 586,  -1664, 559,   -553,  560,  -552, 586};

const remote_base::RawTimings TOTO_IR_SECOND_FEM_WASH_TIMINGS = {
    6015,  -3037, 537,  -575,  537,  -1687, 563,  -576,  536,   -576,  536,  -576, 536,  -602, 537,  -575, 536,
    -576,  536,   -576, 536,   -602, 561,   -552, 536,   -1687, 563,   -576, 536,  -576, 536,  -576, 560,  -552,
    562,   -576,  536,  -1688, 536,  -603,  535,  -1688, 536,   -1715, 536,  -576, 536,  -576, 536,  -576, 536,
    -1714, 536,   -576, 536,   -576, 562,   -577, 559,   -553,  560,   -552, 535,  -577, 561,  -577, 535,  -1689,
    535,   -1715, 559,  -553,  560,  -1690, 536,  -1689, 559,   -553,  561,  -577, 560};

// Start Fans
const remote_base::RawTimings TOTO_IR_FIRST_FAN_TIMINGS = {
    6019,  -3010, 564,  -575, 537,  -1686, 538,  -575, 563,   -575, 537,  -575, 562,  -550, 537,   -601,  538,
    -574,  537,   -576, 537,  -575, 560,   -578, 537,  -1686, 538,  -575, 563,  -575, 561,  -551,  537,   -575,
    537,   -575,  563,  -576, 536,  -576,  536,  -576, 536,   -576, 563,  -575, 560,  -552, 536,   -1714, 537,
    -1687, 537,   -575, 561,  -578, 560,   -552, 560,  -552,  536,  -576, 587,  -552, 535,  -1688, 536,   -1714,
    537,   -576,  560,  -552, 559,  -579,  536,  -576, 536,   -576, 536,  -576, 536};

const remote_base::RawTimings TOTO_IR_SECOND_FAN_TIMINGS = {
    6017,  -3036, 538,  -574, 538,  -1686, 564,  -574, 538,   -574, 562,  -550, 538,  -575, 563,   -575,  537,
    -575,  561,   -551, 537,  -602, 561,   -550, 537,  -1687, 537,  -602, 537,  -575, 561,  -551,  561,   -551,
    536,   -602,  537,  -575, 537,  -575,  537,  -575, 563,   -576, 536,  -576, 536,  -576, 536,   -1714, 560,
    -1664, 536,   -603, 536,  -576, 560,   -551, 537,  -575,  561,  -578, 536,  -576, 536,  -1688, 562,   -1688,
    536,   -576,  560,  -552, 563,  -576,  560,  -552, 560,   -551, 536,  -577, 586};

// Stop
const remote_base::RawTimings TOTO_IR_FIRST_STOP_TIMINGS = {
    6019,  -3036, 562,  -551,  537,   -1686, 588,   -551,  537,   -575, 562,   -550,  537,  -575, 563,  -576,  536,
    -575,  537,   -575, 537,   -602,  537,   -575,  536,   -1687, 537,  -602,  537,   -575, 537,  -575, 537,   -1713,
    561,   -552,  560,  -1663, 588,   -551,  536,   -1688, 536,   -576, 563,   -1687, 537,  -576, 536,  -1714, 560,
    -1664, 536,   -602, 561,   -1663, 536,   -1714, 561,   -552,  559,  -1665, 562,   -576, 560,  -552, 536,   -1714,
    560,   -1664, 536,  -1715, 559,   -553,  536,   -576,  560,   -552, 560,   -579,  559};

const remote_base::RawTimings TOTO_IR_SECOND_STOP_TIMINGS = {
    5992,  -3036, 538,  -575,  536,   -1687, 537,   -602,  537,   -575, 537,   -575,  561,  -551, 563,  -576,  536,
    -576,  536,   -576, 536,   -576,  562,   -576,  536,   -1688, 561,  -577,  536,   -576, 536,  -576, 536,   -1714,
    561,   -552,  536,  -1687, 537,   -602,  536,   -1688, 536,   -576, 562,   -1688, 561,  -552, 535,  -1714, 537,
    -1688, 536,   -602, 536,   -1688, 560,   -1690, 561,   -552,  560,  -1663, 563,   -576, 536,  -576, 559,   -1665,
    562,   -1688, 536,  -1688, 562,   -577,  535,   -577,  535,   -577, 560,   -579,  534};

const remote_base::RawTimings TOTO_IR_THIRD_STOP_TIMINGS = {
    5992,  -3010, 563,  -576,  537,   -1686, 537,   -576,  563,   -575, 537,   -575,  560,  -552, 537,  -602,  536,
    -576,  536,   -575, 537,   -575,  537,   -602,  536,   -1688, 536,  -576,  536,   -602, 536,  -576, 561,   -1663,
    586,   -553,  536,  -1687, 537,   -576,  562,   -1688, 536,   -576, 536,   -1714, 537,  -576, 560,  -1690, 535,
    -1688, 537,   -576, 562,   -1688, 536,   -1688, 587,   -552,  559,  -1664, 536,   -577, 561,  -577, 535,   -1689,
    560,   -1690, 560,  -1664, 536,   -603,  535,   -577,  559,   -553, 559,   -553,  561};

const remote_base::RawTimings TOTO_IR_FOURTH_STOP_TIMINGS = {
    5991, -3037, 537,  -576, 536,  -1687, 564,  -575, 537,   -575, 537,  -575, 537,  -601, 561,  -551, 537,
    -576, 560,   -551, 537,  -602, 536,   -576, 536,  -1688, 536,  -602, 537,  -575, 561,  -551, 561,  -551,
    563,  -576,  536,  -576, 536,  -576,  560,  -552, 586,   -552, 536,  -576, 536,  -576, 560,  -579, 559,
    -553, 535,   -576, 560,  -552, 536,   -603, 559,  -553,  536,  -576, 559,  -553, 586,  -552, 536,  -576,
    536,  -576,  536,  -576, 586,  -553,  559,  -553, 559,   -553, 535,  -577, 585};

const remote_base::RawTimings TOTO_IR_FIFTH_STOP_TIMINGS = {
    6017, -3037, 537,  -575, 561,  -1662, 564,  -575, 537,   -575, 537,  -575, 537,  -575, 587,  -551, 537,
    -576, 536,   -575, 537,  -602, 536,   -576, 536,  -1688, 560,  -578, 537,  -575, 537,  -575, 560,  -552,
    563,  -576,  536,  -576, 536,  -576,  536,  -575, 563,   -576, 536,  -576, 536,  -576, 536,  -576, 587,
    -552, 560,   -552, 535,  -577, 560,   -578, 560,  -552,  560,  -552, 560,  -552, 536,  -602, 560,  -552,
    560,  -552,  560,  -552, 586,  -553,  560,  -552, 535,   -577, 559,  -553, 585};

const remote_base::RawTimings TOTO_IR_SIXTH_STOP_TIMINGS = {
    6018, -3036, 537,  -576, 537,  -1686, 564,  -575, 561,   -551, 537,  -575, 537,  -575, 563,  -575, 537,
    -575, 537,   -575, 537,  -602, 561,   -551, 537,  -1687, 537,  -602, 536,  -575, 537,  -575, 537,  -575,
    563,  -576,  536,  -576, 536,  -576,  536,  -576, 562,   -576, 536,  -576, 536,  -576, 561,  -578, 536,
    -576, 559,   -553, 535,  -577, 536,   -602, 536,  -576,  536,  -576, 560,  -552, 536,  -603, 535,  -577,
    535,  -577,  535,  -577, 562,  -576,  560,  -552, 559,   -553, 535,  -577, 586};

// Water Pressure Timings
const remote_base::RawTimings TOTO_IR_FIRST_WATER_PRESSURE_LEVEL_1_TIMINGS = {
    6018, -3009, 564,   -575, 560,  -1663, 537,  -575, 563,   -576, 536,  -576, 536,  -575, 536,  -603, 560,
    -551, 536,   -576,  561,  -551, 536,   -602, 536,  -1687, 536,  -576, 562,  -576, 561,  -551, 536,  -576,
    536,  -1713, 536,   -576, 536,  -576,  536,  -602, 536,   -576, 536,  -576, 560,  -551, 536,  -603, 535,
    -576, 536,   -1688, 559,  -579, 535,   -577, 545,  -567,  535,  -576, 586,  -552, 559,  -553, 559,  -1664,
    562,  -1688, 536,   -576, 535,  -604,  559,  -552, 560,   -552, 535,  -577, 559};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_1_TIMINGS = {
    6015, -3037, 536,   -576, 536,  -1713, 537,  -575, 537,   -575, 536,  -576, 587,  -551, 536,  -575, 561,
    -551, 537,   -602,  536,  -576, 535,   -576, 536,  -1714, 560,  -552, 536,  -576, 559,  -552, 587,  -551,
    536,  -1687, 537,   -576, 562,  -576,  536,  -576, 535,   -576, 560,  -552, 562,  -576, 536,  -576, 536,
    -576, 535,   -1714, 536,  -576, 536,   -576, 535,  -603,  560,  -552, 559,  -553, 559,  -553, 586,  -1663,
    536,  -1688, 586,   -552, 559,  -553,  559,  -553, 559,   -579, 559,  -553, 559};

const remote_base::RawTimings TOTO_IR_FIRST_WATER_PRESSURE_LEVEL_2_TIMINGS = {
    6018, -3036, 538,   -575, 536,  -1686, 564,  -575, 537,   -575, 537,  -575, 536,  -602, 536,   -576, 536,
    -575, 537,   -575,  536,  -602, 536,   -576, 536,  -1687, 563,  -576, 536,  -575, 536,  -576,  536,  -1714,
    536,  -1687, 537,   -602, 560,  -551,  536,  -576, 536,   -576, 536,  -602, 536,  -576, 535,   -576, 537,
    -575, 560,   -1690, 560,  -552, 536,   -576, 585,  -553,  535,  -577, 535,  -576, 560,  -1690, 559,  -1664,
    560,  -1690, 536,   -577, 558,  -553,  559,  -579, 535,   -577, 559,  -553, 559};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_2_TIMINGS = {
    6015, -3035, 538,   -574, 537,  -1687, 563,  -575, 537,   -575, 536,  -576, 536,  -602, 536,   -576, 536,
    -575, 537,   -575,  537,  -601, 561,   -551, 560,  -1663, 563,  -576, 536,  -576, 536,  -575,  536,  -1714,
    536,  -1687, 537,   -602, 536,  -576,  560,  -551, 560,   -552, 536,  -602, 560,  -552, 536,   -576, 535,
    -576, 536,   -1714, 560,  -552, 536,   -576, 562,  -576,  560,  -552, 535,  -576, 536,  -1714, 536,  -1687,
    560,  -1690, 560,   -553, 559,  -552,  559,  -580, 534,   -577, 559,  -553, 559};

const remote_base::RawTimings TOTO_IR_FIRST_WATER_PRESSURE_LEVEL_3_TIMINGS = {
    6018, -3035, 538,   -574,  561,  -1663, 563,  -575, 537,   -575, 537,  -575, 536,  -602, 561,  -551, 536,
    -575, 561,   -551,  537,   -601, 537,   -575, 536,  -1687, 563,  -576, 536,  -575, 537,  -575, 560,  -552,
    562,  -576,  536,   -1687, 536,  -603,  559,  -552, 536,   -576, 536,  -576, 536,  -602, 536,  -576, 536,
    -576, 535,   -1714, 536,   -576, 560,   -552, 536,  -576,  562,  -576, 535,  -577, 535,  -576, 536,  -576,
    562,  -576,  536,   -576,  559,  -553,  559,  -579, 559,   -552, 559,  -553, 536};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_3_TIMINGS = {
    6016, -3036, 537,   -574,  537,  -1713, 537,  -575, 537,   -575, 537,  -575, 537,  -601, 536,  -576, 536,
    -575, 537,   -575,  563,   -576, 536,   -575, 560,  -1663, 563,  -576, 536,  -576, 536,  -576, 535,  -603,
    535,  -576,  536,   -1687, 537,  -602,  560,  -552, 560,   -552, 535,  -576, 560,  -578, 536,  -576, 536,
    -576, 536,   -1714, 535,   -577, 559,   -552, 536,  -576,  562,  -576, 560,  -552, 535,  -577, 559,  -579,
    559,  -553,  559,   -552,  560,  -552,  535,  -603, 559,   -553, 560,  -552, 558};

const remote_base::RawTimings TOTO_IR_FIRST_WATER_PRESSURE_LEVEL_4_TIMINGS = {
    6017, -3036, 538,   -574,  537,  -1686, 588,  -551, 537,   -575, 536,  -576, 536,  -602, 560,   -552, 536,
    -575, 560,   -552,  536,   -602, 560,   -552, 560,  -1663, 563,  -575, 536,  -576, 536,  -576,  536,  -1713,
    537,  -576,  536,   -1713, 561,  -551,  561,  -551, 560,   -552, 536,  -602, 536,  -576, 559,   -552, 560,
    -552, 536,   -1713, 537,   -576, 536,   -576, 561,  -577,  535,  -576, 560,  -552, 559,  -1691, 536,  -576,
    535,  -577,  559,   -579,  535,  -576,  560,  -552, 536,   -576, 559,  -579, 560};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_4_TIMINGS = {
    6015, -3036, 537,   -575,  537,  -1686, 537,  -601, 537,   -575, 537,  -575, 537,  -575, 560,   -578, 536,
    -576, 536,   -575,  537,   -575, 563,   -576, 559,  -1663, 537,  -576, 586,  -552, 560,  -552,  536,  -1713,
    537,  -576,  535,   -1688, 536,  -602,  560,  -552, 535,   -576, 560,  -552, 586,  -553, 535,   -576, 536,
    -576, 560,   -1689, 561,   -551, 536,   -576, 560,  -552,  562,  -576, 535,  -577, 559,  -1690, 560,  -552,
    536,  -576,  559,   -553,  535,  -603,  535,  -577, 559,   -552, 560,  -552, 586};

const remote_base::RawTimings TOTO_IR_FIRST_WATER_PRESSURE_LEVEL_5_TIMINGS = {
    6018, -3036, 562,   -550,  537,  -1686, 564,  -575, 537,   -575, 536,  -576, 536,  -602, 536,  -575, 537,
    -575, 536,   -576,  536,   -602, 536,   -576, 536,  -1687, 563,  -576, 536,  -575, 536,  -576, 536,  -576,
    562,  -1687, 536,   -1714, 536,  -576,  560,  -552, 536,   -576, 535,  -603, 560,  -552, 535,  -576, 536,
    -576, 536,   -1714, 536,   -576, 535,   -577, 562,  -576,  535,  -577, 535,  -577, 535,  -576, 562,  -1688,
    560,  -552,  535,   -603,  559,  -553,  558,  -553, 535,   -577, 559,  -579, 535};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_PRESSURE_LEVEL_5_TIMINGS = {
    6015, -3036, 537,   -575,  536,  -1713, 537,  -575, 537,   -575, 537,  -575, 563,  -575, 537,  -575, 536,
    -576, 536,   -602,  560,   -552, 536,   -575, 560,  -1690, 536,  -576, 560,  -551, 536,  -576, 586,  -552,
    536,  -1688, 536,   -1714, 536,  -576,  559,  -552, 560,   -552, 562,  -576, 536,  -576, 536,  -576, 535,
    -603, 559,   -1664, 560,   -552, 535,   -603, 559,  -553,  560,  -552, 559,  -552, 586,  -553, 559,  -1664,
    535,  -577,  586,   -552,  559,  -553,  559,  -553, 559,   -579, 559,  -553, 558};

// Water Position Timings
const remote_base::RawTimings TOTO_IR_FIRST_WATER_POSITION_LEVEL_1_TIMINGS = {
    6018, -3009, 565,   -574, 537,  -1686, 538,  -601,  537,   -574, 537,  -575, 537,  -575, 561,   -577,  537,
    -575, 536,   -576,  536,  -576, 563,   -575, 536,   -1687, 537,  -575, 586,  -552, 537,  -575,  560,   -552,
    536,  -601,  537,   -575, 561,  -551,  536,  -1714, 536,   -576, 560,  -552, 536,  -575, 536,   -1714, 536,
    -576, 536,   -1714, 560,  -552, 535,   -576, 560,   -552,  586,  -552, 536,  -576, 560,  -1689, 536,   -577,
    535,  -1688, 560,   -578, 536,  -1687, 536,  -576,  586,   -553, 559,  -552, 536};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_POSITION_LEVEL_1_TIMINGS = {
    6039, -3012, 537,   -575, 537,  -1712, 537,  -575,  562,   -550, 537,  -575, 587,  -551, 561,   -551,  537,
    -575, 536,   -575,  588,  -551, 536,   -576, 560,   -1689, 537,  -575, 536,  -575, 537,  -575,  537,   -602,
    536,  -575,  560,   -552, 560,  -552,  560,  -1689, 536,   -576, 536,  -576, 562,  -576, 560,   -1663, 561,
    -552, 562,   -1687, 536,  -576, 536,   -603, 535,   -576,  536,  -576, 559,  -553, 559,  -1690, 560,   -552,
    559,  -1691, 560,   -552, 535,  -1688, 586,  -552,  560,   -552, 560,  -552, 559};

const remote_base::RawTimings TOTO_IR_FIRST_WATER_POSITION_LEVEL_2_TIMINGS = {
    6019, -3036, 537,   -575, 561,  -1688, 538,  -575,  536,   -575,  537,  -575, 563,  -575, 537,   -575,  536,
    -576, 536,   -575,  563,  -575, 537,   -575, 537,   -1713, 537,   -575, 536,  -576, 560,  -551,  536,   -602,
    537,  -575,  536,   -576, 536,  -576,  586,  -552,  536,   -1687, 536,  -576, 586,  -552, 560,   -1663, 561,
    -551, 563,   -1687, 560,  -552, 560,   -578, 536,   -576,  535,   -577, 535,  -577, 559,  -1690, 560,   -552,
    535,  -1715, 560,   -552, 535,  -576,  536,  -1714, 536,   -576,  560,  -552, 559};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_POSITION_LEVEL_2_TIMINGS = {
    6015, -3009, 564,   -574, 537,  -1686, 538,  -601,  537,   -575,  561,  -550, 537,  -575, 537,   -601,  537,
    -575, 537,   -575,  536,  -576, 536,   -602, 536,   -1687, 537,   -575, 587,  -551, 561,  -551,  560,   -552,
    536,  -576,  562,   -576, 536,  -575,  536,  -576,  560,   -1690, 560,  -552, 535,  -576, 536,   -1714, 536,
    -576, 560,   -1689, 536,  -577, 559,   -552, 560,   -552,  586,   -552, 560,  -552, 559,  -1664, 562,   -577,
    559,  -1664, 536,   -603, 559,  -552,  535,  -1688, 535,   -604,  535,  -576, 560};

const remote_base::RawTimings TOTO_IR_FIRST_WATER_POSITION_LEVEL_3_TIMINGS = {
    6019, -3035, 538,   -574, 561,  -1689, 537,  -575,  537,   -574,  537,  -575, 563,  -575, 537,   -575,  537,
    -575, 537,   -575,  563,  -575, 561,   -551, 560,   -1689, 561,   -551, 536,  -576, 561,  -551,  536,   -602,
    536,  -576,  536,   -575, 537,  -575,  586,  -1664, 536,   -1687, 563,  -576, 536,  -575, 536,   -1687, 563,
    -576, 536,   -1687, 560,  -579, 560,   -552, 560,   -551,  560,   -552, 536,  -602, 560,  -1663, 536,   -576,
    586,  -1664, 559,   -553, 535,  -1715, 535,  -1688, 536,   -603,  559,  -552, 559};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_POSITION_LEVEL_3_TIMINGS = {
    5991, -3010, 563,   -575, 537,  -1686, 537,  -602,  560,   -551,  561,  -551, 561,  -551, 536,   -602,  537,
    -575, 560,   -551,  561,  -551, 537,   -601, 561,   -1663, 536,   -575, 587,  -551, 537,  -575,  561,   -551,
    560,  -552,  562,   -576, 536,  -576,  560,  -1689, 560,   -1664, 536,  -575, 537,  -602, 536,   -1687, 560,
    -552, 562,   -1688, 536,  -576, 560,   -551, 587,   -552,  559,   -552, 560,  -552, 536,  -1714, 536,   -576,
    559,  -1690, 536,   -576, 560,  -1664, 559,  -1691, 559,   -552,  535,  -577, 586};

const remote_base::RawTimings TOTO_IR_FIRST_WATER_POSITION_LEVEL_4_TIMINGS = {
    6019, -3035, 562,   -550, 537,  -1713, 537,  -575, 537,   -575,  536,  -576,  563,  -575, 560,   -552,  536,
    -575, 537,   -575,  563,  -575, 537,   -575, 536,  -1713, 561,   -551, 537,   -575, 536,  -576,  536,   -602,
    537,  -575,  536,   -575, 537,  -575,  560,  -579, 536,   -575,  536,  -1687, 563,  -576, 536,   -1687, 536,
    -576, 562,   -1687, 536,  -576, 560,   -578, 536,  -576,  560,   -552, 536,   -576, 535,  -1714, 536,   -576,
    536,  -1714, 536,   -576, 560,  -552,  551,  -561, 561,   -1688, 560,  -552,  536};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_POSITION_LEVEL_4_TIMINGS = {
    6013, -3010, 588,   -550, 561,  -1663, 537,  -601, 537,   -575,  537,  -575,  536,  -575, 537,   -601,  537,
    -575, 537,   -575,  536,  -576, 536,   -602, 536,  -1687, 537,   -575, 563,   -575, 560,  -552,  536,   -576,
    536,  -575,  563,   -575, 561,  -551,  536,  -576, 536,   -602,  560,  -1663, 536,  -576, 536,   -1714, 536,
    -576, 560,   -1690, 536,  -575, 536,   -576, 560,  -552,  586,   -552, 560,   -552, 560,  -1663, 562,   -577,
    559,  -1664, 559,   -579, 560,  -552,  560,  -552, 559,   -1690, 560,  -552,  560};

const remote_base::RawTimings TOTO_IR_FIRST_WATER_POSITION_LEVEL_5_TIMINGS = {
    6019, -3035, 538,   -575, 537,  -1712, 537,  -575,  537,   -575,  537,  -575,  563,  -575, 536,   -576,  536,
    -575, 537,   -575,  587,  -551, 537,   -575, 536,   -1713, 561,   -551, 537,   -575, 560,  -552,  536,   -602,
    536,  -576,  536,   -576, 536,  -575,  587,  -1663, 536,   -576,  536,  -1714, 536,  -576, 559,   -1664, 587,
    -551, 536,   -1687, 536,  -603, 536,   -575, 561,   -551,  536,   -576, 535,   -603, 560,  -1663, 536,   -576,
    586,  -1664, 560,   -552, 535,  -1715, 560,  -552,  559,   -1690, 560,  -552,  559};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_POSITION_LEVEL_5_TIMINGS = {
    5990, -3010, 563,   -575, 537,  -1686, 537,  -575,  564,   -575,  536,  -575,  561,  -551, 537,   -602,  560,
    -551, 537,   -575,  536,  -575, 561,   -578, 536,   -1687, 536,   -576, 563,   -575, 536,  -576,  536,   -576,
    535,  -576,  563,   -575, 536,  -576,  536,  -1713, 537,   -576,  535,  -1688, 559,  -579, 560,   -1663, 536,
    -576, 536,   -1714, 536,  -576, 536,   -576, 586,   -552,  560,   -552, 559,   -552, 536,  -1714, 536,   -576,
    560,  -1689, 536,   -577, 559,  -1664, 535,  -603,  535,   -1688, 560,  -553,  585};

// Water Temperature Timings
const remote_base::RawTimings TOTO_IR_FIRST_WATER_TEMPERATURE_OFF_TIMINGS = {
    6019,  -3009, 563,   -576, 536,  -1687, 537,   -601,  537,   -575, 536,  -576, 536,  -576, 560,   -578,  536,
    -575,  537,   -575,  536,  -576, 587,   -552,  535,   -1688, 536,  -575, 563,  -576, 560,  -552,  559,   -552,
    536,   -576,  587,   -551, 560,  -552,  560,   -552,  535,   -603, 535,  -576, 536,  -576, 536,   -1714, 536,
    -1687, 536,   -1714, 536,  -576, 536,   -1688, 562,   -1687, 560,  -552, 560,  -579, 559,  -1664, 560,   -1690,
    559,   -1664, 560,   -553, 558,  -1691, 535,   -1688, 562,   -577, 535,  -577, 534};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_TEMPERATURE_OFF_TIMINGS = {
    6015,  -3012, 537,   -575, 560,  -1663, 587,   -551,  537,   -575, 561,  -551, 536,  -576, 563,   -575,  536,
    -576,  560,   -552,  536,  -575, 563,   -575,  536,   -1687, 537,  -602, 536,  -576, 536,  -576,  535,   -576,
    536,   -603,  535,   -576, 536,  -576,  559,   -553,  586,   -552, 535,  -577, 559,  -552, 536,   -1714, 536,
    -1687, 560,   -1690, 560,  -553, 559,   -1690, 560,   -1663, 560,  -552, 535,  -604, 535,  -1688, 559,   -1691,
    559,   -1664, 560,   -552, 586,  -1664, 560,   -1690, 560,   -552, 559,  -553, 559};

const remote_base::RawTimings TOTO_IR_FIRST_WATER_TEMPERATURE_LEVEL_1_TIMINGS = {
    6018,  -3036, 538,   -574, 537,  -1713, 561,   -551,  561,   -551, 561,  -551, 563,  -575, 536,  -576,  536,
    -576,  536,   -602,  536,  -575, 537,   -575,  560,   -1690, 536,  -576, 560,  -551, 536,  -576, 536,   -1714,
    536,   -576,  536,   -575, 563,  -576,  560,   -552,  535,   -576, 560,  -552, 586,  -552, 536,  -1687, 560,
    -1690, 560,   -1663, 536,  -603, 535,   -1688, 536,   -1714, 559,  -553, 536,  -576, 535,  -576, 562,   -1688,
    536,   -1687, 587,   -552, 535,  -1688, 560,   -1690, 536,   -576, 559,  -553, 559};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_TEMPERATURE_LEVEL_1_TIMINGS = {
    5991,  -3036, 537,   -575, 537,  -1686, 587,   -551,  537,   -575, 537,  -575, 536,  -576, 586,  -552,  536,
    -576,  536,   -575,  561,  -551, 563,   -575,  561,   -1663, 560,  -578, 536,  -576, 536,  -576, 536,   -1713,
    560,   -552,  560,   -552, 536,  -576,  562,   -576,  560,   -552, 560,  -551, 536,  -576, 562,  -1688, 560,
    -1690, 536,   -1687, 560,  -552, 560,   -1690, 536,   -1687, 560,  -579, 535,  -576, 536,  -576, 560,   -1690,
    559,   -1664, 560,   -552, 562,  -1688, 559,   -1691, 559,   -553, 535,  -577, 559};

const remote_base::RawTimings TOTO_IR_FIRST_WATER_TEMPERATURE_LEVEL_2_TIMINGS = {
    6018,  -3009, 538,   -601,  537,  -1686, 537,   -575,  563,   -576, 536,  -575, 536,  -576, 560,   -552,  562,
    -576,  560,   -552,  560,   -552, 535,   -603,  536,   -1687, 536,  -576, 560,  -578, 536,  -576,  536,   -576,
    535,   -576,  560,   -578,  536,  -1688, 536,   -576,  562,   -576, 536,  -576, 559,  -552, 536,   -1714, 536,
    -1688, 559,   -1690, 536,   -576, 536,   -1714, 535,   -1688, 560,  -552, 562,  -576, 536,  -1688, 559,   -1691,
    559,   -1664, 560,   -1690, 560,  -1664, 535,   -1714, 536,   -576, 535,  -577, 535};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_TEMPERATURE_LEVEL_2_TIMINGS = {
    5991,  -3036, 537,   -575,  536,  -1687, 561,   -577,  537,   -575, 537,  -575, 561,  -551, 562,   -576,  560,
    -552,  560,   -552,  535,   -576, 563,   -576,  559,   -1664, 536,  -602, 536,  -576, 535,  -577,  559,   -552,
    536,   -602,  536,   -576,  536,  -1687, 536,   -603,  535,   -577, 535,  -576, 536,  -576, 562,   -1688, 560,
    -1663, 562,   -1688, 536,   -576, 560,   -1690, 536,   -1687, 536,  -603, 535,  -576, 560,  -1664, 586,   -1664,
    535,   -1688, 562,   -1688, 559,  -1664, 587,   -1663, 560,   -553, 559,  -579, 559};

const remote_base::RawTimings TOTO_IR_FIRST_WATER_TEMPERATURE_LEVEL_3_TIMINGS = {
    6019,  -3009, 564,   -575,  537,  -1686, 561,   -551,  587,   -552, 536,  -575, 560,  -552, 560,  -552,  562,
    -576,  560,   -552,  536,   -575, 536,   -602,  536,   -1688, 560,  -552, 536,  -602, 560,  -552, 560,   -1663,
    562,   -1688, 536,   -576,  560,  -1690, 559,   -553,  535,   -576, 536,  -603, 559,  -552, 560,  -1664, 535,
    -1714, 536,   -1688, 536,   -602, 560,   -1664, 559,   -1690, 536,  -577, 559,  -553, 559,  -552, 586,   -553,
    534,   -1689, 559,   -1690, 559,  -1665, 560,   -1690, 560,   -552, 535,  -577, 585};

const remote_base::RawTimings TOTO_IR_SECOND_WATER_TEMPERATURE_LEVEL_3_TIMINGS = {
    6014,  -3012, 537,   -575,  560,  -1663, 563,   -576,  560,   -551, 561,  -552, 536,  -575, 562,  -576,  536,
    -576,  560,   -552,  536,   -602, 536,   -576,  536,   -1687, 560,  -578, 560,  -552, 560,  -552, 536,   -1713,
    536,   -1688, 560,   -552,  562,  -1688, 559,   -553,  535,   -603, 535,  -577, 535,  -576, 536,  -1714, 536,
    -1688, 535,   -1714, 536,   -576, 536,   -1688, 562,   -1688, 559,  -553, 558,  -553, 562,  -577, 534,   -577,
    535,   -1715, 535,   -1688, 536,  -1714, 537,   -1687, 559,   -553, 561,  -577, 559};

// Seat Temperature Timings
const remote_base::RawTimings TOTO_IR_FIRST_SEAT_TEMPERATURE_OFF_TIMINGS = {
    6019,  -3036, 537,   -575,  561,  -1662, 563,   -575,  537,   -575, 537,  -575, 536,  -576, 587,  -551,  536,
    -576,  560,   -552,  560,   -578, 536,   -576,  536,   -1686, 537,  -602, 560,  -552, 536,  -576, 560,   -1689,
    536,   -1687, 561,   -552,  586,  -1663, 536,   -576,  536,   -576, 586,  -553, 535,  -576, 536,  -1714, 560,
    -1663, 560,   -1690, 560,   -552, 536,   -1687, 587,   -1663, 560,  -552, 560,  -552, 586,  -552, 535,   -577,
    559,   -1690, 536,   -1688, 535,  -1715, 535,   -1689, 559,   -552, 559,  -580, 559};

const remote_base::RawTimings TOTO_IR_SECOND_SEAT_TEMPERATURE_OFF_TIMINGS = {
    5991,  -3036, 536,   -576,  536,  -1687, 563,   -575,  537,   -575, 537,  -575, 560,  -552, 562,  -576,  536,
    -576,  536,   -575,  536,   -576, 586,   -552,  561,   -1662, 561,  -578, 536,  -575, 537,  -575, 560,   -1690,
    536,   -1687, 536,   -577,  562,  -1687, 536,   -577,  535,   -576, 562,  -576, 536,  -576, 559,  -1690, 536,
    -1688, 536,   -1714, 560,   -552, 535,   -1688, 560,   -1690, 535,  -577, 559,  -553, 586,  -552, 535,   -577,
    559,   -1664, 586,   -1664, 559,  -1691, 559,   -1665, 535,   -576, 559,  -580, 559};

const remote_base::RawTimings TOTO_IR_FIRST_SEAT_TEMPERATURE_LEVEL_1_TIMINGS = {
    6018,  -3010, 587,   -552,  536,  -1687, 537,   -575,  563,   -575, 536,  -576, 536,  -576, 560,  -578,  536,
    -576,  559,   -552,  536,   -576, 560,   -578,  560,   -1663, 561,  -552, 562,  -576, 536,  -576, 559,   -1664,
    586,   -1664, 560,   -552,  559,  -1690, 536,   -1688, 559,   -579, 560,  -552, 559,  -553, 560,  -1689, 536,
    -1688, 535,   -1715, 559,   -553, 535,   -1688, 562,   -1688, 560,  -552, 535,  -603, 559,  -553, 535,   -577,
    535,   -1714, 536,   -1688, 559,  -553,  559,   -1690, 536,   -577, 534,  -577, 586};

const remote_base::RawTimings TOTO_IR_SECOND_SEAT_TEMPERATURE_LEVEL_1_TIMINGS = {
    5990,  -3037, 536,   -576,  536,  -1687, 563,   -575,  537,   -575, 536,  -576, 560,  -552, 562,  -576,  536,
    -576,  559,   -552,  536,   -576, 587,   -551,  536,   -1687, 561,  -578, 536,  -576, 535,  -577, 559,   -1690,
    536,   -1688, 536,   -576,  586,  -1663, 561,   -1663, 562,   -576, 560,  -552, 559,  -553, 559,  -1690, 536,
    -1688, 535,   -1715, 560,   -552, 559,   -1690, 560,   -1664, 560,  -552, 586,  -552, 535,  -577, 559,   -553,
    559,   -1690, 535,   -1689, 559,  -579,  535,   -1688, 535,   -578, 534,  -604, 535};

const remote_base::RawTimings TOTO_IR_FIRST_SEAT_TEMPERATURE_LEVEL_2_TIMINGS = {
    6018,  -3010, 563,   -575,  537,  -1686, 561,   -578,  537,   -575, 536,  -576,  560,  -551,  536,  -602,  537,
    -575,  536,   -576,  536,   -576, 586,   -552,  560,   -1663, 536,  -576, 562,   -576, 536,   -576, 560,   -1690,
    536,   -1687, 536,   -576,  560,  -1690, 560,   -552,  560,   -552, 559,  -579,  535,  -1688, 536,  -1714, 536,
    -1687, 560,   -1690, 560,   -552, 536,   -1714, 559,   -1664, 536,  -577, 535,   -603, 559,   -552, 559,   -553,
    559,   -1691, 559,   -1664, 559,  -1691, 536,   -1688, 535,   -577, 585,  -1664, 560};

const remote_base::RawTimings TOTO_IR_SECOND_SEAT_TEMPERATURE_LEVEL_2_TIMINGS = {
    5990,  -3036, 537,   -575,  561,  -1662, 537,   -602,  560,   -552, 536,  -575,  537,  -576,  562,  -576,  536,
    -575,  536,   -576,  536,   -576, 586,   -552,  560,   -1663, 561,  -551, 562,   -576, 536,   -576, 536,   -1714,
    536,   -1687, 536,   -576,  536,  -1714, 536,   -576,  535,   -576, 562,  -577,  535,  -1688, 536,  -1714, 536,
    -1687, 560,   -1690, 536,   -576, 536,   -1714, 535,   -1688, 536,  -577, 535,   -603, 559,   -553, 558,   -553,
    535,   -1715, 559,   -1664, 560,  -1690, 560,   -1664, 559,   -580, 534,  -1688, 560};

const remote_base::RawTimings TOTO_IR_FIRST_SEAT_TEMPERATURE_LEVEL_3_TIMINGS = {
    6042,  -2985, 564,   -575,  537,  -1686, 537,   -602,  536,   -576,  536,  -575,  536,  -576,  560,  -578,  561,
    -551,  536,   -576,  536,   -575, 587,   -552,  536,   -1687, 560,   -552, 562,   -576, 536,   -576, 559,   -1664,
    586,   -1664, 536,   -576,  536,  -1714, 536,   -1687, 536,   -1714, 536,  -576,  535,  -1715, 560,  -1663, 560,
    -1690, 560,   -1664, 535,   -603, 559,   -1664, 560,   -1690, 536,   -576, 560,   -552, 559,   -553, 559,   -579,
    535,   -1688, 560,   -1690, 559,  -553,  559,   -553,  535,   -577,  585,  -1664, 559};

const remote_base::RawTimings TOTO_IR_SECOND_SEAT_TEMPERATURE_LEVEL_3_TIMINGS = {
    5991,  -3036, 536,   -576,  536,  -1687, 563,   -576,  536,   -576,  536,  -575,  560,  -552,  562,  -576,  536,
    -576,  536,   -576,  560,   -578, 560,   -551,  537,   -1687, 536,   -602, 536,   -576, 536,   -576, 559,   -1690,
    536,   -1687, 560,   -553,  562,  -1687, 561,   -1663, 586,   -1664, 535,  -577,  535,  -1715, 559,  -1664, 535,
    -1715, 559,   -1664, 586,   -553, 535,   -1688, 535,   -1715, 559,   -553, 559,   -553, 559,   -553, 561,   -577,
    559,   -1664, 535,   -1715, 559,  -553,  559,   -553,  558,   -580,  559,  -1664, 559};

// Fan Temperature Timings
const remote_base::RawTimings TOTO_IR_FIRST_FAN_TEMPERATURE_LEVEL_1_TIMINGS = {
    6019, -3036, 537,  -574,  537,   -1687, 563,   -575,  537,   -575,  537,  -575, 536,  -602, 536,   -576, 536,
    -575, 537,   -575, 536,   -602,  537,   -575,  536,   -1687, 563,   -576, 536,  -576, 560,  -551,  561,  -1689,
    561,  -551,  536,  -576,  560,   -552,  562,   -1687, 536,   -1714, 537,  -575, 536,  -576, 560,   -552, 536,
    -602, 560,   -552, 535,   -1688, 562,   -1688, 536,   -1687, 563,   -576, 560,  -552, 560,  -1689, 560,  -552,
    536,  -576,  535,  -1715, 535,   -577,  535,   -576,  536,   -576,  559,  -579, 560};

const remote_base::RawTimings TOTO_IR_SECOND_FAN_TEMPERATURE_LEVEL_1_TIMINGS = {
    6014, -3036, 537,  -575,  536,   -1687, 563,   -575,  537,   -575,  561,  -551, 536,  -576, 586,   -552, 536,
    -576, 536,   -576, 560,   -578,  536,   -575,  537,   -1686, 537,   -602, 560,  -552, 536,  -576,  559,  -1690,
    537,  -575,  561,  -551,  560,   -552,  562,   -1687, 561,   -1689, 561,  -551, 536,  -576, 536,   -576, 536,
    -602, 560,   -552, 560,   -1663, 536,   -1714, 536,   -1687, 563,   -576, 560,  -552, 559,  -1664, 587,  -552,
    559,  -552,  560,  -1690, 560,   -552,  559,   -553,  534,   -577,  560,  -579, 559};

const remote_base::RawTimings TOTO_IR_FIRST_FAN_TEMPERATURE_LEVEL_2_TIMINGS = {
    6018, -3036, 537,  -575,  537,   -1686, 564,   -575,  537,   -574,  537,  -575, 561,  -577, 537,   -575, 561,
    -551, 536,   -576, 536,   -602,  536,   -576,  536,   -1687, 536,   -602, 536,  -576, 536,  -576,  559,  -1690,
    561,  -1663, 536,  -576,  563,   -575,  536,   -1687, 537,   -1713, 560,  -552, 560,  -552, 536,   -602, 536,
    -576, 559,   -553, 535,   -1714, 560,   -1664, 560,   -1690, 536,   -576, 535,  -577, 560,  -1689, 560,  -1664,
    559,  -579,  535,  -1688, 536,   -577,  535,   -603,  559,   -553,  559,  -552, 535};

const remote_base::RawTimings TOTO_IR_SECOND_FAN_TEMPERATURE_LEVEL_2_TIMINGS = {
    6013, -3036, 537,  -575,  536,   -1687, 564,   -575,  536,   -575,  537,  -575, 537,  -575, 587,   -551, 560,
    -551, 537,   -575, 537,   -602,  560,   -551,  537,   -1686, 561,   -578, 560,  -552, 560,  -552,  560,  -1689,
    537,  -1687, 536,  -576,  562,   -576,  536,   -1687, 560,   -1690, 536,  -576, 536,  -576, 536,   -602, 536,
    -576, 560,   -552, 535,   -1714, 561,   -1663, 535,   -1714, 560,   -553, 535,  -577, 559,  -1690, 536,  -1687,
    560,  -553,  585,  -1664, 560,   -552,  535,   -603,  559,   -553,  535,  -577, 535};

const remote_base::RawTimings TOTO_IR_FIRST_FAN_TEMPERATURE_LEVEL_3_TIMINGS = {
    6018, -3036, 561,  -551,  537,   -1686, 563,   -575,  537,   -575,  537,  -575, 561,  -577, 561,   -551, 536,
    -576, 536,   -575, 537,   -602,  560,   -551,  561,   -1662, 588,   -551, 560,  -552, 536,  -576,  560,  -1689,
    537,  -575,  561,  -1689, 536,   -576,  560,   -1663, 560,   -1690, 560,  -552, 560,  -552, 560,   -578, 536,
    -576, 535,   -577, 560,   -1689, 536,   -1688, 559,   -1691, 559,   -553, 559,  -553, 535,  -1714, 536,  -576,
    536,  -1714, 535,  -1688, 560,   -553,  585,   -553,  535,   -576,  560,  -552, 559};

const remote_base::RawTimings TOTO_IR_SECOND_FAN_TEMPERATURE_LEVEL_3_TIMINGS = {
    5990, -3036, 562,  -551,  536,   -1687, 587,   -551,  537,   -575,  560,  -552, 536,  -576, 562,   -576, 536,
    -575, 561,   -551, 561,   -577,  537,   -575,  536,   -1687, 560,   -579, 536,  -576, 560,  -551,  536,  -1714,
    536,  -576,  560,  -1663, 563,   -576,  560,   -1663, 560,   -1690, 536,  -576, 560,  -552, 560,   -578, 536,
    -576, 560,   -552, 559,   -1690, 536,   -1687, 536,   -1714, 560,   -553, 559,  -552, 535,  -1715, 535,  -577,
    535,  -1714, 536,  -1688, 536,   -576,  560,   -578,  560,   -552,  559,  -553, 559};

}  // namespace toto_ir
}  // namespace esphome
