package Java;  

/******* ARRAYS_AND_ARRAYLISTS ******/

import java.util.ArrayList; // needed for ArrayList
import java.util.Scanner; // needed for user input in ArrayList example

public class Arrays {

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        /******* 1D ARRAY ******/
        int[] numbers = {10,20,30,40}; // fixed size
        System.out.println("First element: " + numbers[0]); // access by index
        numbers[0] = 100; // change value
        System.out.println("Updated first element: " + numbers[0]);

        // length of array
        int len = numbers.length;
        System.out.println("Number of elements in array: " + len);

        /******* ARRAYLIST (dynamic array) ******/
        ArrayList<Integer> scores = new ArrayList<>(); // empty dynamic array

        for(int i=0; i<5; i++){
            System.out.print("Enter a score: ");
            scores.add(scanner.nextInt()); // add element dynamically
        }

        System.out.println("Scores in ArrayList: " + scores);

        /******* MULTIDIMENSIONAL ARRAY ******/
        int[][] matrix = {{1,2,3},{4,5,6}};
        System.out.println("Element at row 0, col 2: " + matrix[0][2]); // 3

        scanner.close();
    }
}