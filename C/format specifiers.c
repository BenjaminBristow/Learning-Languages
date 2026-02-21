#include <stdio.h>

int main(){
    // ******* Format specifiers in print statements *******
    //Integer
    int age = 25;
    printf("%d\n", age);
    
    //Float
    float price = 19.99;
    printf("%f\n", price);
    
    //Long float
    double pi = 3.1415926538979;
    printf("%lf\n", pi);
    
    //Character
    char currency = '$';
    printf("%c\n", currency);
    
    //String
    char name[] = "Benjamin Bristow";
    printf("%s\n", name);
    
    
    // ******* Optional modifiers *******
    //Width with spaces before
    int number = 1;
    printf("%3d", number);
    //This sets the minimum length of a string and fills in any gaps beforehand with a space
    //Examples, output in “blue” and space as ୦
    
    int number = 1;
    printf("%3d", number);
    //output: “  1”
    
    int number = 12;
    printf("%3d", number);
    //output: “ 12”
    
    int number = 123;
    printf("%3d", number);
    //output: “123”
    
    int number = 1234;
    printf("%3d", number);
    //output: “1234”
    
    // Width with spaces after
    printf("%-3d", number);
    //This will put all the space after if the minimum number of characters is not met
    
    int number = 1;
    printf("%-3d", number);
    //output: “1  ”
    
    int number = 12;
    printf("%-3d", number);
    //output: “12 ”
    
    int number = 123;
    printf("%-3d", number);
    //output: “123”
    
    int number = 1234;
    printf("%-3d", number);
    //output: “1234”
    
    // Width with 0’s instead of spaces
    printf("%03d", number);
    //This will put all the space after if the minimum number of characters is not met    
    int number = 1;
    printf("%03d", number);
    //output: “001”
    
    int number = 12;
    printf("%03d", number);
    //output: “012”
    
    int number = 123;
    printf("%03d", number);
    //output: “123”
    
    int number = 1234;
    printf("%03d", number);
    //output: “1234”
    
    
    // Showing the signs with a + (flags)
    printf("%+d", number);
    //This will put all the sign of the number in front

    int number = 123;
    printf("%+d", number);
    //output: “+123”
    
    int number = -123;
    printf("%+d", number);
    //output: “-123”
    
    // Precision of decimals
    float price = 19.99;
    printf("%.1f", price);
    //This only shows one decimal point
    //This can also be used with long floats (%lf)
    
    float price = 19.99;
    printf("%f", price);
    //output: “19.990000” as a float stores 6 digits after the decimal
    
    float price = 19.99;
    printf("%.2f", price);
    //output: “19.99”
    
    float price = 19.99;
    printf("%.1f", price);
    //output: “20.0” as it rounded the unused digit
    
    // Combining them all
    float price1 = 19.99;
    float price2 = 1.50;
    float  price3 = -100.00;
    
    printf("%+7.2f \n", price1);
    printf("%+7.2f \n", price2);
    printf("%+7.2f \n", price3);
    
    //output:
    //“0+19.99”
    //“00+1.50”
    //“-100.00”

}


