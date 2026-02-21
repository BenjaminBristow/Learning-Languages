/*
******* Basic Operators *******
+ addition

- minus

/ divide
If you divide by an integer, you will not return the decimal portion of the number, instead it must be a float. Even if result variable itself is an integer
X /= 3, the same as x = x / 3

* multiply
x*= 3, the same as x = x * 3

% modulus
Gives remainder of any division
%2 to test if its even or odd, even if no remainder

++x increments by x
X++3 increments x by 3
X+=3 increments x by 3, the same as x = x+3

--x decreases by x
X--3 decreases x by 3
X -= 3 decreases x by 3, the same as x = x-3

*/

// ******* Complex math functions *******
// The following need: 
#include <math.h>

int main(){
    int x;
    int y;

    sqrt(x);
    //Returns square root of x
    x  = sqrt(x);
    
    pow(x, y);
    //Increases x to the power of y
    x = pow(x, 4);
    
    round(x);
    //Rounds x to the nearest whole number
    float x = 3.14;
    x = round(x);
    //X now equals “3”
    
    ceil(x);
    //Rounds x up to whole integer
    float x = 3.14;
    x = ceil(x);
    //X now equals “4”
    
    floor(x);
    //Rounds x down to whole integer
    float x = 3.99f;
    x = floor(x);
    //X now equals “3”
    
    abs(x);
    //Gives distance from 0 / the absolute number, aka makes the number positive if negative and does nothing if positive already
    int x = -3;
    x = abs(x);
    //X now equals “3”
    
    log(x);
    //Returns natural logarithm of x
    float x = 3.0f;
    x = log(x);
    //X now equals “1.098612”
    
    sin(x);
    cos(x);
    tan(x);
    //Returns the respective values
}
