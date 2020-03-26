void setup() {
    Serial.begin(9600);

    int Study = 6+2+1+2+0+5+0+1+0+0+4;

    for (int p = 0; p<=1000; p++) {
        if(p%Study==0){
            Serial.println(p);
            p++;
        }
    }
}
void loop(){}