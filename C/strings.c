#include <stdio.h>

// ******* Strings *******
//A string is just a sequence of characters
//C does not have strings instead it uses arrays of letters to create strings
//Need the 
#include <string.h>

//Defining:
int maxstringlength;
char name[maxstringlength] = "string"; //you need to set a max length for the string (including \0’s) and then make it equal to something
char firstname[50];
//Or
char firstname[] = "Benjamin"; //you don’t have to set max length if you make it equal to something
//Or
char *answer = "hello";

//Printing:
printf("You typed %s", answer);

//Scanning:
char answer[20]; //max length (including \0’s) is 20
scanf("%s", answer); //do not need the & symbol as they are not a basic type

//Comparing:
char password[] = "Password1234";
char userEntry[] = "Password1234";

//‘password == userEntry’ will not resolve correctly

strcmp(string, string) //compares two strings and returns -1, 0 or 1 (less, equal, greater)
if (strcmp(password, "pass123") == 0 || strcmp(password, "secret") == 0){
    printf("Yes\n");
}

//Other functions in <string.h>
strlen(char *) // find the length of string s
char *strchr(char *, int) // find a character within a string (pointer or NULL)
strcat(char *d, char *s) // append string s to d
strcpy(char *d, char *s) // copy string s to d

