void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);


}

void loop() {
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(1000);
}
