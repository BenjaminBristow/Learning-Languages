package Java;

/******* BASICS ******/

// Import statement allows us to use Scanner for user input
import java.util.Scanner;

public class Basics {

    public static void main(String[] args) {

        /******* VARIABLES AND DATA TYPES ******/

        // 'int' stores whole numbers
        int age = 25; // integer literal assigned to variable 'age'

        // 'double' stores decimal numbers
        double gpa = 3.8; // floating-point number

        // 'boolean' stores true/false values
        boolean isStudent = true; // boolean literal

        // 'char' stores a single character
        char grade = 'A'; // use single quotes for chars

        // 'String' stores a sequence of characters
        String name = "Benjamin"; // use double quotes for Strings

        /******* PRINTING VARIABLES ******/

        // System.out.println prints to the console with a newline at the end
        System.out.println("Name: " + name); // concatenates text and variable
        System.out.println("Age: " + age);
        System.out.println("GPA: " + gpa);
        System.out.println("Grade: " + grade);

        // Conditional output using ternary operator
        // If isStudent is true, prints "Yes", otherwise prints "No"
        System.out.println("Student: " + (isStudent ? "Yes" : "No"));

        /******* USER INPUT ******/

        // Scanner object reads input from user
        Scanner scanner = new Scanner(System.in); // 'System.in' is keyboard input
        System.out.print("Enter your favorite color: "); // prompt user
        String color = scanner.nextLine(); // reads full line including spaces
        System.out.println("Your favorite color is " + color);

        // Close the scanner to avoid resource leaks
        scanner.close();
    }
}