#include <iostream>
using namespace std;

/******* C++ BASICS ******/

int main() {

    /******* VARIABLES AND DATA TYPES ******/
    // 'int' stores integer numbers
    int age = 25;  

    // 'double' stores decimal numbers with double precision
    double gpa = 3.8;  

    // 'bool' stores true or false values
    bool isStudent = true;  

    // 'char' stores a single character
    char grade = 'A';  

    // 'string' is a sequence of characters (requires #include <string>)
    string name = "Benjamin";  

    /******* PRINTING VARIABLES ******/
    // 'cout' sends output to the console
    // '<<' is used to chain text and variables
    cout << "Name: " << name << endl;  // endl inserts a newline
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Grade: " << grade << endl;

    // Ternary operator used to print 'Yes' if true, 'No' if false
    cout << "Student: " << (isStudent ? "Yes" : "No") << endl;

    return 0; // main returns 0 to indicate successful execution
}