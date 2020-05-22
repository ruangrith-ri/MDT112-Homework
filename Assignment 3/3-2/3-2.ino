long lastTimeStateChange = 0;
String state = "ON";

void setup(){
    for (int pin = 2; pin <= 13; pin++) {
    pinMode(pin,OUTPUT);
    }
}

void loop(){
    long currentTime = millis();

    if(state == "ON" && currentTime - lastTimeStateChange >= 500){
        state = "OFF";
        lastTimeStateChange = currentTime;
    }else if (state == "OFF" && currentTime - lastTimeStateChange >= 500 ){
        state = "ON";
        lastTimeStateChange = currentTime;
    }

    for(int i = 2 ; i <= 13 ; i++){
        if (state == "ON" && i <= 7) {
        digitalWrite(i,1);
        }else if (state == "OFF" && i <= 7) {
        digitalWrite(i,0);
        }else if (state == "OFF" && i > 7) {
        digitalWrite(i,1);
        }else if (state == "ON" && i > 7) {
        digitalWrite(i,0);
        }
   }
}