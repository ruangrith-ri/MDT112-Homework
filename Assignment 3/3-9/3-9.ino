void setup() {

  Serial.begin(9600);

  int x = 0;

  int Id = 6 + 2 + 1 + 2 + 0 + 5 + 0 + 1 + 0 + 2 + 0;

  while (x <= 1000) {

    x++;

    if (x % Id == 0) {

      Serial.println(x);

    }

  }

}