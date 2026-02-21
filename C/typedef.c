#include <stdio.h>

/******* TYPEDEF IN C ******/

/*
- The typedef keyword allows you to create a "nickname" for an existing data type
- Simplifies complex data types and improves readability
- Can be used for:
    • Basic types
    • Arrays
    • Structs
    • Enums
*/

int main() {

    /******* RENAMING BASIC TYPES ******/

    typedef int Number;   // Create a nickname "Number" for int
    Number x = 3;
    printf("Value of x: %d\n", x);

    typedef char string[50];  // Create a nickname "string" for a char array of length 50
    string name = "Benjamin Bristow";  // No [50] needed when declaring
    printf("Name: %s\n", name);

    /******* USING TYPEDEF WITH ENUMS ******/

    /*
    - Enums are used to define named constants
    - Using typedef allows us to create a new type name
    */

    typedef enum {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY} Day;

    Day today = THURSDAY;  // Declare a variable of type Day and assign a value
    printf("Today is enum value: %d\n", today); // Prints 3, because THURSDAY is the fourth item (0-based index)

    return 0;
}