int number =25,x=1;
void setup(){
    Serial.begin(9600);
    while(x<=1000){
        x++;
        if(x%number==0){            
            Serial.print(x);            
        }
    }
}
void loop(){}