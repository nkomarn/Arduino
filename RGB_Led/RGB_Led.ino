int pins [] = {11, 12, 13};

void setup() {
  for (int i = 0; i < sizeof(pins); i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() { // Cycle through the RGB spectrum
   color(254, 0, 0);
}

// Set the LED to a specific color
void color(int red, int green, int blue) {
  analogWrite(pins[0], red);
  analogWrite(pins[1], green);
  analogWrite(pins[2], blue);
}
