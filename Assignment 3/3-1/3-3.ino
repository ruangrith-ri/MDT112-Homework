int animationSpeed = 0;

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
  animationSpeed = 250;

  digitalWrite(2, HIGH); 
  delay(animationSpeed);
  digitalWrite(3, HIGH);
  delay(animationSpeed);
  digitalWrite(4, HIGH); 
  delay(animationSpeed);
  digitalWrite(5, HIGH);
  delay(animationSpeed);
  digitalWrite(6, HIGH);
  delay(animationSpeed);
  digitalWrite(7, HIGH);  
  delay(animationSpeed);
  digitalWrite(8, HIGH);
  delay(animationSpeed);
  digitalWrite(9, HIGH); 
  delay(animationSpeed);
  digitalWrite(10,HIGH);
  delay(animationSpeed);
  digitalWrite(11,HIGH); 
  delay(animationSpeed);
  digitalWrite(12,HIGH);
  delay(animationSpeed);
  digitalWrite(13,HIGH);
  delay(animationSpeed);

}
