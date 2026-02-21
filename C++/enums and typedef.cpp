#include <iostream>
using namespace std;

/******* ENUMS AND TYPEDEF ******/

// Enums allow you to create a new type with named constants
// Each item automatically gets an integer value starting at 0
typedef enum {
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
} Day;

int main() {
    Day today = THURSDAY; // 'today' is of type Day

    // Compare enum values
    if(today == SATURDAY || today == SUNDAY)
        cout << "It’s the weekend" << endl;
    else
        cout << "It’s a weekday" << endl;

    // Print the underlying integer value of the enum
    cout << "Underlying value of today: " << today << endl; // Thursday = 3

    /******* CUSTOM VALUES ******/
    // You can assign custom integers if needed
    typedef enum {A=1,B=2,C=3} Letters;
    Letters myLetter = B;
    cout << "Letter B value: " << myLetter << endl;

    /******* WHY USE ENUMS ******/
    // Enums make code more readable than using raw integers
    // Avoids magic numbers and errors in logic

    return 0;
}