package Java;

/******* EXCEPTIONS ******/

public class Exceptions {

    public static void main(String[] args){

        /******* TRY-CATCH ******/

        try{
            int x = 0;
            if(x == 0) throw new ArithmeticException("Division by zero!");
            int y = 10 / x; // would crash without try-catch
        }
        catch(ArithmeticException e){
            System.out.println("Error caught: " + e.getMessage());
        }

        /******* MULTIPLE CATCH BLOCKS ******/

        try{
            String str = null;
            System.out.println(str.length()); // NullPointerException
        }
        catch(NullPointerException e){
            System.out.println("Caught NullPointerException!");
        }
        catch(Exception e){
            System.out.println("Caught general exception: " + e.getMessage());
        }

        /******* FINALLY BLOCK ******/

        try{
            System.out.println("Try block running...");
        } finally {
            System.out.println("Finally block always executes.");
        }

        /******* NOTES ******/

        // Exceptions allow graceful error handling
        // Use specific exceptions when possible
        // finally block always runs, used for cleanup
    }
}
