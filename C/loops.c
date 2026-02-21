#include <stdio.h>

/******* LOOPS ******/

/*
Loops are used to repeat a block of code multiple times.
Common types of loops in C:
- for loop
- while loop
- do-while loop
*/

int main() {

    /******* FOR LOOP ******/

    /*
    Syntax:
    for(initialization; condition; increment/decrement) {
        code;
    }
    */

    int i;
    for (i = 0; i < 5; i++) {
        printf("For loop iteration %d\n", i);
    }

    /******* WHILE LOOP ******/

    /*
    Syntax:
    while(condition) {
        code;
    }
    */

    int count = 0;
    while (count < 5) {
        printf("While loop iteration %d\n", count);
        count++;
    }

    /******* DO-WHILE LOOP ******/

    /*
    Syntax:
    do {
        code;
    } while(condition);
    */

    int n = 0;
    do {
        printf("Do-while loop iteration %d\n", n);
        n++;
    } while (n < 5);

    /******* NESTED LOOPS ******/

    /*
    Loops inside loops
    Often used for multi-dimensional arrays
    */

    int row, col;
    for (row = 1; row <= 3; row++) {
        for (col = 1; col <= 3; col++) {
            printf("[%d,%d] ", row, col);
        }
        printf("\n");
    }

    return 0;
}