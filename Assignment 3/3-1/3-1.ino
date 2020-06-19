long timechange =  0;
String state = "ON";
void setup(){
    Serial.begin(9600);
    for(int x = 2 ; x<= 13 ; x++){
        pinMode(x, OUTPUT);
    }
    
}
void loop()
{
    long simulation  = millis();        
    if (state == "ON")
    {
        for (int y = 2 ; y <= 13 ; y++)
        {digitalWrite(y, 1);
        }
            if (simulation - timechange >= 500)      
            {
            state = "OFF";      
            timechange = simulation;
            }
    }
    if (state == "OFF")
    {
        for (int y = 2 ; y <= 13 ; y++)
        {digitalWrite(y, 0);
        }
            if (simulation - timechange >= 500)       
            {
            state = "ON";       
            timechange = simulation;
            }
    }
}