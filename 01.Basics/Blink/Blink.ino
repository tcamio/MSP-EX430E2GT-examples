/*
 * Blink
 * Turns on red LED on for one second, then off for one second, repeatedly.
 */

const int red_led = 14;

void setup() {
  pinMode(red_led, OUTPUT);
}

void loop() {
  digitalWrite(red_led, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000);                 // wait for a second
  digitalWrite(red_led, LOW);  // turn the LED off by making the voltage LOW
  delay(1000);                 // wait for a second
}
