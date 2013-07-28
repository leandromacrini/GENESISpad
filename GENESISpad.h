/*
  GENESISpad - Arduino library for interfacing with a SEGA Megadrive/Genesis joystick (3 button)

  Version: 1.0 (28/07/2013) - Created (Leandro Macrini)

  This file is part of GENESISpad.

  GENESISpad is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  GENESISpad is distributed  WITHOUT ANY WARRANTY.

  You should have received a copy of the GNU Lesser General Public License
  along with GENESISpad. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef GENESISpad_h
#define GENESISpad_h

#include <inttypes.h>

#define GENESIS_A       B00000001
#define GENESIS_B       B00000010
#define GENESIS_C	B00000100
#define GENESIS_START   B00001000
#define GENESIS_UP      B00010000
#define GENESIS_DOWN    B00100000
#define GENESIS_LEFT    B01000000
#define GENESIS_RIGHT   B10000000

class GENESISpad {

  public:
    GENESISpad(int upPin, int downPin, int leftPin, int rightPin, int a_bPin, int c_startPin, int selectPin);
    uint8_t buttons();

  private:
    int m_a_bPin, m_c_startPin, m_upPin, m_downPin, m_leftPin, m_rightPin, m_selectPin;

};

#endif

