#include <iostream>
using namespace std;

/******* FUNCTION TEMPLATES ******/

// Templates allow writing generic code that works with multiple types
template <typename T>
T add(T a, T b){
    return a + b; // works for int, double, float, etc.
}

int main(){
    cout << "Add integers: " << add(3,4) << endl;       // int
    cout << "Add doubles: " << add(3.2,4.1) << endl;   // double
    cout << "Add floats: " << add(1.5f, 2.5f) << endl; // float

    /******* WHY TEMPLATES ******/
    // Avoids duplicating code for different types
    // Works with classes, structs, and built-in types
    // Can be used for functions and classes

    return 0;
}