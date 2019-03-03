/***************************************************
    Serial.print(val, format): val(dec, 'c', "str")
    sprintf(buf, "%d%c%s", vals):  buf <- vals
    dtostrf(fnum, 2, 2, str): fnum -> str
***************************************************/
// https://stackoverflow.com/questions/27651012/arduino-sprintf-float-not-formatting

char buf[100];

void setup() {
    Serial.begin(9600);
}

void loop() {
    float fnum = 3.14;
    char fnum_str[10];

    // 4 is mininum width, 2 is precision; float value is copied onto str_temp
    // char *dtostrf(double val, signed char width, unsigned char prec, char *s)
    dtostrf(fnum, 2, 2, fnum_str);
    Serial.println(fnum_str);

    sprintf(buf, "%s", fnum_str);   // buf <- fnum_str
    Serial.println(buf);

    delay(1000);
}
