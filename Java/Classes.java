package Java;

/******* CLASSES AND OBJECTS (OOP) ******/

public class Classes {

    /******* CLASS DEFINITION ******/

    // Define a class representing a student
    static class Student {
        String name;
        int age;
        double gpa;
        boolean isFullTime;

        // Constructor: initializes object
        Student(String name, int age, double gpa, boolean isFullTime){
            this.name = name;
            this.age = age;
            this.gpa = gpa;
            this.isFullTime = isFullTime;
        }

        // Method to print student info
        void printInfo(){
            System.out.println("Name: " + name);
            System.out.println("Age: " + age);
            System.out.println("GPA: " + gpa);
            System.out.println("Full-time: " + (isFullTime ? "Yes" : "No"));
        }
    }

    public static void main(String[] args) {

        Student student1 = new Student("Spongebob", 20, 3.5, true);
        student1.printInfo(); // call method to print

        /******* NOTES ******/

        // Classes allow grouping data (attributes) and behavior (methods)
        // Objects are instances of classes
        // Constructors initialize objects
        // Methods define behaviors
    }
}
