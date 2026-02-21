#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/******* C STRUCTS ******/

/*
- Structs allow you to group different types of variables together into one "record"
- Use typedef for cleaner syntax
*/

typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

void printStudent(Student studentName); // Function prototype

int main() {

    /******* CREATING STRUCT INSTANCES ******/

    // Initializing a struct with values
    Student student1 = {"Spongebob", 30, 2.5, true};

    // Accessing attributes
    printf("Student1 Name: %s\n", student1.name);
    printf("Student1 Age: %d\n", student1.age);
    printf("Student1 GPA: %.2f\n", student1.gpa);
    printf("Student1 Fulltime: %s\n", (student1.isFullTime) ? "Yes" : "No");

    /******* CREATING EMPTY STRUCT ******/

    // Assigning space in memory but no initial attributes
    Student student2 = {0};

    // Accessing uninitialized attributes
    printf("\nStudent2 Name: '%s'\n", student2.name);      // prints empty string
    printf("Student2 Age: %d\n", student2.age);           // prints 0
    printf("Student2 GPA: %.2f\n", student2.gpa);         // prints 0.00
    printf("Student2 Fulltime: %s\n", (student2.isFullTime) ? "Yes" : "No"); // prints "No"

    /******* MODIFYING ATTRIBUTES AFTER INITIALIZATION ******/

    // Strings require strcpy
    strcpy(student2.name, "Patrick");

    // Other attributes can be assigned directly
    student2.age = 27;
    student2.gpa = 0.5;
    student2.isFullTime = false;

    /******* PRINTING STRUCTS USING FUNCTION ******/

    printf("\n--- Print Students Using Function ---\n");
    printStudent(student1);
    printStudent(student2);

    return 0;
}

/******* FUNCTION TO PRINT A STUDENT STRUCT ******/

void printStudent(Student studentName) {
    printf("Name: %s\n", studentName.name);
    printf("Age: %d\n", studentName.age);
    printf("GPA: %.2f\n", studentName.gpa);
    printf("Fulltime: %s\n", (studentName.isFullTime) ? "Yes" : "No");
    printf("\n");
}