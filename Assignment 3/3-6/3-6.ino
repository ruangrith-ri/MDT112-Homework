 void setup()
{   pinMode(2,INPUT_PULLUP);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,INPUT);
    pinMode(9,INPUT);
    pinMode(10,INPUT);
    pinMode(11,INPUT);
    pinMode(12,INPUT);
    pinMode(13,INPUT);
   Serial.begin(9600);
}

void loop()

{
 
  int x =0;
  Serial.println("Hello World");
  
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,1);
 
   while(x<4)
 {   
     if(digitalRead(2) ==0)
     {  
        x=1;
        
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
         x++;
      
       }
       
        if(x=3)
        {
         
          digitalWrite(8,0);
          digitalWrite(9,0);
          digitalWrite(10,0);
          digitalWrite(11,0);
          digitalWrite(12,0);
          digitalWrite(13,0);
          x++;
        }
        if(x=4)
          {
             break;
          }
  
     }   
         
        
    }
      
 }


