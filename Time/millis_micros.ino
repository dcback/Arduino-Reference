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

unsigned long preMicros = 0;
unsigned long preMillis = 0;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    unsigned long curMicros = micros();
    unsigned long curMillis = millis();

    if ( curMicros - preMicros >= 500000 ) {    // delay(500);
        preMicros = curMicros;
        digitalWrite(ledPin, HIGH);

        if ( curMillis - preMillis >= 1000 ) {  // delay(1000);
            preMillis = curMillis;
            digitalWrite(ledPin, LOW);
        }
    }
}
