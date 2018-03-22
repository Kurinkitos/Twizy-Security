/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "modules/canbus/vehicle/twizy/protocol/gear_66.h"

#include "modules/drivers/canbus/common/byte.h"

namespace apollo {
namespace canbus {
namespace twizy {

using ::apollo::drivers::canbus::Byte;

// public
const int32_t Gear66::ID = 0x66;

uint32_t Gear66::GetPeriod() const {
  // on event, so value nonsense
  static const uint32_t PERIOD = 20 * 1000;
  return PERIOD;
}

void Gear66::UpdateData(uint8_t *data) {
  set_gear_p(data, gear_);
  set_brake_pedalstatus_p(data, pedal_);
  // set_clear_driver_override_flag_p(data);
}

void Gear66::Reset() { gear_ = 0; }

Gear66 *Gear66::set_gear_none() {
  gear_ = 0;
  return this;
}

Gear66 *Gear66::set_gear_reverse() {
  gear_ = 0b00100000;
  return this;
}

Gear66 *Gear66::set_gear_neutral() {
  gear_ = 0b00001000;
  return this;
}

Gear66 *Gear66::set_gear_drive() {
  gear_ = 0b00000010;
  return this;
}

Gear66 *Gear66::set_brake_pedalstatus() {
  pedal_ = 0b00000001;
  return this;
}

// private
void Gear66::set_gear_p(uint8_t *data, uint8_t gear) {
  Byte frame(data);
  frame.set_value(gear, 0, 8);
}

void Gear66::set_brake_pedalstatus_p(uint8_t *data, uint8_t pedal) {
  Byte frame(data + 1);
  frame.set_value(pedal, 0, 8);
}

void Gear66::set_clear_driver_override_flag_p(uint8_t *bytes) {
  Byte frame(bytes);
  frame.set_bit_0(7);
}

}  // namespace twizy 
}  // namespace canbus
}  // namespace apollo