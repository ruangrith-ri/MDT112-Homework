void setup(){
    Serial.begin(9600);
    
    int x ;
    int StudentNumber = 6+2+1+2+0+5+0+1+0+7+9 ;

    for (x=1 ; x<=1000 ; x++){

      if (x % StudentNumber ==0){
        Serial.println( x );
      }
    }
}

void loop(){

}