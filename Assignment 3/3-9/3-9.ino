void setup(){
    Serial.begin(9600);
}
int i = 1;
int id = 6+2+1+2+0+5+0+1+0+6+3;
void loop(){
    while(i % id == 0 && i<=1000 && i>=0){
        Serial.println(i);
        break;
    }
    i++;
}