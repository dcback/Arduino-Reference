/**************************************************************
    Serial.print(val)
    Serial.print(val, format)
        format : BIN, OCT, DEC, HEX, 0, 2, 4...
    Serial.print(F("string")) -> string only
    sprintf_P(buf, PSTR("[%d][0x%X][%c][%s]",2,0xF,'c',"str");
    Serial.println(buf);
***************************************************************/
char buf[100];

void setup() {
    Serial.begin(9600);
}

void loop() {
    int dnum = 15;          // 1111 -> 17 -> 15 -> F
    float fnum = 1.23456;
    Serial.print(dnum, BIN); Serial.print("\t");
    Serial.print(dnum, OCT); Serial.print("\t");
    Serial.print(dnum, DEC); Serial.print("\t");
    Serial.print(dnum, HEX); Serial.print("\t"); Serial.println(F("print"));

    Serial.print(fnum, 0); Serial.print("\t");
    Serial.print(fnum, 2); Serial.print("\t");
    Serial.print(fnum, 4); Serial.println("\t");

    sprintf_P(buf, PSTR("[%d] [%03d] [0x%X] [%c] [%s]"), dnum, dnum, dnum, 'c', "print");
    Serial.println(buf);

    delay(1000);
}
