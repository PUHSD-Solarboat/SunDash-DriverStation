/*
Sample code to test out LEDs (to see if they still work)

Update [04.15.2019]: After taking the LEDs outside, it is too hard to determine when 
the LED is on/off. Therefore, we are taking a different approach to alert the driver when to 
slow down.

  */
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}