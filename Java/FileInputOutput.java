package Java;

/******* FILE INPUT/OUTPUT ******/

import java.io.*;

public class FileInputOutput {

    public static void main(String[] args){

        /******* WRITING TO FILE ******/

        try{
            PrintWriter writer = new PrintWriter("example.txt"); // create/write file
            writer.println("Hello World!");
            writer.println("Java File I/O Example.");
            writer.close(); // always close file
        } catch (IOException e){
            System.out.println("Error writing file: " + e.getMessage());
        }

        /******* READING FROM FILE ******/

        try{
            BufferedReader reader = new BufferedReader(new FileReader("example.txt"));
            String line;
            while((line = reader.readLine()) != null){
                System.out.println(line); // print each line
            }
            reader.close();
        } catch(IOException e){
            System.out.println("Error reading file: " + e.getMessage());
        }

        /******* NOTES ******/

        // FileReader/BufferedReader read files line by line
        // PrintWriter writes to files
        // Always close streams to avoid resource leaks
    }
}