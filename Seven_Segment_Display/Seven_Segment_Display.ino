int segments [] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void(* reset) (void) = 0;

int index = 0;
void loop() {
  if (index < 8) {
    digitalWrite(segments[index], HIGH);
    index++;
    tone(12, 500);
    delay(500);
    noTone(12);
  } 
  delay(500);
}
