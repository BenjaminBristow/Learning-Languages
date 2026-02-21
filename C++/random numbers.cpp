#include <iostream>
#include <cstdlib> // for rand(), srand()
#include <ctime>   // for time()
using namespace std;

/******* RANDOM NUMBERS ******/

int main() {
    /******* BASIC rand() ******/
    cout << "Random without seed: " << rand() << endl;
    // rand() generates a pseudo-random number
    // "Pseudo" because it’s deterministic: same seed → same sequence

    /******* SEEDING rand() ******/
    srand(time(NULL)); // seed with current time to get different numbers each run
    cout << "Random with time seed: " << rand() << endl;

    /******* RANDOM NUMBER IN RANGE ******/
    int min = 0;
    int max = 100;
    int randomNum = rand() % (max - min + 1) + min; 
    // Explanation:
    // rand() % (max-min+1) generates number from 0 to (max-min)
    // Adding min shifts range to [min, max]

    cout << "Random number between 0 and 100: " << randomNum << endl;

    /******* PITFALLS ******/
    // rand() is not suitable for cryptography
    // Repeated calls in quick succession may produce similar numbers if seeded improperly

    return 0;
}