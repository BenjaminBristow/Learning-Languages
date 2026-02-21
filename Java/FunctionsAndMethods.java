package Java;       // <– must match the folder name

/******* FUNCTIONS AND METHODS ******/

import java.util.Scanner;

public class FunctionsAndMethods {

    /******* VOID METHOD ******/

    public static void sayHello(String name){
        System.out.println("Hello " + name); // prints greeting
    }

    /******* METHOD THAT RETURNS VALUE ******/

    public static int square(int num){
        return num * num; // returns calculated value
    }

    /******* METHOD RETURNING BOOLEAN ******/

    public static boolean isAdult(int age){
        return age >= 18; // returns true if age >= 18
    }

    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);

        /******* CALLING METHODS ******/

        sayHello("Benjamin");

        int sq = square(5);
        System.out.println("Square of 5 is " + sq);

        System.out.print("Enter your age: ");
        int age = scanner.nextInt();

        if(isAdult(age)){
            System.out.println("You are an adult.");
        } else {
            System.out.println("You are not an adult.");
        }

        scanner.close();
    }
}