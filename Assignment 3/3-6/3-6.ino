 void setup()
{
   
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
   Serial.begin(9600);
}

void loop()

{
  int x =0;
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,1);
  Serial.println("Hello World");
  Serial.println(digitalRead(2));
  
while (x>=0)
 {

     if(x=1)
     {
      digitalWrite(8,1);
      digitalWrite(9,1);
      digitalWrite(10,1);
      digitalWrite(11,1);
      digitalWrite(12,1);
      digitalWrite(13,1);
     }
    if(x=2)
    {
     digitalWrite(8,1);
     digitalWrite(9,1);
     digitalWrite(10,1);
     digitalWrite(11,1);
     digitalWrite(12,1);
     digitalWrite(13,1);
     delay(100);
     digitalWrite(8,0);
     digitalWrite(9,0);
     digitalWrite(10,0);
     digitalWrite(11,0);
     digitalWrite(12,0);
     digitalWrite(13,0);
     delay(100);
    }
    if (x=3)
     {
     digitalWrite(8,0);
     digitalWrite(9,0);
     digitalWrite(10,0);
     digitalWrite(11,0);
     digitalWrite(12,0);
     digitalWrite(13,0);
    }
    if(x=4)
    {
        break;
    }
}


   


}
  
  
  


   
}