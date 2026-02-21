package Java;

/******* GENERICS ******/

import java.util.ArrayList;

public class Generics {

    /******* GENERIC METHOD ******/

    public static <T> void printArray(T[] array){
        for(T element : array){
            System.out.println(element);
        }
    }

    public static void main(String[] args){

        Integer[] intArr = {1,2,3};
        String[] strArr = {"Hello","World"};

        printArray(intArr); // works for Integer
        printArray(strArr); // works for String

        /******* GENERIC CLASS ******/

        class Box<T>{
            private T value;
            Box(T value){ this.value = value; }
            public T getValue(){ return value; }
        }

        Box<String> stringBox = new Box<>("Java");
        System.out.println("Box contains: " + stringBox.getValue());

        /******* NOTES ******/

        // Generics allow type-safe reusable code
        // Works for methods and classes
        // Avoid casting and ClassCastException
    }
}