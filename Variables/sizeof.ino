/**********************************************
    bool    : 1 byte -> true, false == boolean
    boolean : 1 byte -> true, false == bool
    char    : 1 byte(-128 ~ 127)
    byte    : 1 byte(-128 ~ 127)
    short   : 2 byte(-32768~32767)
    int     : 2 byte(-32768~32767)
    long    : 4 byte
    long long : 8 byte
    float  :  4 byte
    double :  4 byte
***********************************************/
void setup() {
    Serial.begin(9600);

    Serial.print("bool : "); Serial.println(sizeof(bool));
    Serial.print("boolean : "); Serial.println(sizeof(boolean));
    Serial.print("char : "); Serial.println(sizeof(char));
    Serial.print("byte : "); Serial.println(sizeof(byte));
    Serial.print("short : "); Serial.println(sizeof(short));
    Serial.print("int : "); Serial.println(sizeof(int));
    Serial.print("long : "); Serial.println(sizeof(long));
    Serial.print("long long : "); Serial.println(sizeof(long long));
    Serial.print("float : "); Serial.println(sizeof(float));
    Serial.print("double : "); Serial.println(sizeof(double));
}

void loop() {
}
