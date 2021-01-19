
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, LOW);
  delay(20);
  digitalWrite(13, HIGH);
  delay(20);
  digitalWrite(12, LOW);
  delay(20);
  digitalWrite(12, HIGH);
  delay(20);
}
