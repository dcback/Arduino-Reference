/***************************************************
    char = 'A' : A -> 65(ASCII) -> single character
    '0' -> 48, 0 -> NULL(Blank, Non char)
****************************************************/
void setup() {
    Serial.begin(9600);

    char c1 = 'A';
    char c2 = 65;
    char c3 = '0';
    char c4 = 0;        // == NULL
    char c5 = NULL;     // == 0

    Serial.print(c1); Serial.print("\t"); Serial.println(c1, DEC);
    Serial.print(c2); Serial.print("\t"); Serial.println(c2, DEC);
    Serial.print(c3); Serial.print("\t"); Serial.println(c3, DEC);
    Serial.print(c4); Serial.print("\t"); Serial.println(c5);
    Serial.println("----------");
}

void loop() {
}
