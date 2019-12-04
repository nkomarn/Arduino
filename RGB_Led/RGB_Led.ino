int pins [] = {8, 9, 10};

void setup() {
  for (int i = 0; i < sizeof(pins); i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() { // Cycle through the RGB spectrum
  for (int r = 0; r < 254; r++) {
    for (int g = 0; g < 254; g++) {
      for (int b = 0; b < 254; b++) {
        color(r, g, b);
      }
    }
  }
}

// Set the LED to a specific color
void color(int red, int green, int blue) {
  digitalWrite(pins[0], red);
  digitalWrite(pins[1], green);
  digitalWrite(pins[2], blue);
}
