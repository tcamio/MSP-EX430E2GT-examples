/*
 * Fade
 * This example shows how to fade red LED, which is on pin 14
 * using the analogWrite() function.
 */

int brightness = 0;   // how bright the LED is
int fadeAmount = 5;   // how many points to fade the LED by

const int red_led = 14;

void setup() {
  pinMode(red_led, OUTPUT);

}

void loop() {
  analogWrite(red_led, brightness);

  // change the brightness for next time through the loop
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }

  // wait for 30 milliseconds to see the dimming effect
  delay(30);
  
}
