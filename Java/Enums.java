package Java;

/******* ENUMS ******/

public class Enums {

    /******* DECLARING ENUM ******/

    // Enum is a special type representing a set of constants
    enum Day {
        MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
    }

    public static void main(String[] args) {

        Day today = Day.THURSDAY; // assign enum constant

        // Enum ordinal gives numeric position (starts at 0)
        System.out.println("Numeric value of today: " + today.ordinal());
        System.out.println("Today is: " + today);

        /******* USING ENUM IN IF STATEMENTS ******/

        if(today == Day.SATURDAY || today == Day.SUNDAY){
            System.out.println("It's the weekend!");
        } else {
            System.out.println("It's a weekday.");
        }

        /******* ENUM WITH CUSTOM VALUES ******/

        // You can assign numbers manually inside enum
        enum Status {
            SUCCESS(1), PENDING(2), FAILURE(3);

            private final int code;
            Status(int code){ this.code = code; }
            public int getCode(){ return code; }
        }

        Status currStatus = Status.SUCCESS;
        System.out.println("Status: " + currStatus + " Code: " + currStatus.getCode());

        /******* WHY ENUMS ******/

        // Enums make code more readable than using int constants
        // Useful for days, status codes, menu options, etc.
    }
}