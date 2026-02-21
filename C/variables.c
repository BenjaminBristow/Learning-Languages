#include <stdio.h>

int main(){
    /*
    ******* VARIABLES *******
    Variables are used to store data in a program. They have a name and a value.
    General rule = format specifier variable name = value
    If you initialise a variable and then don’t assign a value. In C it won’t automatically be set to null. This is because C doesn’t override anything automatically so wherever the variable's value was going to be stored in memory is just kept the same. Meaning if you call a variable without assigning a value, the value returned will be whatever was there originally
    It is good practice to assign something like “0” to anything when you initialise it
    */

    //Integer
    int age = 25;
    //Format specifier = %d	
    //int is a whole number

    //Decimal
    float gpa = 2.5;
    float gpa = 2.5f; //this does the same thing as the one above except the f is good practice that tells the user and code that “gpa” must be a floating point number
    //Format specifier = %f	
    //float is a decimal that is up to 6 digits after the decimal

    //Long decimal
    double pi = 3.1415926538979; 
    //Format specifier = %lf long float
    //Format specifier = %.15lf will show the first 15 digits after the decimal when used in a print statement
    //double is a decimal that is up to 15 or 16 digits after the decimal

    //Character
    char grade = 'A'; //note that the quotes are single quotes
    //Format specifier = %c
    //char stores one character and must be surrounded by single quotes only

    //String
    //Don’t have strings in c, instead we use arrays of characters
    char name[] = "Benjamin Bristow";
    //Format specifier = %s stands for string
    //Strings must be surrounded by double quotes only

    //Boolean
    #include <stdbool.h>
    bool isOnline = true;
    bool isOnline = 1;
    bool isOnline = false;
    bool isOnline = 0;
    //true/false must have no capital letters
    //true = 1, false = 0
    //You need to do #include <stdbool.h> at the top with all the other include statements
}