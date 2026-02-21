package Java;

/******* COLLECTIONS ******/

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;

public class Collections {

    public static void main(String[] args){

        /******* ARRAYLIST ******/

        ArrayList<String> list = new ArrayList<>();
        list.add("Apple");
        list.add("Banana");
        list.add("Orange");

        for(String fruit : list){
            System.out.println(fruit);
        }

        /******* HASHMAP ******/

        HashMap<String, Integer> map = new HashMap<>();
        map.put("Apple", 2);
        map.put("Banana", 3);

        for(String key : map.keySet()){
            System.out.println(key + " : " + map.get(key));
        }

        /******* HASHSET ******/

        HashSet<Integer> set = new HashSet<>();
        set.add(1);
        set.add(2);
        set.add(2); // duplicate ignored

        System.out.println("HashSet contents: " + set);

        /******* NOTES ******/

        // Collections framework provides dynamic data structures
        // ArrayList = dynamic array
        // HashMap = key-value pairs
        // HashSet = unique elements
    }
}
