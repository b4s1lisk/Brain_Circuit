
#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

int mode = 0; // Selectable mode for the timer
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
  if (mode > 6) {
    mode = 0;
  }

  // Turn the sound on/off depending on the switch
  sound = CircuitPlayground.slideSwitch();


  if (mode==0)
  {
    CircuitPlayground.clearPixels();
  
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor(i, 044,242,249); // Turn on the LEDs one at a time (Teal color)
      if (sound) {
        CircuitPlayground.playTone(50 + i * 50, 100); // Beep for 50ms, ramp up the tone
      }
      else {
        delay(50);
      }
      delay(900); // 0.9 seconds or 900 miliseconds
    }
  }
  else if (mode==1)
  {
    CircuitPlayground.clearPixels();
  
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor(i, 0, 3, 156); // Turn on the LEDs one at a time (Teal color)
      if (sound) {
        CircuitPlayground.playTone(50 + i * 150, 100); // Beep for 150ms, ramp up the tone
      }
      else {
        delay(150);
      }
      delay(900); // 0.9 seconds or 900 miliseconds
    }
  }   
  else if (mode == 2)
  {
    // ------------------------------------
    // 1 minute timer, 6 seconds per LED
    // ------------------------------------
    
    // Turn off all the pixels to start
    CircuitPlayground.clearPixels();
  
    // Loop for all of the pixels on the Adafruit Circuit Playground Classic
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor( i,14, 36, 232); // Turn on the LEDs one at a time (Dark Blue color)
      
      if (sound) {
        CircuitPlayground.playTone(500 + i * 80, 100); // Beep for 80ms, ramp up the tone
      }
      else {
      delay(80);
      }
      delay(5900); // 5.9 seconds or 5900 miliseconds
    }
  }
  else if (mode == 3)
  {
    // ------------------------------------
    // 10 second timer, 1 second per LED
    // ------------------------------------
    
    // Turn off all the pixels to start
    CircuitPlayground.clearPixels();
  
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor(i, 64, 0, 255); // Turn on the LEDs one at a time (Dark Purple color)
      if (sound) {
        CircuitPlayground.playTone(500 + i * 90, 100); // Beep for 90ms, ramp up the tone
      }
      else {
      delay(90);
      }
      delay(900); // 0.9 seconds or 900 miliseconds
    }
  }
   else if (mode == 4)
  {
    // ------------------------------------
    // 10 second timer, 1 second per LED
    // ------------------------------------
    
    // Turn off all the pixels to start
    CircuitPlayground.clearPixels();
  
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor(i, 35, 5, 125); // Turn on the LEDs one at a time (Purple color)
      if (sound) {
        CircuitPlayground.playTone(500 + i * 90, 100); // Beep for 90ms, ramp up the tone
      }
      else {
      delay(90);
      }
      delay(900); // 0.9 seconds or 900 miliseconds
    }
  }
   else if (mode == 5)
  {
    // ------------------------------------
    // 10 second timer, 1 second per LED
    // ------------------------------------
    
    // Turn off all the pixels to start
    CircuitPlayground.clearPixels();
  
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor(i, 207, 138, 138); // Turn on the LEDs one at a time (Pink color)
      if (sound) {
        CircuitPlayground.playTone(500 + i * 90, 100); // Beep for 90ms, ramp up the tone
      }
      else {
      delay(90);
      }
      delay(900); // 0.9 seconds or 900 miliseconds
    }
  } 
  else
  {
    // This shouldn't happen
  }
  // TODO: Create 5 different visual timers
}
