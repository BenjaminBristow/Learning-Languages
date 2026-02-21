#include <iostream>
#include <string>
using namespace std;

/******* STRUCTS ******/

// Structs allow grouping multiple variables into one logical object
typedef struct {
    string name;    // stores the student's name
    int age;        // stores age
    float gpa;      // grade point average
    bool isFullTime;// enrollment status
} Student;

// Function to print all attributes of a Student
void printStudent(Student s){
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "GPA: " << s.gpa << endl;
    cout << "Fulltime: " << (s.isFullTime ? "Yes" : "No") << endl;
}

int main() {
    /******* INITIALIZING STRUCTS ******/
    Student student1 = {"Spongebob",30,2.5,true};
    Student student2 = {0}; // zero-initialize everything

    // Assigning values after zero initialization
    student2.name = "Patrick";
    student2.age = 27;
    student2.gpa = 0.5;
    student2.isFullTime = false;

    /******* PRINTING STRUCTS ******/
    printStudent(student1);
    printStudent(student2);

    /******* WHY STRUCTS ******/
    // Structs are useful for logically grouping data
    // Helps organize code and pass complex data easily
    // In C++ structs and classes are almost the same; difference is default member access

    return 0;
}