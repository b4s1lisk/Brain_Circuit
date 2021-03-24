#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

int mode = 1; // Selectable mode for the timer
bool sound = true; // Should the sound be played

void setup() {
  // put your setup code here, to run once:

  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  // Increment mode if the left button is pressed
  if (CircuitPlayground.leftButton()) {
    mode++;
  }

  // If the mode is out of range, reset the mode to 0
  if (mode > 1) {
    mode = 0;
  }

  // Turn the sound on/off depending on the switch
  sound = CircuitPlayground.slideSwitch();

  if (mode == 1)
  {
    // ------------------------------------
    // 1 minute timer, 6 seconds per LED
    // ------------------------------------
    
    // Turn off all the pixels to start
    CircuitPlayground.clearPixels();
  
    // Loop for all of the pixels on the Adafruit Circuit Playground Classic
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor(i, 255,255,255); // Turn on the LEDs one at a time (White color)
      delay (500);
      CircuitPlayground.setPixelColor(i, 0,255,3); // Turn on the LEDs one at a time (Green color)
      delay (500);
      CircuitPlayground.setPixelColor(i, 252,157,3); // Turn on the LEDs one at a time (Orange color)
      delay (500);
      CircuitPlayground.setPixelColor(i, 244,3,252); // Turn on the LEDs one at a time (Purple color)
      delay (500);
      CircuitPlayground.setPixelColor(i, 3,48,252); // Turn on the LEDs one at a time (Blue color)
      delay (500);
      CircuitPlayground.setPixelColor(i, 44,252,3); // Turn on the LEDs one at a time (Green color)
      delay (500);
      if (sound) {
        CircuitPlayground.playTone(500 + i * 500, 100); // Beep for 100ms, ramp up the tone
      }
      else {
        delay(100);
      }
      delay(5900); // 5.9 seconds or 5900 miliseconds
    }
  }
  else if (mode == 0)
  {
    // ------------------------------------
    // 10 second timer, 1 second per LED
    // ------------------------------------
    
    // Turn off all the pixels to start
    CircuitPlayground.clearPixels();
  
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor(i, 255,100,100); // Turn on the LEDs one at a time (Pink color)
      if (sound) {
        CircuitPlayground.playTone(500 + i * 500, 100); // Beep for 100ms, ramp up the tone
      }
      else {
        delay(100);
      }
      delay(900); // 0.9 seconds or 900 miliseconds
    }
  }
  else
  {
    // 
  }
  // 
}
