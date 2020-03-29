
void setup(){
    pinMode(2,INPUT_PULLUP);
    pinMode(3,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
}

void loop(){
    int light=0,lightup=0,lightdown = 0,count = 0;

    for (light=0;light<=255;light++){
        analogWrite(3,light);
        analogWrite(5,light);
        analogWrite(6,light);
        analogWrite(9,light);
        analogWrite(10,light);
        analogWrite(11,light);
        delay(10);
        if (digitalRead(2)==0){
            
            count++;
        }
        else{
            if (count>1){
                count = 1;
                Serial.println(count);
                break;
            }
        }

        if(light == 255){
            for (light=255;light>=0;light--){
                analogWrite(3,light);
                analogWrite(5,light);
                analogWrite(6,light);
                analogWrite(9,light);
                analogWrite(10,light);
                analogWrite(11,light);
                delay(10);
                if (digitalRead(2)==0){
                    count++;
                }
            else{
                if (count>1){
                    count = 2;
                    Serial.println(count);
                    break;
                }
                }
                
            }
        }
    }
    while (count == 1){
        analogWrite(3,light);
        analogWrite(5,light);
        analogWrite(6,light);
        analogWrite(9,light);
        analogWrite(10,light);
        analogWrite(11,light);
        
        if (digitalRead(2)==0){
            delay(1000);
            break;
        }
    }
    if (count == 1){
        for(lightup = light;lightup<=255;lightup++){
            analogWrite(3,lightup);
            analogWrite(5,lightup);
            analogWrite(6,lightup);
            analogWrite(9,lightup);
            analogWrite(10,lightup);
            analogWrite(11,lightup);
            delay(10);
        }
        for (light=255;light>=0;light--){
            analogWrite(3,light);
            analogWrite(5,light);
            analogWrite(6,light);
            analogWrite(9,light);
            analogWrite(10,light);
            analogWrite(11,light);
            delay(10);
            if (digitalRead(2)==0){
                count++;
            }
        else{
            if (count>1){
                count = 2;
                Serial.println(count);
                break;
            }
            }
                
        }
        
    }
    while (count == 2){
        analogWrite(3,light);
        analogWrite(5,light);
        analogWrite(6,light);
        analogWrite(9,light);
        analogWrite(10,light);
        analogWrite(11,light);
        delay(10);
        if (digitalRead(2)==0){
            delay(1000);
            break;
        }
    }
    if (count == 2){
        for(lightdown = light;lightdown >=0;lightdown--){
            analogWrite(3,lightdown);
            analogWrite(5,lightdown);
            analogWrite(6,lightdown);
            analogWrite(9,lightdown);
            analogWrite(10,lightdown);
            analogWrite(11,lightdown);
            delay(10);
        }
    }
}
