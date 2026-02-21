#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/******* RANDOM NUMBERS IN C ******/

/*
C provides the rand() function to generate pseudo-random numbers.
- rand() alone will produce the same sequence each run
- To change the sequence, we can seed it with srand() and time()
*/

int main() {

    /******* SIMPLE RAND() EXAMPLE ******/

    // This prints a random number, but the same number every time you run
    printf("Random number (without seeding): %d\n", rand());

    /******* USING srand() AND time() ******/

    // srand() seeds the random number generator
    // time(NULL) returns the current time
    srand(time(NULL));

    // Now rand() will produce different numbers each run
    printf("Random number (seeded with current time): %d\n", rand());

    /******* RANDOM NUMBER IN A SPECIFIC RANGE ******/

    int min = 0;
    int max = 100;

    // Formula for random number between min and max (inclusive)
    int randomNumber = (rand() % (max - min + 1)) + min;

    printf("Random number between %d and %d: %d\n", min, max, randomNumber);

    /*
    Explanation:
    - rand() % (max - min + 1) produces a number from 0 to (max - min)
    - Adding min shifts it to the range [min, max]
    - +1 ensures the maximum value is included
    */

    return 0;
}