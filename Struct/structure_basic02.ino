/****************************************
    struct Name {
        dataType1 name1;
        dataType2 name2;
             :
    } p0, p1, p2 ....;
        var1.name1 ~ var1.name2 defines
        var2.name1 ~ var2.name2 defines
 ****************************************/
#include <Printf.h>

struct Person {
    char name[20];
    char blood;
    int  age;
    float eyesight;
} p0, p1, p2;

void setup() {
    Serial.begin(9600);
    printfBegin();          // must use for <Printf.h>
}

void loop() {

    // struct Person p0;        // can be omitted
    strcpy(p0.name, "DCBack");  // string must be get by strcpy
    p0.blood = 'O';
    p0.age = 55;
    p0.eyesight = 1.5;

    // struct Person p1;        // can be omitted
    strcpy(p1.name, "ACBack");  // string must be get by strcpy
    p1.blood = 'A';
    p1.age = 60;
    p1.eyesight = 2.0;

    printf("Name     : %s\nBlood    : %c\nAge      : %d\n", p0.name, p0.blood, p0.age);
    Serial.print("Eyesight : "); Serial.println(p0.eyesight);

    printf("Name     : %s\nBlood    : %c\nAge      : %d\n", p1.name, p1.blood, p1.age);
    Serial.print("Eyesight : "); Serial.println(p1.eyesight);

    Serial.end();     // serial ending & can use TX, RX pin, STM32 Error
}
