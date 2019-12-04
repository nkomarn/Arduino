void setup() {
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  int state = digitalRead(2);
  digitalWrite(12, state);
}
