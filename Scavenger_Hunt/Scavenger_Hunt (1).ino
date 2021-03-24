#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

int mode = 0; // Selectable mode for the code

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

  if (mode == 0)
  {
    // Light all LEDs Red
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor(i, 255,0,0);
    }
  }
  else if (mode == 1)
  {
    // Light all LEDs Orange
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor(i, 255,89,0);
    }
  }
  else if (mode == 2)
  {
    // Light all LEDs Yellow
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor(i, 255,230,0);
    }
  }
  else if (mode == 3)
  {
    // Light all LEDs Green
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor(i, 0,255,17);
    }
  }
  else if (mode == 4)
  {
    // Light all LEDs Blue
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor(i, 0,0,255);
    }
  }
  else if (mode == 5)
  {
    // Light all LEDs Purple
    for (int i=0; i<10; i++)
    {
      CircuitPlayground.setPixelColor(i, 140,0,255);
    }
  }
  else
  {
    // This shouldn't happen
  }
  delay(500); // Delay for 0.5s or 500ms
}
