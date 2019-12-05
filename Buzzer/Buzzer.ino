int frequency = 100;

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
    tone(8, 400);
    delay(5000);
    tone(8, 1000);
    delay(5000);
    tone(8, 100);
    delay(5000);
    tone(8, 50);
    delay(5000);
    tone(8, 3000);
    delay(5000);
    tone(8, 200);
}
