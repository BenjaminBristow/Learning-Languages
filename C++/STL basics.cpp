#include <iostream>
#include <vector>   // for std::vector
#include <map>      // for std::map
#include <algorithm> // for std::sort, std::for_each
using namespace std;

/******* STANDARD TEMPLATE LIBRARY (STL) BASICS ******/

int main(){
    /******* VECTOR ******/
    // Vector is a dynamic array: can grow/shrink at runtime
    vector<int> v = {1,2,3,4,5};
    v.push_back(6); // adds element at the end

    cout << "Vector elements: ";
    for(int n: v) cout << n << " "; // range-based for loop
    cout << endl;

    /******* MAP ******/
    // Map stores key-value pairs (dictionary-like)
    map<string,int> m;
    m["apple"] = 2;
    m["banana"] = 3;

    // Iterating through map using auto keyword
    for(auto p: m){
        cout << p.first << ": " << p.second << endl;
    }

    /******* SORTING ******/
    // sort() works on vectors/arrays
    sort(v.begin(), v.end(), greater<int>()); // sorts in descending order

    cout << "Sorted vector descending: ";
    for(int n: v) cout << n << " ";
    cout << endl;

    /******* WHY STL ******/
    // STL provides ready-to-use data structures and algorithms
    // Saves time and improves code readability
    // Important containers: vector, map, set, list, deque
    // Important algorithms: sort, find, for_each, transform

    return 0;
}