// Blink

// Turns all LEDs on for one second, then off for one second, repeatedly.

// This example code is in the public domain.
#include <Piduino.h> 
#include <Wire.h>

void setup() {
  // initializes the i2c bus number 2
  Wire.begin(2);
}

void loop () {
  // Press Ctrl+C to abort ...
  
  Wire.beginTransmission (0x20);  // transmit to the PCF8574
  Wire.write (0x00);              // turn on all leds
  Wire.endTransmission ();   
  delay (1000);                   // wait for a second
  
  Wire.beginTransmission (0x20);  // transmit to device
  Wire.write (0x3F);              // turn off all leds
  Wire.endTransmission ();
  delay (1000);                   // wait for a second
}
