/******************************************
    omission words : int, signed
*******************************************/
char buf[100];      // must size define

void setup() {
    Serial.begin(9600);

    char num1 = 65;
    short num2 = 2;
    long num3 = 3;
    long long num4 = 4;

    sprintf(buf, "%c %d %ld %ld", num1, num2, num3, num4);
    Serial.println(buf);
}

void loop() {
}










