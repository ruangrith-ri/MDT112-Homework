void setup() {
Serial.begin(9600);
}
void loop()
 {
int x =0;

while (digitalRead(2) ==
0) {

x++;
Serial.println(
x);

} }