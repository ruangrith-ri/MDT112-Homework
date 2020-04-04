void setup() {

  Serial.begin(9600);

  int num = 6 + 2 + 1 + 2 + 0 + 5 + 0 + 1 + 0 + 5 + 5;

  for (int i = 1; i <= 1000; i++) {

    if (i % num == 0) {

      Serial.println(i);

    }

  }

}

void loop() {}