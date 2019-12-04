int frequency = 100;

void setup() {
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  if (digitalRead(7)) {
     tone(8, 100);
  }
}
