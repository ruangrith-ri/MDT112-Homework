void setup()
{
    Serial.begin(9600);
    pinMode(13,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(2,INPUT_PULLUP);
}
int x =1;
void loop()
{
   if(digitalRead(2)==1){
    if(digitalRead(2)==0){
        Serial.println(x);
        x++;
    
    digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,0);
    digitalWrite(10,0);
    digitalWrite(9,0);
    digitalWrite(8,0);
    digitalWrite(7,0);
    digitalWrite(6,0);
    digitalWrite(5,0);
    digitalWrite(4,0);
    digitalWrite(3,0);
   }
    else
   {
    digitalWrite(13,1);
    digitalWrite(12,1);
    digitalWrite(11,1);
    digitalWrite(10,1);
    digitalWrite(9,1);
    digitalWrite(8,1);
    digitalWrite(7,1);
    digitalWrite(6,1);
    digitalWrite(5,1);
    digitalWrite(4,1);
    digitalWrite(3,1);
   }
   }
   
}