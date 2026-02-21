#include <stdio.h>

int main(){
    // ******* PRINTF *******
    printf("string here"); //prints the string in the brackets to the terminal

    //When printing to the terminal, the compiler does not go to the next line automatically meaning it will form one long string. Therefore we need a \n
    printf(" *string here*\n");


    // ******* INSERTIONG VARIABLES INTO PRINTF *******
    int age = 18; 
    printf("You are %d years old", age);

    /*
    The %d is a format specifier that is of the same type as the variable
    The %d might not be a d as d represents a decimal number 
    You have other format specifiers like %f for float

    If you use %d but the variable is a decimal number, an error forms as they are of different data types
    But if you initialise the variable as an integer but make it equal to a decimal, it will truncate the value
    */
}