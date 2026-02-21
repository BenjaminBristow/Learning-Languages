#include <iostream>
using namespace std;

/******* OPERATORS AND EXPRESSIONS ******/

int main() {
    int a = 10, b = 3;

    /******* ARITHMETIC OPERATORS ******/
    cout << "a + b = " << a + b << endl;  // addition
    cout << "a - b = " << a - b << endl;  // subtraction
    cout << "a * b = " << a * b << endl;  // multiplication
    cout << "a / b = " << a / b << endl;  // integer division (truncates decimals)
    cout << "a % b = " << a % b << endl;  // modulus operator (remainder)

    /******* COMPARISON OPERATORS ******/
    // Comparison operators return a boolean (true/false)
    cout << "a == b? " << (a == b) << endl;  // equality
    cout << "a != b? " << (a != b) << endl;  // not equal
    cout << "a > b? " << (a > b) << endl;    // greater than
    cout << "a < b? " << (a < b) << endl;    // less than
    cout << "a >= b? " << (a >= b) << endl;  // greater or equal
    cout << "a <= b? " << (a <= b) << endl;  // less or equal

    /******* LOGICAL OPERATORS ******/
    bool x = true, y = false;
    cout << "x && y = " << (x && y) << endl;  // logical AND: true if both true
    cout << "x || y = " << (x || y) << endl;  // logical OR: true if at least one true
    cout << "!x = " << (!x) << endl;          // logical NOT: inverts the boolean

    return 0;
}