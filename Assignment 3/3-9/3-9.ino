void setup() {
    Serial.begin(9600);
    int SDID = 6+2+1+2+0+5+0+1+0+0+4;
    int c =0;
    while (c<=1000) {
     c++;
     if (c % SDID == 0) {
      Serial.println(c);
     }
   }
}
void loop(){}