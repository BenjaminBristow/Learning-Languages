#include <stdio.h>
#include <string.h>

/******* 1D ARRAYS ******/

/*
- Arrays must have a predetermined size
- You can initialize arrays in two ways:

1. Specify all elements:
    type arrayname[] = {element1, element2, element3};

2. Specify size with optional initialization:
    type arrayname[5];          // uninitialized
    type arrayname[5] = {0};    // all elements set to 0
*/

int main() {

    /******* DECLARING AND ACCESSING 1D ARRAYS ******/

    int numbers[] = {10, 20, 30, 40};

    // Access element at index 0
    printf("First number: %d\n", numbers[0]);

    // Modify element
    numbers[0] = 100;
    printf("Updated first number: %d\n", numbers[0]);

    /******* GETTING THE NUMBER OF ELEMENTS ******/

    int numberOfElements = sizeof(numbers) / sizeof(numbers[0]);
    printf("Number of elements: %d\n", numberOfElements);

    /******* PRINTING ALL ELEMENTS ******/

    printf("All numbers: ");
    for (int i = 0; i < numberOfElements; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    /******* USER INPUT WITH ARRAYS ******/

    int scores[5] = {0}; // initialize all elements to 0

    for (int i = 0; i < 5; i++) {
        printf("Enter a score: ");
        scanf("%d", &scores[i]);
    }

    printf("Scores entered: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    /******* 2D ARRAYS ******/

    /*
    - Syntax: type arrayName[rows][columns]
    - All sub-arrays except the first must have a fixed length
    */

    int matrix[][3] = { {1, 2, 3}, {4, 5, 6} };

    printf("matrix[0][2] = %d\n", matrix[0][2]); // 3
    printf("matrix[1][2] = %d\n", matrix[1][2]); // 6

    /******* ARRAYS OF STRINGS ******/

    /*
    - Strings are arrays of characters
    - Array of strings: type arrayName[][maxLengthOfString] = {"str1", "str2"};
    */

    char fruits[][7] = {"apple", "banana", "orange"};

    int fruitCount = sizeof(fruits) / sizeof(fruits[0]);

    // Print all strings
    for (int i = 0; i < fruitCount; i++) {
        printf("%s\n", fruits[i]);
    }

    /******* MODIFYING STRINGS IN AN ARRAY ******/

    // Change 'banana' to 'baxana'
    fruits[1][2] = 'x';

    printf("Modified fruits:\n");
    for (int i = 0; i < fruitCount; i++) {
        printf("%s\n", fruits[i]);
    }

    return 0;
}