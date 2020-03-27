void setup(){
    pinMode(2, INPUT_PULLUP);
 
    Serial.begin(9600);
}

void loop(){
    if (digitalRead(2) == 0) {
    Serial.println(digitalRead(2));
    digitalWrite(3,1);
    digitalWrite(4,1);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
    digitalWrite(10,1);
    digitalWrite(11,1);
    digitalWrite(12,1);
    digitalWrite(13, 1);
    }else {
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalWrite(10,0);
    digitalWrite(11,0);
    digitalWrite(12,0);
    digitalWrite(13,0);

  }
    
} 