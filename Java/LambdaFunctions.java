package Java;

/******* LAMBDA FUNCTIONS ******/

import java.util.ArrayList;

public class LambdaFunctions {

    public static void main(String[] args){

        ArrayList<Integer> numbers = new ArrayList<>();
        for(int i=1; i<=5; i++) numbers.add(i);

        /******* BASIC LAMBDA ******/

        // Lambda expression: (parameters) -> {body}
        numbers.forEach(n -> System.out.println("Number: " + n));

        /******* LAMBDA WITH EXTERNAL VARIABLE ******/

        final int factor = 2;
        numbers.forEach(n -> System.out.println(n + " * factor = " + (n*factor)));

        /******* NOTES ******/

        // Lambdas allow concise anonymous functions
        // Can be passed to functional interfaces
        // Useful with Collections methods like forEach, sort
    }
}
