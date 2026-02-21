#include <iostream>
#include <stdexcept> // for runtime_error
using namespace std;

/******* EXCEPTION HANDLING ******/

int main(){
    /******* TRY AND CATCH ******/
    // Exceptions allow handling errors gracefully instead of crashing
    try{
        int x = 0;
        if(x == 0) throw runtime_error("Division by zero!"); 
        // throw creates an exception object
        int y = 10 / x; // this line would normally crash
    }
    catch(runtime_error &e){
        // catch handles the thrown exception
        cout << "Error caught: " << e.what() << endl; // .what() gives error message
    }

    /******* WHY USE EXCEPTIONS ******/
    // Instead of using return codes everywhere
    // You can separate normal logic from error handling
    // Prevents crashes and improves code safety

    return 0;
}