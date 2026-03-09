/*
===========================================================================
ADVANCED C HANDBOOK (EXTENSIVE EXPLANATIONS)
This handbook goes from basic to advanced C topics with detailed comments:
- Explains what each line does
- Explains why we can/can’t do certain operations
- Explains why things work a certain way
- Explains the benefits and drawbacks of approaches
- Builds concepts from simple to advanced
===========================================================================*/

#include <stdio.h>    // Standard input/output: printf, scanf, file operations
#include <stdlib.h>   // Standard library: malloc, free, exit, rand, etc.
#include <string.h>   // String operations: strcpy, strcat, strlen
#include <stdbool.h>  // Boolean type support: true/false

/* =========================================================================
1. VARIABLES & DATA TYPES
===========================================================================*/
int main() {
    // Variables store data in memory. Each type has a size and rules.
    
    int age = 25;           // Integer: whole numbers
    // Why we use int: efficient for integer math, fast, portable
    unsigned int uage = 30; // Cannot be negative; useful when negative numbers are invalid
    short s = 10;           // Smaller int, uses less memory
    long l = 1000000;       // Larger range int

    float pi = 3.14159f;    // Single precision decimal
    double e = 2.718281828; // Double precision decimal for higher accuracy

    char initial = 'A';     // Single character
    char name[] = "Alice";  // String: array of characters ending with '\0'

    bool is_active = true;  // Boolean value (from stdbool.h)

    // Printing variables
    printf("Age: %d, Unsigned Age: %u, Short: %d, Long: %ld\n", age, uage, s, l);
    printf("Pi: %.2f, e: %.8f\n", pi, e);
    printf("Initial: %c, Name: %s, Active: %d\n", initial, name, is_active);

    /* Explanation:
    - In C, variables must be declared before use.
    - Using the correct type matters:
        * int for integers
        * float/double for decimals
        * char for characters
        * bool for logical values
    - unsigned types prevent negative numbers, useful for counts, sizes, or indices.
    */

    /* =========================================================================
    2. OPERATORS
    =========================================================================*/
    int a = 10, b = 3;

    printf("Addition: %d\n", a + b);      // Sum
    printf("Subtraction: %d\n", a - b);   // Difference
    printf("Multiplication: %d\n", a * b);// Product
    printf("Division: %d\n", a / b);      // Integer division truncates decimals
    printf("Modulo: %d\n", a % b);        // Remainder

    /* Why division truncates: C integer division removes fractional part.
       If you need decimal division, use float/double:
       double result = (double)a / b;
    */

    /* =========================================================================
    3. CONDITIONALS
    =========================================================================*/
    if(a > b) {
        printf("%d is greater than %d\n", a, b);
    } else if(a == b) {
        printf("%d equals %d\n", a, b);
    } else {
        printf("%d is less than %d\n", a, b);
    }

    /* Explanation:
    - Conditions must be expressions that evaluate to true/non-zero or false/0.
    - else-if allows checking multiple alternatives.
    - Only one branch executes.
    - Why beneficial: avoids redundant checks and makes logic clear.
    */

    /* =========================================================================
    4. LOOPS
    =========================================================================*/
    // For loop: when number of iterations is known
    for(int i = 0; i < 5; i++) {
        printf("For loop iteration: %d\n", i);
    }

    // While loop: when iterations depend on a condition
    int count = 0;
    while(count < 3) {
        printf("While loop count: %d\n", count);
        count++;
    }

    // Do-while loop: executes at least once
    int dw = 0;
    do {
        printf("Do-while loop: %d\n", dw);
        dw++;
    } while(dw < 3);

    /* Explanation:
    - Loops reduce repetition and errors.
    - Use for when iteration count is known; while/do-while when unknown.
    - Break/continue control flow inside loops.
    */

    /* =========================================================================
    5. FUNCTIONS
    =========================================================================*/

    // Function declaration must appear before use if defined later
    int sum(int x, int y);
    void greet(char name[]);

    // Call functions
    int result = sum(5, 7);
    printf("Sum result: %d\n", result);
    greet("Alice");

    /* Explanation:
    - Functions improve readability and reusability.
    - Arguments allow passing data into functions.
    - Return values allow retrieving results.
    - Benefit: avoids code repetition, easier maintenance.
    */

    /* =========================================================================
    6. POINTERS
    =========================================================================*/
    int val = 10;
    int *ptr = &val;   // Pointer stores the memory address of val

    printf("Value: %d, Address: %p\n", val, ptr);

    *ptr = 20;         // Modify value via pointer
    printf("Modified value via pointer: %d\n", val);

    /* Detailed explanation:
    - &val: address-of operator, gives memory location.
    - *ptr: dereference operator, accesses the value at the address.
    - Why beneficial: pointers allow:
        * Dynamic memory allocation
        * Passing large data structures efficiently to functions
        * Implementing data structures (linked lists, trees)
    - Why careful: invalid pointers cause undefined behavior.
    */

    /* =========================================================================
    7. ARRAYS
    =========================================================================*/
    int arr[5] = {1,2,3,4,5}; // Fixed-size collection of elements
    for(int i=0; i<5; i++) {
        printf("Array[%d]: %d\n", i, arr[i]);
    }

    /* Explanation:
    - Arrays store multiple elements in contiguous memory.
    - Access via index; first element is index 0.
    - Limitation: size fixed at compile time.
    - Benefit: efficient memory usage, predictable layout.
    */

    /* =========================================================================
    8. STRINGS
    =========================================================================*/
    char str1[] = "Hello";
    char str2[] = "World";

    char str3[50];
    strcpy(str3, str1);  // Copy str1 to str3
    strcat(str3, " ");   // Append space
    strcat(str3, str2);  // Append str2
    printf("Concatenated string: %s\n", str3);

    /* Explanation:
    - Strings are arrays of chars ending with null '\0'.
    - strcat and strcpy manipulate strings safely.
    - Must ensure destination array is large enough.
    - Why beneficial: manipulate text data in memory efficiently.
    */

    /* =========================================================================
    9. STRUCTS
    =========================================================================*/
    struct Person {
        char name[50];
        int age;
        float height;
    };

    struct Person p1;
    strcpy(p1.name, "Alice");
    p1.age = 25;
    p1.height = 5.6f;

    printf("Person: %s, Age: %d, Height: %.1f\n", p1.name, p1.age, p1.height);

    /* Explanation:
    - Structs group multiple variables under one name.
    - Useful for representing complex objects (like classes in higher-level languages).
    - Benefit: organized, readable, and memory-efficient data representation.
    */

    /* =========================================================================
    10. DYNAMIC MEMORY
    =========================================================================*/
    int *dyn_arr;
    int size = 5;
    dyn_arr = (int*)malloc(size * sizeof(int)); // Allocate memory dynamically

    if(dyn_arr == NULL) { // Check allocation success
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i=0; i<size; i++) {
        dyn_arr[i] = i*10;
    }

    for(int i=0; i<size; i++) {
        printf("Dynamic Array[%d]: %d\n", i, dyn_arr[i]);
    }

    free(dyn_arr); // Free memory to avoid leaks

    /* Explanation:
    - malloc allocates memory on the heap at runtime.
    - Freeing memory is crucial; otherwise, memory leaks occur.
    - Benefit: allows flexible-sized data structures at runtime.
    */

    /* =========================================================================
    11. FUNCTION POINTERS
    =========================================================================*/
    int (*func_ptr)(int,int) = &sum;
    printf("Function pointer sum: %d\n", func_ptr(10,20));

    /* Explanation:
    - Function pointers allow dynamic selection of functions at runtime.
    - Useful for callbacks, event-driven code, plugin systems.
    - Must match signature exactly to avoid undefined behavior.
    */

    /* =========================================================================
    12. FILE HANDLING
    =========================================================================*/
    FILE *fp;
    fp = fopen("example.txt","w");
    if(fp != NULL) {
        fprintf(fp, "Hello C Handbook\n");
        fclose(fp);
    }

    fp = fopen("example.txt","r");
    char buffer[100];
    if(fp != NULL) {
        while(fgets(buffer, sizeof(buffer), fp)) {
            printf("Read from file: %s", buffer);
        }
        fclose(fp);
    }

    /* Explanation:
    - fopen opens a file with a mode ("r", "w", "a").
    - fprintf and fgets are used for writing and reading.
    - Closing file releases resources.
    - Benefit: persistent storage outside program memory.
    */

    /* =========================================================================
    13. MACROS & PREPROCESSOR
    =========================================================================*/
    #define PI 3.14159
    #define SQUARE(x) ((x)*(x))
    printf("PI: %.2f, Square: %d\n", PI, SQUARE(5));

    /* Explanation:
    - Macros are replaced by the preprocessor before compilation.
    - Good for constants or small inline operations.
    - Caution: macros do not obey scope rules and can cause side effects if misused.
    */

    /* =========================================================================
    14. POINTER TO POINTER
    =========================================================================*/
    int val2 = 50;
    int *p1_ptr = &val2;
    int **p2_ptr = &p1_ptr; // Pointer to pointer
    printf("Value via pointer-to-pointer: %d\n", **p2_ptr);

    /* Explanation:
    - Pointers to pointers are used in dynamic arrays, linked structures, or passing references to functions.
    - Dereferencing twice (**p2_ptr) gets the original value.
    - Benefit: extremely powerful for memory and data manipulation.
    */

    return 0;
}

/* =========================================================================
FUNCTION DEFINITIONS
===========================================================================*/
int sum(int x, int y) {
    return x + y; // Simple addition
}

void greet(char name[]) {
    printf("Hello %s\n", name); // Prints greeting
}


