void setup() {

    Serial.begin(9600);
    pinMode(2, OUTPUT);
    pinMode(3, INPUT_PULLUP);
    pinMode(4, INPUT_PULLUP);
    pinMode(5, INPUT_PULLUP);
    pinMode(6, INPUT_PULLUP);
    pinMode(7, INPUT_PULLUP);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);

    Serial.println("Hello World");
}
int count = 0;
void loop() {

    if (digitalRead(2) == 0) {
        digitalWrite(8, 1);
        digitalWrite(9, 1);
        digitalWrite(10, 1);
        digitalWrite(11, 1);
        digitalWrite(12, 1);
        digitalWrite(13, 1);
       
    } else {
        
        digitalWrite(8, 0);
        digitalWrite(9, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
        digitalWrite(12, 0);
        digitalWrite(13, 0);
        delay(100);

        digitalWrite(8, 1);
        digitalWrite(9, 1);
        digitalWrite(10, 1);
        digitalWrite(11, 1);
        digitalWrite(12, 1);
        digitalWrite(13, 1);
        
        if (digitalRead(2) == 0) {
        digitalWrite(8, 0);
        digitalWrite(9, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
        digitalWrite(12, 0);
        digitalWrite(13, 0);
        }
        if (digitalRead(2) == 0) {
        count++;
        Serial.println(count);
        }
    }
}