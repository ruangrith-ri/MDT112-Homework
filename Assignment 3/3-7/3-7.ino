void setup() 
{
  Serial.begin(9600);

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

int x = 1;
int a = 2;
void loop() 
{
  for (int i = 0; i < x && x <= 100; i++) 
  {
    for (int j = 1; j < a && j <= 13; j++) 
    {
      digitalWrite(a, 1);
      a++;
      if (a > 13) 
      {
        break;
      }
    }
    delay(x * 10);
    a = 2;
    for (int k = 1; k < a && k <= 13; k++) 
    {
      digitalWrite(a, 0);
      a++;
      if (a > 13) {
        break;
      }
    }
    delay(x * 10);
    a = 2;
  }
  x++;
  if (x > 100) {
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
    digitalWrite(13, 0);
    delay(1000);
    x = 1;
  }
}
 