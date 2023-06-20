#include <Arduino.h>
#include <LEDStrip.h>

// put function declarations here:
int redPin = 5;
int greenPin = 8;
int bluePin = 3;
LEDStrip led(redPin, greenPin, bluePin);

void setup() {
  // put your setup code here, to run once:
  led.turnOn();
}

void loop() {
  // put your main code here, to run repeatedly:
  led.fadeToColor(led.RED, led.FADE_SPEED_SLOW);
  led.fadeToColor(led.GREEN, led.FADE_SPEED_SLOW);
  led.fadeToColor(led.BLUE, led.FADE_SPEED_SLOW);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}