#include <stdio.h>
#include <stdbool.h>

/******* FUNCTION STRUCTURE ******/
 
/*
returnType functionName(type parameter1, type parameter2) {
    code;
}

- Functions reduce repeated code
- Usually defined outside main()
- void is used if nothing is returned
- If a value is returned, the return type must be specified
*/

/******* FUNCTION PROTOTYPES ******/

/*
Function prototypes provide the compiler with information about:
- Function name
- Return type
- Parameters

Allows functions to be used before they are defined.
Considered good practice.
*/

void hello(char name[], int age);
bool ageCheck(int age);
void happyBirthday(char name[], int age);
int square(int number);

int main() {

    /******* BASIC FUNCTION CALL ******/

    happyBirthday("Ben", 19);

    /******* FUNCTION WITH RETURN VALUE ******/

    int x = square(2);
    printf("Square of 2 is %d\n", x);

    /******* FUNCTION PROTOTYPE EXAMPLE ******/

    hello("Spongebob", 30);

    if (ageCheck(30)) {
        printf("You are old enough to work at Krusty Krab\n");
    } else {
        printf("You must be 16+ to work at Krusty Krab\n");
    }

    return 0;
}

/******* FUNCTION DEFINITIONS ******/

// Example 1: Void function (returns nothing)
void happyBirthday(char name[], int age) {
    printf("Happy birthday %s!\n", name);
    printf("You are %d years old!\n", age);
}

// Example 2: Function returning an int
int square(int number) {
    return number * number;
}

// Example 3: Function using a prototype and returning bool
void hello(char name[], int age) {
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age) {
    return age >= 16;  // Evaluates to true or false
}