#include <iostream>
using namespace std;

/******* CONTROL FLOW ******/

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score; // 'cin' takes input from the user

    /******* IF ... ELSE ******/
    // Conditional branching: executes the first true condition
    if(score >= 90)
        cout << "Grade: A" << endl;
    else if(score >= 75)
        cout << "Grade: B" << endl;
    else if(score >= 50)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: F" << endl;

    /******* SWITCH STATEMENT ******/
    // Efficient way to check a variable against multiple discrete values
    int day = 4;
    switch(day) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        default: cout << "Other day\n"; break;
    }

    /******* FOR LOOP ******/
    // Looping a fixed number of times
    for(int i = 0; i < 5; i++){
        cout << "For loop iteration " << i << endl;
    }

    /******* WHILE LOOP ******/
    // Loop while a condition is true
    int count = 0;
    while(count < 3){
        cout << "While loop " << count << endl;
        count++;
    }

    /******* DO-WHILE LOOP ******/
    // Executes at least once, then checks condition
    int n = 0;
    do {
        cout << "Do-While loop " << n << endl;
        n++;
    } while(n < 2);

    return 0;
}