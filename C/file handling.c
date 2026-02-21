#include <stdio.h>

/******* FILE Input/Output IN C ******/

/*
- File I/O allows reading and writing files
- Always declare a FILE pointer at the top
*/

int main() {

    /******* DECLARING FILE POINTER ******/

    FILE* filepointer;

    /******* OPENING A FILE FOR READING ******/

    filepointer = fopen("test.txt", "r"); // "r" = read mode

    if (filepointer != NULL) {
        printf("File open successful for reading\n");

        /******* READING FIRST LINE FROM FILE ******/

        char content[1000]; // buffer to store file data
        if (fgets(content, 1000, filepointer) != NULL) {
            printf("First line of file: %s\n", content);
        }

        /******* READING WHOLE FILE LINE BY LINE ******/

        // Reset file pointer to start of file
        fseek(filepointer, 0, SEEK_SET);

        printf("\n--- Entire file contents ---\n");
        while (fgets(content, 1000, filepointer) != NULL) {
            printf("%s", content); // prints each line as it is read
        }

        fclose(filepointer); // close after reading

    } else {
        printf("File open unsuccessful for reading\n");
    }

    /******* OPENING A FILE FOR WRITING ******/

    filepointer = fopen("output.txt", "w"); // "w" = write mode
    if (filepointer != NULL) {
        printf("\nFile open successful for writing\n");

        fputs("Hello World!\n", filepointer);
        fputs("This is a second line.\n", filepointer);

        fclose(filepointer); // close after writing
    } else {
        printf("File open unsuccessful for writing\n");
    }

    return 0;
}