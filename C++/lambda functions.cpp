#include <iostream>
#include <vector>
#include <algorithm> // for std::for_each
using namespace std;

/******* LAMBDA FUNCTIONS ******/

int main(){
    vector<int> v = {1,2,3,4,5};

    /******* BASIC LAMBDA ******/
    // Lambda: anonymous function defined inline
    int sum = 0;

    // [&sum] captures sum by reference so lambda can modify it
    for_each(v.begin(), v.end(), [&sum](int x){
        sum += x; // adds each element to sum
    });

    cout << "Sum of vector elements: " << sum << endl;

    /******* WHY USE LAMBDAS ******/
    // Useful for small, short-lived functions
    // Pass functions as arguments to algorithms like for_each, sort
    // Can capture variables from surrounding scope by reference [&] or by value [=]

    return 0;
}