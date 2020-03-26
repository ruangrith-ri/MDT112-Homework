int LightSpeed = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  int a,b;
            for (a = 1; a <= 100; a++) 
            {
              for (b = 1; b <= a; b++)
              {   
                  LightSpeed = a * 10;
                  digitalWrite(13, HIGH);
                  digitalWrite(12, HIGH);  
                  digitalWrite(11, HIGH); 
                  digitalWrite(10, HIGH); 
                  digitalWrite(9, HIGH);
                  digitalWrite(8, HIGH); 
                  digitalWrite(7, HIGH); 
                  digitalWrite(6, HIGH);
                  digitalWrite(5, HIGH); 
                  digitalWrite(4, HIGH);
                  digitalWrite(3, HIGH);
                  digitalWrite(2, HIGH);
                  delay(LightSpeed);
                  digitalWrite(13, LOW);
                  digitalWrite(12, LOW);
                  digitalWrite(11, LOW);
                  digitalWrite(10, LOW);
                  digitalWrite(9, LOW);
                  digitalWrite(8, LOW);
                  digitalWrite(7, LOW);
                  digitalWrite(6, LOW);
                  digitalWrite(5, LOW);
                  digitalWrite(4, HIGH);
                  digitalWrite(3, HIGH);
                  digitalWrite(2, HIGH);
                  delay(LightSpeed);
                        }
                       }
                      
                  delay(2000);

}
