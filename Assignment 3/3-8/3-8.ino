void setup() {

  Serial.begin(9600);

  int Id = 6 + 2 + 1 + 2 + 0 + 5 + 0 + 1 + 0 + 2 + 0;

  for (int i = 1; i <= 1000; i++) {

    if (i % Id == 0) {

      Serial.println(i);

    }

  }

}

void loop() {}