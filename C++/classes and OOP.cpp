#include <iostream>
#include <string>
using namespace std;

/******* CLASSES AND OOP ******/

// Classes allow encapsulation of data and functions together
class Student {
public:
    string name;
    int age;
    float gpa;

    // Constructor: automatically called when object is created
    Student(string n, int a, float g): name(n), age(a), gpa(g) {}

    // Member function: operates on this object
    void printInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student s("Spongebob",20,3.2); // object creation
    s.printInfo(); // call member function

    /******* OOP PRINCIPLES ******/
    // Encapsulation: data + methods in one object
    // Constructor initializes objects
    // Member functions operate on object state
    // Inheritance & polymorphism can extend functionality

    return 0;
}