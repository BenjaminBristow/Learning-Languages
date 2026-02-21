package Java;

/******* INHERITANCE AND POLYMORPHISM ******/

public class InheritanceAndPolymorphism {

    /******* BASE CLASS ******/

    static class Animal {
        String name;
        Animal(String name){ this.name = name; }
        void speak(){ System.out.println(name + " makes a sound."); }
    }

    /******* DERIVED CLASS ******/

    static class Dog extends Animal {
        Dog(String name){ super(name); } // call parent constructor
        @Override
        void speak(){ System.out.println(name + " barks."); } // override method
    }

    public static void main(String[] args) {

        Animal a = new Animal("GenericAnimal");
        Dog d = new Dog("Buddy");

        a.speak(); // prints generic sound
        d.speak(); // prints overridden bark

        /******* POLYMORPHISM ******/

        Animal poly = new Dog("Max");
        poly.speak(); // calls Dog's speak because of runtime polymorphism

        /******* NOTES ******/

        // Inheritance allows code reuse and hierarchy
        // Polymorphism allows objects to take many forms
        // @Override ensures child method replaces parent
    }
}
