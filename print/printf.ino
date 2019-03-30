/*****************************************************
     printf() = sprintf(buf, ..) + Serial.print()
******************************************************/
char buf[150];
char bytes[100];

int inum = 12345;
char c = 'a';
char str[] = "abc";

void setup() {
    Serial.begin(9600);

    sprintf(buf, "%d ,   %c   , %s", inum, c, str);
    sprintf(bytes, "%dbyte , %dbyte , %dbyte", sizeof(inum), sizeof(c), sizeof(str));

    Serial.println(buf);
    Serial.print(bytes);
}

void loop() {
}
