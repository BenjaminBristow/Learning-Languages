#include <iostream>
#include <vector>
#include <string>
using namespace std;

/******* ARRAYS AND VECTORS ******/

int main() {
    /******* STATIC 1D ARRAY ******/
    int numbers[] = {10, 20, 30, 40}; // fixed size array
    int len = sizeof(numbers)/sizeof(numbers[0]); // number of elements

    cout << "Numbers in array: ";
    for(int i=0;i<len;i++){
        cout << numbers[i] << " "; // access elements by index
    }
    cout << endl;

    /******* VECTOR (DYNAMIC ARRAY) ******/
    vector<int> scores(5); // vector can grow/shrink dynamically
    for(int i=0;i<5;i++){
        cout << "Enter score: ";
        cin >> scores[i]; // input values into vector
    }

    cout << "Scores: ";
    for(int i=0;i<5;i++) cout << scores[i] << " ";
    cout << endl;

    /******* STRING ARRAY / VECTOR OF STRINGS ******/
    vector<string> fruits = {"apple","banana","orange"};
    cout << "Original fruits:\n";
    for(string f: fruits) cout << f << endl;

    // Modify individual character in string
    fruits[1][2] = 'x'; // changes 'banana' -> 'baxana'
    cout << "Modified fruits:\n";
    for(string f: fruits) cout << f << endl;

    return 0;
}