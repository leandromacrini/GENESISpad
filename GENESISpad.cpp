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

#include "GENESISpad.h"
#include "Arduino.h"
GENESISpad::GENESISpad(int upPin, int downPin, int leftPin, int rightPin, int a_bPin, int c_startPin, int selectPin)
{
	//save values
	m_a_bPin = a_bPin;
	m_c_startPin = c_startPin;
	m_upPin = upPin;
	m_downPin = downPin;
	m_leftPin = leftPin;
	m_rightPin = rightPin;
	m_selectPin = selectPin;

	//init pins
	pinMode(m_a_bPin, INPUT);
	pinMode(m_c_startPin, INPUT);
	pinMode(m_upPin, INPUT);
	pinMode(m_downPin, INPUT);
	pinMode(m_leftPin, INPUT);
	pinMode(m_rightPin, INPUT);

	pinMode(m_selectPin, OUTPUT);
}

byte GENESISpad::buttons(void)
{
	byte result = B00000000;

	//read data with SELECT PIN HIGH
	digitalWrite(m_selectPin, LOW);

	bitWrite(result, 0, digitalRead(m_a_bPin));      //READ A BUTTON
	bitWrite(result, 3, digitalRead(m_c_startPin));  //READ START BUTTON
        
	//read data with SELECT PIN LOW
	digitalWrite(m_selectPin, HIGH);

	bitWrite(result, 1, digitalRead(m_a_bPin));      //READ B BUTTON
	bitWrite(result, 2, digitalRead(m_c_startPin));  //READ C BUTTON

	bitWrite(result, 4, digitalRead(m_upPin));	  //READ UP DPAD
	bitWrite(result, 5, digitalRead(m_downPin));	  //READ DOWN DPAD
	bitWrite(result, 6, digitalRead(m_leftPin));	  //READ LEFT DPAD
	bitWrite(result, 7, digitalRead(m_rightPin));	  //READ RIGHT DPAD

	return result;
}
