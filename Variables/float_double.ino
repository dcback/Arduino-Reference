/***********************************************
    float   : 4 byte
    double  : 4 byte
    Serial.print(var, val); val -> decimal point
************************************************/
void setup() {
    Serial.begin(9600);

    float fnum1 = 3.14;
    double fnum2 = 3.14;

    Serial.print("float   : "); Serial.println(fnum1);
    Serial.print("float   : "); Serial.println(fnum1, 6);
    Serial.print("double  : "); Serial.println(fnum2);
    Serial.print("double  : "); Serial.println(fnum2, 6);
}

void loop() {
}
