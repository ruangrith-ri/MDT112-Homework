long lasttime = 0;
String state = "ON";

void setup(){
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
}
int pin = 3;
void loop(){
    long current = millis();
    for(pin = 2 ; pin <= 13 ; pin++){

    if(state == "ON"){
    digitalWrite(pin, 1);
        if(current - lasttime >= 500){
        state = "OFF";
        lasttime = current;
        }
    }

    if(state == "OFF"){
    digitalWrite(pin, 0);
        if(current - lasttime >= 500){
        state = "ON";
        lasttime = current;
        }
    }
    }
}