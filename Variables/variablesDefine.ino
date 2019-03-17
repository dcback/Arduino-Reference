/**************************************************
    Variables Define :
    type name1 = val, name2 = val2, name3 = val3,..
    Global var init => 0( int num; -> num == 0 )
***************************************************/
char buf[100];
char buf1[100];
int num;        // 0 auto init
float fnumb;    // 0.00 auto init

void setup() {
    Serial.begin(9600);

    int num1 = 1, num2 = 2, num3 = 3;
    float fnum[] = { 3.1, 3.2, 3.3 };
    char c1 = 'A', c2 = 'B', c3 = 'C';
    char s1[] = "Hello", s2[] = "World";    // cannot use String var

    sprintf(buf, "%d%d%d %c%c%c %s, %s", num1, num2, num3, c1, c2, c3, s1, s2);
    Serial.println(buf);
    for ( int i = 0; i < 3; i++ ) {
        Serial.print(fnum[i]);
        Serial.print("\t");
    }
    Serial.println("");

    sprintf(buf1, "%d %f", num, fnumb);     // Cannot use %f(dtostrf: str change)
    Serial.println(buf1);
    Serial.print(fnumb);
}

void loop() {
}
