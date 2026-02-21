#include <stdio.h>

/******* BASIC ENUM USAGE ******/

/*
- Enums define a set of named constants
- Values are assigned automatically starting from 0
- Constants are conventionally uppercase
- Enums are declared outside main()
*/

enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {

    /******* ENUM VARIABLE ******/

    enum Day today = THURSDAY;  // THURSDAY is the fourth item (0-based index)
    printf("Today (basic enum) = %d\n", today); // Prints 3

    /******* ENUM WITH CUSTOM VALUES ******/

    enum DayCustom { MONDAY_C = 1, TUESDAY_C = 2, WEDNESDAY_C = 3, THURSDAY_C = 4, FRIDAY_C = 5,
                      SATURDAY_C = 6, SUNDAY_C = 7 };

    enum DayCustom todayCustom = THURSDAY_C;
    printf("Today (custom values) = %d\n", todayCustom); // Prints 4

    /******* ENUM WITH TYPEDEF ******/

    typedef enum { MONDAY_T, TUESDAY_T, WEDNESDAY_T, THURSDAY_T, FRIDAY_T, SATURDAY_T, SUNDAY_T } DayType;

    DayType todayTypedef = THURSDAY_T; // No need to write 'enum' each time
    printf("Today (typedef enum) = %d\n", todayTypedef); // Prints 3

    /******* ENUM WITH IF STATEMENT ******/

    if (todayTypedef == SATURDAY_T || todayTypedef == SUNDAY_T) {
        printf("It's the weekend\n");
    } else {
        printf("It's a weekday\n");
    }

    return 0;
}

/******* ENUMS WITH SWITCH STATEMENTS ******/

/*
- Switch statements are useful for handling multiple enum values
- Example: connection status
*/

typedef enum { SUCCESS, PENDING, FAILURE } Statuses;

// Function prototype
void connectStatus(Statuses currStatus);

int main2() {

    Statuses currStatus = SUCCESS; // Can be SUCCESS, PENDING, or FAILURE
    connectStatus(currStatus);

    return 0;
}

// Function definition
void connectStatus(Statuses currStatus) {
    switch (currStatus) {
        case SUCCESS:
            printf("Connection was successful\n");
            break;
        case PENDING:
            printf("Connection pending...\n");
            break;
        case FAILURE:
            printf("Could not connect\n");
            break;
    }
}