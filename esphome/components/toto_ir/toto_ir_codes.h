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

// Increase Water Pressure
const remote_base::RawTimings TOTO_IR_FIRST_INCREASE_WATER_PRESSURE_TIMINGS = {
    6019,  -3036, 562,  -551,  537,   -1686, 588,   -551,  537,   -575, 562,   -550,  537,  -575, 563,  -576,  536,
    -575,  537,   -575, 537,   -602,  537,   -575,  536,   -1687, 537,  -602,  537,   -575, 537,  -575, 537,   -1713,
    561,   -552,  560,  -1663, 588,   -551,  536,   -1688, 536,   -576, 563,   -1687, 537,  -576, 536,  -1714, 560,
    -1664, 536,   -602, 561,   -1663, 536,   -1714, 561,   -552,  559,  -1665, 562,   -576, 560,  -552, 536,   -1714,
    560,   -1664, 536,  -1715, 559,   -553,  536,   -576,  560,   -552, 560,   -579,  559};

const remote_base::RawTimings TOTO_IR_SECOND_INCREASE_WATER_PRESSURE_TIMINGS = {
    5992,  -3036, 538,  -575,  536,   -1687, 537,   -602,  537,   -575, 537,   -575,  561,  -551, 563,  -576,  536,
    -576,  536,   -576, 536,   -576,  562,   -576,  536,   -1688, 561,  -577,  536,   -576, 536,  -576, 536,   -1714,
    561,   -552,  536,  -1687, 537,   -602,  536,   -1688, 536,   -576, 562,   -1688, 561,  -552, 535,  -1714, 537,
    -1688, 536,   -602, 536,   -1688, 560,   -1690, 561,   -552,  560,  -1663, 563,   -576, 536,  -576, 559,   -1665,
    562,   -1688, 536,  -1688, 562,   -577,  535,   -577,  535,   -577, 560,   -579,  534};

// Increase Water Position
const remote_base::RawTimings TOTO_IR_FIRST_INCREASE_WATER_POSITION_TIMINGS = {
    6044, -3011, 538,   -575, 537,  -1712, 538,  -575, 537,   -575,  537,  -575,  563,  -575, 537,   -575,  537,
    -575, 561,   -551,  563,  -575, 537,   -575, 537,  -1713, 537,   -575, 537,   -575, 560,  -552,  536,   -602,
    560,  -552,  536,   -576, 536,  -576,  536,  -602, 536,   -576,  560,  -1663, 564,  -575, 560,   -1664, 536,
    -576, 587,   -1662, 537,  -576, 536,   -602, 536,  -576,  536,   -576, 536,   -576, 560,  -1690, 536,   -576,
    560,  -1690, 560,   -553, 559,  -552,  560,  -552, 587,   -1663, 560,  -552,  560};

const remote_base::RawTimings TOTO_IR_SECOND_INCREASE_WATER_POSITION_TIMINGS = {
    6016, -3010, 537,   -601, 562,  -1662, 537,  -575, 563,   -575,  561,  -551,  537,  -575, 537,   -575,  588,
    -550, 537,   -576,  560,  -551, 537,   -602, 536,  -1687, 537,   -575, 561,   -578, 536,  -576,  536,   -576,
    536,  -576,  562,   -576, 536,  -576,  536,  -576, 536,   -575,  563,  -1687, 536,  -577, 560,   -1689, 537,
    -576, 536,   -1714, 560,  -552, 536,   -576, 560,  -552,  535,   -603, 536,   -576, 536,  -1687, 587,   -552,
    560,  -1663, 561,   -552, 586,  -552,  560,  -552, 559,   -1691, 560,  -552,  560};

}  // namespace toto_ir
}  // namespace esphome
