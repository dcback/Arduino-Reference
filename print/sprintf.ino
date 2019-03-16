/*********************************************
    sprintf(buf, "%c %d %s", 'A', 127, "DCBACK")
    for C prinf functions writing to buf[]
**********************************************/
char buf[100];

void setup() {
    Serial.begin(9600);

    sprintf(buf, "%c , %d , %s", 'A', 127, "DCBACK");   // writing to buf
    Serial.println(buf);
}

void loop() {
}
