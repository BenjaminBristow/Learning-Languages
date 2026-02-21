package Java;

/******* INTERFACES AND ABSTRACT CLASSES ******/

public class InterfacesAndAbstractClasses {

    /******* INTERFACE ******/

    interface Vehicle {
        void start(); // abstract method
    }

    /******* ABSTRACT CLASS ******/

    abstract static class Car implements Vehicle {
        String model;
        Car(String model){ this.model = model; }
        abstract void honk(); // abstract method
    }

    /******* CONCRETE CLASS ******/

    static class Tesla extends Car {
        Tesla(String model){ super(model); }

        @Override
        public void start(){ System.out.println(model + " is starting silently."); }

        @Override
        void honk(){ System.out.println(model + " honks: beep beep!"); }
    }

    public static void main(String[] args){
        Tesla t = new Tesla("Tesla Model S");
        t.start();
        t.honk();

        /******* NOTES ******/

        // Interfaces define what methods a class must have (contract)
        // Abstract classes can have both implemented and abstract methods
        // Concrete class provides implementations for all abstract methods
    }
}
