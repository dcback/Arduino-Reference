/***************************************************
    const type var = val -> must init val(literal)
    don't change constant value
****************************************************/
void setup() {
    Serial.begin(9600);

    const char c1 = 'F';
    const char c2[] = "DCBACK";
    const int piNum = 314;
    const float pifNum = 3.14F; // == 3.14, F(UL..) -> size

    Serial.print(c1); Serial.print("\n");
    Serial.print(c2); Serial.print("\n");
    Serial.print(piNum); Serial.print("\n");
    Serial.println(pifNum);
}

void loop() {
}
