void setup(){
    Serial.begin(9600);

    int NO = 6+2+1+2+0+5+0+1+0+4+8;

    for (int i = 0; i<=1000; i++) {
        if(i%NO==0){
            Serial.println(i);
            i++;
        }
    }
}
void loop(){}