void setup() {

  Serial.begin(9600);

  int x = 0;

  int num = 6 + 2 + 1 + 2 + 0 + 5 + 0 + 1 + 0 + 5 + 5;

  while (x <= 1000) 
  {

    x++;

    if (x % num == 0) 
    {

      Serial.println(x);

    }

  }

}
void loop() {}