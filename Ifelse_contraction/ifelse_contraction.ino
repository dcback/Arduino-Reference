/******************************************************************
    if(condition) {Func()|Assign|Value} else {Func()|Assign|Value}
    (condition)? Func()|Assign|Value : Func()|Assign|Value;
*******************************************************************/
#include <Printf.h>

int inum = 0;
bool checkinum();

void setup() {
    Serial.begin(9600);
    printfBegin();    // must use for <Printf.h>

    if ( inum == 1 ) printf("inum = %d\n", 1);
    else printf("inum = %d\n", 0);

    ( inum == 1 ) ? printf("inum = %d\n", 1) :  printf("inum = %d\n", 0);

    ( inum > 0 ) ? inum = 1 : inum = 0;         printf("inum = %d\n", inum);

    inum = ( inum > 0 ) ? 1 : 0;                printf("inum = %d\n", inum);

    printf("inum = %d , inum = %d\n", inum, (inum > 0) ? 1 : 0);

    printf("inum = %d", checkinum(inum));
}

void loop() {
}

boolean checkinum(int inum) {       // bool == boolean
    return ( inum == 0 ) ? 0 : 1;
}
