int number = 25,x;
void setup(){
    Serial.begin(9600);
    
    for(x=1;x<=1000;x++){
        if(x % number==0){
            Serial.println(x);
        }
    }
}
void loop(){}

