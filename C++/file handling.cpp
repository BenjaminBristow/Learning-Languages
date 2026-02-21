#include <iostream>
#include <fstream>  // required for file input/output
#include <string>
using namespace std;

/******* FILE I/O ******/

int main(){
    /******* READING FILES ******/
    ifstream infile("test.txt"); // open file in read mode
    if(infile.is_open()){ // always check if file opened successfully
        string line;
        while(getline(infile, line)){ // read line by line
            cout << line << endl;
        }
        infile.close(); // close file when done
    } else {
        cout << "Could not open file for reading." << endl;
    }

    /******* WRITING FILES ******/
    ofstream outfile("output.txt"); // open file in write mode
    if(outfile.is_open()){
        outfile << "Hello World!" << endl; // write text
        outfile << "Second line" << endl;
        outfile.close(); // always close files
    } else {
        cout << "Could not open file for writing." << endl;
    }

    /******* WHY FILE I/O ******/
    // Useful for saving data between program runs
    // Always check for file open success
    // Reading/writing line by line or character by character

    return 0;
}