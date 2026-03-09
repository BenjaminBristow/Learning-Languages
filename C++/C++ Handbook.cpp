/*
===========================================================================
ADVANCED C++ HANDBOOK 
This handbook covers C++ concepts from basic to advanced, with detailed explanations:
- Explains how each line works
- Explains why some things are allowed or not
- Explains benefits of using certain features
- Builds from simple to complex
===========================================================================*/

#include <iostream>   // Input/output streams (cout, cin)
#include <string>     // std::string type for text
#include <vector>     // STL vector (dynamic array)
#include <map>        // STL map (key-value storage)
#include <memory>     // Smart pointers: unique_ptr, shared_ptr
#include <algorithm>  // STL algorithms: sort, find
using namespace std;  // Avoids std:: prefix for simplicity

/* =========================================================================
1. VARIABLES & DATA TYPES
===========================================================================*/
int main() {
    // Basic types
    int age = 25;             // Integer
    unsigned int uage = 30;   // Cannot be negative, useful for counts
    float pi = 3.14159f;      // Single precision decimal
    double e = 2.718281828;   // Double precision decimal for accuracy
    char initial = 'A';       // Single character
    string name = "Alice";    // String (object, not array like C)
    bool is_active = true;    // Boolean type

    // Printing variables
    cout << "Age: " << age << ", Unsigned Age: " << uage << endl;
    cout << "Pi: " << pi << ", e: " << e << endl;
    cout << "Initial: " << initial << ", Name: " << name 
         << ", Active: " << is_active << endl;

    /* Explanation:
    - Variables are strongly typed in C++, types must match usage.
    - std::string is safer than C-style char arrays:
        * Automatically manages memory
        * Can be concatenated, resized, and compared easily
    - Booleans are true/false, useful in conditions and loops
    */

    /* =========================================================================
    2. OPERATORS
    =========================================================================*/
    int a = 10, b = 3;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << " (integer division truncates)" << endl;
    cout << "Modulo: " << a % b << endl;

    // Why division truncates: integer division drops the decimal part
    // Use floats/doubles for accurate division: double result = (double)a / b;

    /* =========================================================================
    3. CONDITIONALS
    =========================================================================*/
    if(a > b) {
        cout << a << " is greater than " << b << endl;
    } else if(a == b) {
        cout << a << " equals " << b << endl;
    } else {
        cout << a << " is less than " << b << endl;
    }

    /* =========================================================================
    4. LOOPS
    =========================================================================*/
    // For loop: known number of iterations
    for(int i=0; i<5; i++) {
        cout << "For loop iteration: " << i << endl;
    }

    // While loop: condition-based
    int count = 0;
    while(count < 3) {
        cout << "While loop count: " << count << endl;
        count++;
    }

    // Do-while loop: executes at least once
    int dw = 0;
    do {
        cout << "Do-while loop: " << dw << endl;
        dw++;
    } while(dw < 3);

    /* =========================================================================
    5. FUNCTIONS
    =========================================================================*/
    // Function prototypes
    int sum(int x, int y);
    void greet(const string &name); // Pass string by reference for efficiency

    // Call functions
    int result = sum(5, 7);
    cout << "Sum result: " << result << endl;
    greet("Alice");

    /* Explanation:
    - Passing by reference avoids copying large objects
    - Functions improve readability and reusability
    - Return values allow functions to compute and give back results
    */

    /* =========================================================================
    6. POINTERS & REFERENCES
    =========================================================================*/
    int val = 10;
    int *ptr = &val;   // Pointer stores memory address of val
    cout << "Value: " << val << ", Address: " << ptr << endl;

    *ptr = 20;         // Modify value via pointer
    cout << "Modified via pointer: " << val << endl;

    int &ref = val;    // Reference: alias to val
    ref = 30;          // Modifies original val
    cout << "Modified via reference: " << val << endl;

    /* Explanation:
    - Pointers give manual memory access; references are safer aliases
    - Use pointers for dynamic memory, references for simpler syntax
    - Dangling pointers or invalid references cause undefined behavior
    */

    /* =========================================================================
    7. ARRAYS & VECTORS
    =========================================================================*/
    int arr[5] = {1,2,3,4,5}; // Fixed-size array
    for(int i=0; i<5; i++) cout << "Array[" << i << "]: " << arr[i] << endl;

    // Vector: dynamic array from STL
    vector<int> vec = {1,2,3};
    vec.push_back(4);   // Add element at end
    vec.pop_back();     // Remove last element
    vec[0] = 10;        // Access by index

    cout << "Vector elements: ";
    for(int v : vec) cout << v << " ";
    cout << endl;

    /* Explanation:
    - STL vectors manage memory automatically
    - Resizable arrays reduce manual memory management complexity
    - Vectors support iteration, size(), push_back(), pop_back()
    */

    /* =========================================================================
    8. STRINGS
    =========================================================================*/
    string str1 = "Hello";
    string str2 = "World";
    string str3 = str1 + " " + str2; // Concatenation
    cout << "Concatenated string: " << str3 << endl;

    cout << "String length: " << str3.length() << endl;

    /* Explanation:
    - std::string handles memory internally
    - Safer than C strings (char arrays)
    - Supports concatenation, comparison, and slicing
    */

    /* =========================================================================
    9. CLASSES & OBJECTS
    =========================================================================*/
    class Person {
    public:
        string name;
        int age;

        Person(string n, int a) : name(n), age(a) {} // Constructor

        void greet() {
            cout << "Hello, my name is " << name << " and I am " << age << endl;
        }
    };

    Person alice_obj("Alice", 25);
    alice_obj.greet();

    /* Explanation:
    - Classes encapsulate data and behavior
    - Constructor initializes objects
    - Public members accessible outside class; private hides implementation
    - Benefit: modular, organized, and reusable code
    */

    /* =========================================================================
    10. INHERITANCE & POLYMORPHISM
    =========================================================================*/
    class Employee : public Person { // Employee inherits from Person
    public:
        string position;
        Employee(string n, int a, string pos) : Person(n,a), position(pos) {}
        void work() {
            cout << name << " works as " << position << endl;
        }
    };

    Employee bob("Bob", 30, "Developer");
    bob.greet(); // Inherited method
    bob.work();  // Employee-specific method

    /* Polymorphism example */
    class Animal {
    public:
        virtual void speak() { cout << "Animal speaks" << endl; }
    };

    class Dog : public Animal {
    public:
        void speak() override { cout << "Dog barks" << endl; }
    };

    Animal *a = new Dog();
    a->speak(); // Calls Dog::speak because speak() is virtual

    delete a;

    /* Explanation:
    - Virtual functions allow runtime polymorphism
    - Derived class can override base class behavior
    - Pointers/references to base class can call derived methods
    - Benefit: flexible code for extensible systems
    */

    /* =========================================================================
    11. SMART POINTERS
    =========================================================================*/
    unique_ptr<Person> p_ptr = make_unique<Person>("Charlie", 28);
    p_ptr->greet(); // Access object like normal pointer

    // Shared pointer example
    shared_ptr<Person> s_ptr1 = make_shared<Person>("Dana", 35);
    shared_ptr<Person> s_ptr2 = s_ptr1; // Reference count increases
    s_ptr1->greet();
    s_ptr2->greet(); // Same object shared safely

    /* Explanation:
    - Smart pointers manage memory automatically
    - unique_ptr: sole ownership
    - shared_ptr: reference-counted ownership
    - Benefit: reduces memory leaks and dangling pointers
    */

    /* =========================================================================
    12. TEMPLATES
    =========================================================================*/
    template<typename T>
    T add(T x, T y) { return x + y; }

    cout << "Template add int: " << add<int>(5,10) << endl;
    cout << "Template add double: " << add<double>(2.5,3.5) << endl;

    /* Explanation:
    - Templates allow type-agnostic code
    - Avoids duplication for int, double, or other types
    - Benefit: reusable and generic functions/classes
    */

    /* =========================================================================
    13. STL CONTAINERS & ALGORITHMS
    =========================================================================*/
    vector<int> nums = {5,3,8,1};
    sort(nums.begin(), nums.end()); // Sort vector

    cout << "Sorted numbers: ";
    for(int n : nums) cout << n << " ";
    cout << endl;

    map<string,int> ages;
    ages["Alice"] = 25;
    ages["Bob"] = 30;

    for(auto &pair : ages) {
        cout << pair.first << ": " << pair.second << endl;
    }

    /* Explanation:
    - STL provides powerful data structures and algorithms
    - Reduces manual coding for common tasks (sorting, searching, mapping)
    - Benefit: safer, faster, and less error-prone code
    */

    /* =========================================================================
    14. FILE HANDLING
    =========================================================================*/
    #include <fstream>
    ofstream outFile("example.txt");
    if(outFile.is_open()) {
        outFile << "Hello C++ Handbook\n";
        outFile.close();
    }

    ifstream inFile("example.txt");
    string line;
    if(inFile.is_open()) {
        while(getline(inFile, line)) cout << "Read: " << line << endl;
        inFile.close();
    }

    /* Explanation:
    - fstream provides file read/write streams
    - Safer and easier than C-style FILE*
    - Benefit: easy persistent storage and object-oriented interface
    */

    return 0;
}

/* =========================================================================
FUNCTION DEFINITIONS
===========================================================================*/
int sum(int x, int y) { return x + y; }

void greet(const string &name) {
    cout << "Hello " << name << endl;
}

