/***************************************************
    Serial.print(val, format): val(dec, 'c', "str")
    sprintf(buf, "%d%c%s", vals):  buf <- vals
    dtostrf(fnum, 2, 2, str): fnum -> str
***************************************************/
char buf1[100];
char buf2[100];

void setup() {
    Serial.begin(9600);
    Serial.println("Serial.print, sprintf, dtostrf");    
}

void loop() {
    // Serial.print
    int dnum = 15;          // 1111 -> 17 -> 15 -> F
    float fnum = 3.14;
    char c = 'a';
    char str[10] = "Hello!";
    char fnum_str[10];    

    Serial.print(dnum, BIN); Serial.print("\t");
    Serial.print(dnum, OCT); Serial.print("\t");
    Serial.print(dnum, DEC); Serial.print("\t");
    Serial.print(dnum, HEX); Serial.println("\t");

    Serial.print(fnum, 0); Serial.print("\t");
    Serial.print(fnum, 2); Serial.print("\t");
    Serial.print(fnum, 4); Serial.println("\t");

    // sprintf -> buf -> Serial.print, sprinf not suppoted float(use dtostrf)
    dtostrf(fnum, 2, 2, fnum_str);      // dtostrf(float -> string)
    sprintf(buf1, "[%d] [0x%X] [%c] [%s]", dnum, dnum, c, fnum_str);
    Serial.println(buf1);

    sprintf_P(buf2, PSTR("[%d] [0x%X] [%c] [%s]"), dnum, dnum, c, fnum_str);
    Serial.println(buf2);

    delay(1000);
}
