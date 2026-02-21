#include <iostream>
using namespace std;

/******* FUNCTIONS ******/

// Function prototypes: tell the compiler these functions exist
void hello(string name, int age);
bool ageCheck(int age);
void happyBirthday(string name, int age);
int square(int number);

int main() {
    /******* BASIC FUNCTION CALL ******/
    happyBirthday("Ben", 19); // calls a void function that prints birthday message

    /******* FUNCTION WITH RETURN VALUE ******/
    int x = square(2); // returns a value which is stored in 'x'
    cout << "Square of 2 is " << x << endl;

    /******* FUNCTION PROTOTYPE EXAMPLE ******/
    hello("Spongebob", 30); // demonstrates function declared with prototype

    if(ageCheck(30)) // function returns a boolean
        cout << "You are old enough to work at Krusty Krab" << endl;
    else
        cout << "You must be 16+ to work at Krusty Krab" << endl;

    return 0;
}

// Function definitions
void happyBirthday(string name, int age){
    // Void function: does not return anything
    cout << "Happy birthday " << name << "!" << endl;
    cout << "You are " << age << " years old!" << endl;
}

int square(int number){
    // Returns a value: the caller can use it
    return number * number;
}

void hello(string name, int age){
    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old" << endl;
}

bool ageCheck(int age){
    // Returns true if age >= 16
    return age >= 16;
}