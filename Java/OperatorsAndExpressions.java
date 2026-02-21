package Java;           // <– must match the folder name

/******* OPERATORS_AND_EXPRESSIONS ******/

public class OperatorsAndExpressions {

    public static void main(String[] args) {

        int a = 10;
        int b = 3;

        /******* ARITHMETIC OPERATORS ******/
        // + addition
        System.out.println("a + b = " + (a + b));
        // - subtraction
        System.out.println("a - b = " + (a - b));
        // * multiplication
        System.out.println("a * b = " + (a * b));
        // / division (integer division truncates decimal)
        System.out.println("a / b = " + (a / b));
        // % modulus (remainder of division)
        System.out.println("a % b = " + (a % b));

        /******* COMPARISON OPERATORS ******/
        // Returns boolean: true or false
        System.out.println("a == b? " + (a == b)); // equality
        System.out.println("a != b? " + (a != b)); // not equal
        System.out.println("a > b? " + (a > b));   // greater than
        System.out.println("a < b? " + (a < b));   // less than
        System.out.println("a >= b? " + (a >= b)); // greater or equal
        System.out.println("a <= b? " + (a <= b)); // less or equal

        /******* LOGICAL OPERATORS ******/
        boolean x = true;
        boolean y = false;

        // Logical AND: true only if both x and y are true
        System.out.println("x && y = " + (x && y));

        // Logical OR: true if at least one is true
        System.out.println("x || y = " + (x || y));

        // Logical NOT: inverts boolean value
        System.out.println("!x = " + (!x));
    }
}