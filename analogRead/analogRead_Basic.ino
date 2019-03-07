/*************************************************
    analogRead(pin), return(int:0~1023)
**************************************************/
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println(analogRead(A0));
    Serial.println(analogRead(A0), DEC);
    Serial.println(analogRead(A0), BIN);
    Serial.println(analogRead(A0), OCT);
    Serial.println(analogRead(A0), HEX);
    Serial.println("-------------");
    delay(1000);
}
