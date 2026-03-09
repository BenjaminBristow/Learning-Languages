/*
===========================================================================
ADVANCED JAVA HANDBOOK (DETAILED COMMENTS)
===========================================================================
This handbook covers Java from basics to advanced concepts.
- Every section includes detailed comments explaining how and why things work.
- Advanced topics include comprehensive explanations for understanding, usage, and pitfalls.
- Concepts are explained progressively: simple concepts first, then more complex.
===========================================================================*/

import java.util.*;           // Collections: List, Set, Map
import java.io.*;             // File I/O: FileReader, BufferedReader, FileWriter
import java.util.function.*;  // Functional interfaces: Predicate, Function, Consumer

// The main class containing the Java handbook examples
public class JavaHandbook {

    /* =========================================================================
    1. VARIABLES & DATA TYPES
    =========================================================================*/
    public static void main(String[] args) {

        // Primitive types: store simple values directly in memory
        int age = 25;           // Integer: whole number
        double pi = 3.14159;    // Double precision decimal, good for calculations
        float e = 2.71828f;     // Single precision decimal (less memory, less precision)
        char initial = 'A';     // Single character
        boolean isActive = true; // Logical true/false

        // Reference type: store reference to object on the heap
        String name = "Alice";  // Strings are objects, not primitive arrays

        // Printing primitive and reference types
        System.out.println("Age: " + age + ", Pi: " + pi + ", e: " + e);
        System.out.println("Initial: " + initial + ", Name: " + name + ", Active: " + isActive);

        /*
        Explanation:
        - Primitive types are simple and efficient, stored on the stack.
        - Reference types (Objects) are stored on the heap; variables hold references.
        - Strings are immutable in Java: every modification creates a new String.
        - Benefits: type safety, memory predictability, clearer semantics.
        */

        /* =========================================================================
        2. OPERATORS
        =========================================================================*/
        int a = 10, b = 3;
        System.out.println("Addition: " + (a + b));         // Sum
        System.out.println("Subtraction: " + (a - b));      // Difference
        System.out.println("Multiplication: " + (a * b));   // Product
        System.out.println("Integer Division: " + (a / b)); // Truncates decimal
        System.out.println("Modulo (remainder): " + (a % b));

        /*
        Explanation:
        - Integer division truncates decimal, to preserve precision use double casting:
          double result = (double)a / b;
        - Modulo is useful for cyclic patterns, checking even/odd numbers, array wrapping.
        - Operator precedence matters: use parentheses to ensure correct order.
        */

        /* =========================================================================
        3. CONDITIONALS
        =========================================================================*/
        if(a > b) {
            System.out.println(a + " is greater than " + b);
        } else if(a == b) {
            System.out.println(a + " equals " + b);
        } else {
            System.out.println(a + " is less than " + b);
        }

        /*
        Explanation:
        - Conditionals require boolean expressions.
        - else-if allows multiple alternative conditions.
        - Benefit: improves program readability, avoids nested if statements for multiple options.
        - Best practice: handle all possible conditions to avoid unexpected behavior.
        */

        /* =========================================================================
        4. LOOPS
        =========================================================================*/
        // For loop: ideal when the number of iterations is known
        for(int i = 0; i < 5; i++) {
            System.out.println("For loop iteration: " + i);
        }

        // While loop: executes while condition is true
        int count = 0;
        while(count < 3) {
            System.out.println("While loop count: " + count);
            count++;
        }

        // Do-while loop: executes at least once
        int dw = 0;
        do {
            System.out.println("Do-while loop: " + dw);
            dw++;
        } while(dw < 3);

        /*
        Explanation:
        - Loops reduce repetitive code.
        - for: known iteration count
        - while: unknown iteration count, executes conditionally
        - do-while: guarantees at least one execution
        - Use break/continue carefully: can simplify but also confuse logic if overused.
        */

        /* =========================================================================
        5. METHODS / FUNCTIONS
        =========================================================================*/
        int sumResult = sum(5, 7); // Calls sum method
        System.out.println("Sum result: " + sumResult);

        greet("Alice");

        /*
        Explanation:
        - Methods encapsulate reusable logic.
        - Java passes primitives by value; objects are passed by reference (reference itself is passed by value).
        - Benefits:
          * Improves readability and maintainability
          * Reduces code duplication
        */

        /* =========================================================================
        6. OBJECT-ORIENTED PROGRAMMING
        =========================================================================*/
        Person aliceObj = new Person("Alice", 25); // Create Person object
        aliceObj.greet();                            // Call method
        aliceObj.setAge(26);                         // Update age safely via setter
        System.out.println("Updated age: " + aliceObj.getAge());

        /*
        Explanation:
        - Encapsulation: private fields, accessed through getters/setters.
        - Protects internal state from unwanted changes.
        - Benefits: maintainable, safer code.
        - Pitfall: exposing internal fields directly violates encapsulation.
        */

        /* =========================================================================
        7. INHERITANCE & POLYMORPHISM
        =========================================================================*/
        Employee bob = new Employee("Bob", 30, "Developer");
        bob.greet(); // Inherited method
        bob.work();  // Employee-specific method

        // Polymorphism: base class reference points to derived object
        Person p = new Employee("Charlie", 28, "Designer");
        p.greet(); // Calls overridden method if exists

        /*
        Explanation:
        - Inheritance allows code reuse (Person -> Employee)
        - Polymorphism allows treating objects of different subclasses uniformly
        - Virtual dispatch in Java happens automatically via overridden methods
        - Benefits: flexible, extensible, reduces code duplication
        - Pitfall: excessive inheritance can make code rigid; prefer composition when possible.
        */

        /* =========================================================================
        8. INTERFACES & ABSTRACT CLASSES
        =========================================================================*/
        Shape shape = new Circle(5);
        shape.draw();

        Drawable drawable = new Circle(10);
        drawable.draw();

        /*
        Explanation:
        - Abstract classes can provide partial implementation.
        - Interfaces define a contract (methods that must be implemented)
        - Java supports multiple interface inheritance, but only single class inheritance
        - Benefit: design flexibility, polymorphic behavior
        - Pitfall: implementing too many interfaces may lead to complex dependencies
        */

        /* =========================================================================
        9. EXCEPTIONS
        =========================================================================*/
        try {
            int x = 10 / 0;
        } catch(ArithmeticException e1) {
            System.out.println("Cannot divide by zero: " + e1.getMessage());
        } finally {
            System.out.println("Finally always executes for cleanup");
        }

        /*
        Explanation:
        - Checked vs unchecked exceptions: compiler enforces checked handling
        - finally ensures cleanup regardless of exceptions
        - Best practice: catch specific exceptions, not generic Exception
        - Benefit: robust, safe error handling
        */

        /* =========================================================================
        10. COLLECTIONS FRAMEWORK
        =========================================================================*/
        List<String> fruits = new ArrayList<>();
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("Apple"); // Duplicates allowed

        System.out.println("List elements: " + fruits);

        Set<String> uniqueFruits = new HashSet<>(fruits); // Removes duplicates
        System.out.println("Unique fruits: " + uniqueFruits);

        Map<String, Integer> ages = new HashMap<>();
        ages.put("Alice", 25);
        ages.put("Bob", 30);
        System.out.println("Map entries:");
        for(Map.Entry<String, Integer> entry : ages.entrySet())
            System.out.println(entry.getKey() + ": " + entry.getValue());

        /*
        Explanation:
        - List: ordered, duplicates allowed
        - Set: unordered, unique
        - Map: key-value pairs, efficient lookups
        - Benefits: standardized, reusable, type-safe data structures
        - Pitfall: use correct collection type for your requirements
        */

        /* =========================================================================
        11. GENERICS
        =========================================================================*/
        Box<Integer> intBox = new Box<>(123);
        Box<String> strBox = new Box<>("Hello Generics");

        System.out.println("Box integer: " + intBox.getValue());
        System.out.println("Box string: " + strBox.getValue());

        /*
        Explanation:
        - Generics allow type-agnostic programming
        - Avoids casting and improves compile-time type safety
        - Benefits: flexible and maintainable code
        - Pitfall: type erasure removes runtime type info; cannot use instanceof on generic type directly
        */

        /* =========================================================================
        12. FILE HANDLING
        =========================================================================*/
        try {
            FileWriter writer = new FileWriter("example.txt");
            writer.write("Hello Java Handbook\n");
            writer.close();

            BufferedReader reader = new BufferedReader(new FileReader("example.txt"));
            String line;
            while((line = reader.readLine()) != null) {
                System.out.println("Read: " + line);
            }
            reader.close();
        } catch(IOException ex) {
            System.out.println("File I/O error: " + ex.getMessage());
        }

        /*
        Explanation:
        - FileWriter/FileReader provide character stream access
        - BufferedReader improves performance with buffering
        - Always close streams to free resources
        - Benefit: object-oriented, safe, cross-platform file handling
        - Pitfall: forgetting to handle IOException can crash the program
        */
    }

