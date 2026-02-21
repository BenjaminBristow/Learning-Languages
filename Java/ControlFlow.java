package Java;
import java.util.Scanner;

/******* CONTROL_FLOW ******/


public class ControlFlow {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        /******* IF ... ELSE ******/
        System.out.print("Enter your score: ");
        int score = scanner.nextInt(); // read integer from user

        if(score >= 90) { // check first condition
            System.out.println("Grade: A");
        } else if(score >= 75) { // check second condition
            System.out.println("Grade: B");
        } else if(score >= 50) { // check third condition
            System.out.println("Grade: C");
        } else { // all other cases
            System.out.println("Grade: F");
        }

        /******* SWITCH STATEMENT ******/
        int day = 4;
        switch(day) { // check value of variable 'day'
            case 1:
                System.out.println("Monday");
                break; // important to stop fall-through
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            case 4:
                System.out.println("Thursday");
                break;
            default: // executes if no case matches
                System.out.println("Other day");
                break;
        }

        /******* FOR LOOP ******/
        // loops a fixed number of times
        for(int i=0; i<5; i++){
            System.out.println("For loop iteration " + i);
        }

        /******* WHILE LOOP ******/
        int count = 0;
        while(count < 3){
            System.out.println("While loop iteration " + count);
            count++; // increment counter to avoid infinite loop
        }

        /******* DO-WHILE LOOP ******/
        int n = 0;
        do {
            System.out.println("Do-While loop iteration " + n);
            n++;
        } while(n < 2); // executes at least once

        scanner.close();
    }
}
