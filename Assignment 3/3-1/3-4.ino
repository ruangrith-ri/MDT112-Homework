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
  digitalWrite(13, HIGH); 
  digitalWrite(13, LOW);
  delay(animationSpeed);
  digitalWrite(12, HIGH);   
  digitalWrite(12, LOW);
  delay(animationSpeed);
  digitalWrite(11, HIGH);  
  digitalWrite(11, LOW);
  delay(animationSpeed);
  digitalWrite(10, HIGH);  
  digitalWrite(10, LOW);
  delay(animationSpeed);
  digitalWrite(9, HIGH); 
  digitalWrite(9, LOW);  
  delay(animationSpeed);
  digitalWrite(8, HIGH);  
  digitalWrite(8, LOW);
  delay(animationSpeed);
  digitalWrite(7, HIGH); 
  digitalWrite(7, LOW);
  delay(animationSpeed);
  digitalWrite(6, HIGH); 
  digitalWrite(6, LOW);  
  delay(animationSpeed);
  digitalWrite(5, HIGH); 
  digitalWrite(5, LOW);
  delay(animationSpeed);
  digitalWrite(4, HIGH);
  digitalWrite(4, LOW);
  delay(animationSpeed);
  digitalWrite(3, HIGH);
  digitalWrite(3, LOW);
  delay(animationSpeed);
  digitalWrite(2, HIGH);  
  digitalWrite(2, LOW);
  delay(animationSpeed);
}
