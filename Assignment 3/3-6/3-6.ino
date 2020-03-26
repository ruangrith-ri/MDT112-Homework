void setup(){
pinMode(2, INPUT_PULLUP);
pinMode(3, INPUT_PULLUP);
pinMode(4, INPUT_PULLUP);
pinMode(5, INPUT_PULLUP);
pinMode(6, INPUT_PULLUP);
pinMode(7, INPUT_PULLUP);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
Serial.begin(9600);
Serial.println("Hello World");
}

int x=0;
void loop(){
    if(digitalRead(2)==0){
        if(x==0){
            digitalWrite(8,1);
            digitalWrite(9,1);
            digitalWrite(10,1);
            digitalWrite(11,1);
            digitalWrite(12,1);
            digitalWrite(13,1);

        if(digitalRead(2)==0)
        {
            x++;
        }
    
        }
        if(x==1){
         do {
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
if (digitalRead(2)==0){
    x++;
                     }

         }while(x==1);
        
            
        }
    } //จบ

    
/* if(digitalRead(2)==0){
    x++;
while (x==1){
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,1);
digitalWrite(11,1);
digitalWrite(12,1);
digitalWrite(13,1);
if(digitalRead(2)==0){
    x++;
break;
}
else if(digitalRead(2)==1){
    continue;
}
} //จบ While เเรก

while (x==2){
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
if(digitalRead(2)==0){
    x++;
break;
}
else if(digitalRead(2)==1){
    continue;
}
 } //จบ While สอง
   } //if บน*/
}// จบ