const int ledPin3 = 3;
const int ledPin5 = 5;
const int ledPin6 = 6;
const int ledPin9 = 9;
const int ledPin10 = 10;
const int ledPin11 = 11;
void setup(){
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin5, OUTPUT);
    pinMode(ledPin6, OUTPUT);
    pinMode(ledPin9, OUTPUT);
    pinMode(ledPin10, OUTPUT);
    pinMode(ledPin11, OUTPUT);    
    Serial.begin(9600);
}
void loop(){
    if (digitalRead(2) == 0)
    for (int i = 0; i<255; i++) {
    analogWrite(ledPin3, 255);
    analogWrite(ledPin5, 255);
    analogWrite(ledPin6, 255);
    analogWrite(ledPin9, 255);
    analogWrite(ledPin10, 255);
    analogWrite(ledPin11, 255);
    delay(10);
    }
    for (int i = 255; i>0; i--) {
    analogWrite(ledPin3, i);
    analogWrite(ledPin5, i);
    analogWrite(ledPin6, i);
    analogWrite(ledPin9, i);
    analogWrite(ledPin10, i);
    analogWrite(ledPin11, i);
    delay(10);
    }
    delay(500);
}