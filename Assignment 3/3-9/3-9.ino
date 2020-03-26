void setup(){
    Serial.begin(9600);

}

int x=1;
void loop(){
    int StudentNumber = 6+2+1+2+0+5+0+1+0+3+0;
    while(x % StudentNumber == 0 && x<=1000 && x<=0){
        Serial.println(x);
        break;
    }
    x++;
}