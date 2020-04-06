void setup() {

  Serial.begin(9600);

  int A = 6 + 1 + 0 + 8 + 0 + 5 + 0 + 1 + 6 + 1 + 5;

  for (int i = 1; i <= 1000; i++) {

    if (i % A == 0) {

      Serial.println(i);

    }

  }

}

void loop() {}