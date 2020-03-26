void setup(){
    Serial.begin(9600);
    int i = 1;
    int id = 5+9+0+8+0+5+0+1+6+1+7; //42
    for(i=1;i<=1000;i++){
        if(i % id ==0){
            Serial.println(i);
        }
    }
}

void loop(){
    
}