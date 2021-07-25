// This simple code makes blinking the Led with 1 second gap
//Void setup runs only once during setup or if you reset it will only run once
void setup() {
pinMode(13, OUTPUT);     // Set pin 13 as an OUTPUT pin
}

// the loop function runs over and over again forever
void loop() {
digitalWrite(13, HIGH); // turn the LED ON
delay(1000);            // waits for a second
digitalWrite(13, LOW);  // turn the LED OFF
delay(1000);            // waits for a second
}
