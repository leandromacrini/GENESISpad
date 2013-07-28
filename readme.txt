GENESISpad 1.0

Installation
--------------------------------------------------------------------------------

To install this library, just place this entire folder as a subfolder in your
Arduino/libraries folder.


Building
--------------------------------------------------------------------------------

After this library is installed, you just have to start the Arduino application.
You may see a few warning messages as it's built.

To use this library in a sketch, go to the Sketch | Import Library menu and
select NESpad.  This will add a corresponding line to the top of your sketch:
#include <GENESISpad.h>

To stop using this library, delete that line from your sketch.

Geeky information:
After a successful build of this library, a new file named "GENESISpad.o" will appear
in "Arduino/libraries/GENESISpad".
This file is the built/compiled library code.

If you choose to modify the code for this library (i.e. "GENESISpad.cpp" or "GENESISpad.h"),
then you must first 'unbuild' this library by deleting the "GENESISpad.o" file. The
new "GENESISpad.o" with your code will appear after the next press of "verify".


Hardware
--------------------------------------------------------------------------------
SEGA Genesis/Megadrive controller use a "selector" (pin 7) to switch controller response.

SEGA GENESIS Joystick connector pinout female with SELECT = 5v before the "/" and with SELECT = 0v after
  
TOP ROW (5 pins)
1	UP	/	UP
2	DOWN	/	DOWN
3	LEFT	/	ground
4	RIGHT	/	ground
5	+5v	/	+5v

BOTTOM ROW (4 pins)
6	B	/	A
7	SELECT	/	SELECT
8	ground	/	ground
9	C	/	START

More info at http://code.google.com/p/genesispad
