void setup(){
Serial.begin(9600);
     pinMode(2,INPUT_PULLUP);
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
    
int count = 0;
void loop(){
       Serial.begin(9600);
    int i = 1;
    int id = 6+2+1+2+0+5+0+1+0+0+5; //22
    for(i=1;i<=1000;i++){
        if(i % id ==0){
            Serial.println(i);
        }
    }
}


      
