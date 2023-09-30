import java.lang.*;
import java.io.*;
import java.util.*;

public class Example {

    public static void main(String[]args)throws IOException {

        BufferedReader read = new BufferedReader(new FileReader("C:/Users/abusa/Downloads/Java/input.txt"));

        int n = Integer.parseInt(read.readLine());
        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(read.readLine());
        }

        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }


        System.out.println("hello");
    }
}