/********************************************************************
    [ delay Function for No Temporarily stop the program ]
    unsigned long preMillis = 0;
    void loop() {
    unsigned long curMillis = millis();
    if ( curMillis - preMillis >= 1000 ) { => Action(); delay(1000);
            preMillis = curMillis;
            Action();                   }
*********************************************************************/
#define ledPin      13

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    digitalWrite(ledPin, HIGH);
    delay(500);

    digitalWrite(ledPin, LOW);
    delay(500);
}
