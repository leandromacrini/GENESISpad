/* 
   this example from the GENESISpad Arduino library
   displays the buttons on the joystick as bits
   on the serial port - leandromacrini@gmail.com
   
   Version: 1.0 (28/07/2013)
   
*/

#include "GENESISpad.h"

// put your own pin configuration number here -- see the pinout in readme.txt
GENESISpad genesis = GENESISpad(3,4,5,6,7,8,12);

byte state = 0;

void setup() {
  Serial.begin(57600);
}

void loop() {
  
  state = genesis.buttons();

  // shows the shifted bits from the joystick
  // buttons are high (1) when up 
  // and low (0) when pressed
  Serial.println(~state, BIN);

  delay(50);
}