/* 
   HackerRank
   Problem Name: 30-operators
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class Arithmetic {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double mealCost = scan.nextDouble(), tip, tax; // original meal price
        int tipPercent = scan.nextInt(); // tip percentage
        int taxPercent = scan.nextInt(); // tax percentage
        scan.close();
      
        // Write your calculation code here.
        tip = mealCost * (tipPercent / 100.0);
        tax = mealCost * (taxPercent / 100.0);
        
        // cast the result of the rounding operation to an int and save it as totalCost 
        int totalCost = (int) Math.round(mealCost + tip + tax);
      
        // Print your result
        System.out.println("The total meal cost is " + totalCost + " dollars.");
    }
}
