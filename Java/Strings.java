package Java;

/******* STRINGS ******/

import java.util.Scanner;

public class Strings {

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        /******* DECLARING STRINGS ******/
        String name; // empty string
        System.out.print("Enter your name: ");
        name = scanner.nextLine(); // read full line including spaces

        /******* STRING FUNCTIONS ******/
        System.out.println("Hello " + name);
        System.out.println("Length of name: " + name.length()); // number of characters
        System.out.println("Uppercase: " + name.toUpperCase()); // convert to uppercase
        System.out.println("Lowercase: " + name.toLowerCase()); // convert to lowercase

        // substring(start, end) extracts part of string
        if(name.length() >= 3){
            System.out.println("First 3 letters: " + name.substring(0,3));
        }

        // replace(oldChar, newChar) replaces characters
        String replaced = name.replace('a','x'); // replaces all 'a' with 'x'
        System.out.println("After replacement: " + replaced);

        /******* WHY STRINGS ******/
        // Strings are objects in Java, not arrays of characters
        // Use methods like length(), substring(), replace() instead of manual loops
        // Strings are immutable: methods return new strings

        scanner.close();
    }
}
