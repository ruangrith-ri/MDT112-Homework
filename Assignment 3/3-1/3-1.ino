long lastTimeStateChange = 0;
String state = "ON" ;
void setup(){
    for (int i = 2; i <=13; i++) {
        pinMode(i,OUTPUT);
    
    }

}

void loop(){
    long currentTime = millis();

    if (state == "ON" && currentTime - lastTimeStateChange >= 500) {
       state = "OFF";
       lastTimeStateChange = currentTime ;
    }
    else if (state == "OFF" && currentTime - lastTimeStateChange >= 500 ){
       state = "ON" ;
       lastTimeStateChange = currentTime;
    }
    
    for (int i = 2; i <= 13 ;i++) {
       if(state == "ON"){
        digitalWrite(i,1);

       }else if (state == "OFF"){
        digitalWrite(i,0);
       }   
    }
}