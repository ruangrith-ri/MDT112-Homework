void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(2, 1);
  digitalWrite(3, HIGH);
  digitalWrite(4, 1);
  digitalWrite(5, HIGH);
  digitalWrite(6, 1);
  digitalWrite(7, HIGH);
  delay(500);

  digitalWrite(8, 0);
  digitalWrite(9, LOW);
  digitalWrite(10, 0);
  digitalWrite(11, LOW);
  digitalWrite(12, 0);
  digitalWrite(13, LOW);
  delay(500);

  digitalWrite(2, 0);
  digitalWrite(3, LOW);
  digitalWrite(4, 0);
  digitalWrite(5, LOW);
  digitalWrite(6, 0);
  digitalWrite(7, LOW);
  delay(500);

  digitalWrite(8, 1);
  digitalWrite(9, HIGH);
  digitalWrite(10, 1);
  digitalWrite(11, HIGH);
  digitalWrite(12, 1);
  digitalWrite(13, HIGH);
  delay(500);
}