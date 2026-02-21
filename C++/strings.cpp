#include <iostream>
#include <string> // required for std::string
using namespace std;

/******* STRINGS ******/

int main() {
    /******* DECLARING STRINGS ******/
    string name; // creates an empty string variable
    cout << "Enter your name: ";
    getline(cin, name); // reads a full line including spaces (cin >> name reads only until first space)

    cout << "Hello " << name << endl;

    /******* STRING FUNCTIONS ******/
    // length() returns number of characters in string
    cout << "Length of name: " << name.length() << endl;

    // substr(start, length) returns substring
    cout << "First 3 letters: " << name.substr(0, 3) << endl;

    // replace(start, length, newString) replaces part of string
    name.replace(0, 3, "Ben"); // replaces first 3 characters with "Ben"
    cout << "Replaced string: " << name << endl;

    /******* COMMON PITFALLS ******/
    // Strings in C++ are objects; they are not arrays of chars like in C.
    // Accessing out-of-bounds indices will cause undefined behavior.
    // Example: name[100] is invalid if name.length() < 101

    return 0;
}