    /* =========================================================================
    METHODS DEFINITIONS
    =========================================================================*/
    public static int sum(int x, int y) {
        return x + y; // Simple addition
    }

    public static void greet(String name) {
        System.out.println("Hello " + name);
    }
}

/* =========================================================================
CLASSES FOR OOP EXAMPLES
===========================================================================*/
class Person {
    private String name; // Encapsulation: keep fields private
    private int age;

    public Person(String name, int age) {
        this.name = name; // Constructor initializes fields
        this.age = age;
    }

    public void greet() {
        System.out.println("Hello, my name is " + name + " and I am " + age);
    }

    // Encapsulation: getters and setters control access to fields
    public int getAge() { return age; }
    public void setAge(int age) { this.age = age; }
}

class Employee extends Person {
    private String position;
    public Employee(String name, int age, String position) {
        super(name, age); // Call parent constructor
        this.position = position;
    }
    public void work() {
        System.out.println(super.getAge() + "-year-old " + "works as " + position);
    }
}

abstract class Shape {
    public abstract void draw(); // Must be implemented by subclasses
}

interface Drawable {
    void draw(); // Interface method
}

class Circle extends Shape implements Drawable {
    private double radius;
    public Circle(double r) { radius = r; }
    public void draw() { System.out.println("Drawing a circle of radius " + radius); }
}

class Box<T> {
    private T value;         // Generic type
    public Box(T val) { value = val; }
    public T getValue() { return value; }
}

