/**************************************
             sum1  sum2  sum3   sum4
    param  :  X     O      X     O
    return :  X     x      O     O
    // return(result giving & ending)
 **************************************/
#include <Printf.h>

int a = 0, b = 1;   //  No -> int c = 1, int d = 2;

// Can be ommitted
void sum1();
void sum2();
int sum3();
int sum4();

void setup() {
    Serial.begin(9600);
    printfBegin();    // must use for <Printf.h>
}

void loop() {

    sum1();
    sum2(a, b);
    printf("sum3 = %d\n", sum3() + 2);
    printf("sum4 = %d\n", sum4(a, b) + 3);

    Serial.end();     // serial ending & can use TX, RX pin
}

void sum1() {
    printf("sum1 = %d\n", a + b);
}

void sum2(int a, int b) {
    printf("sum2 = %d\n", (a + b) + 1);
}

int sum3() {
    return a + b;
}

int sum4(int a, int b) {
    return a + b;
}
