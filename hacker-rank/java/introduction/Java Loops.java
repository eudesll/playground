/* 
   HackerRank
   Problem Name: java-if-else
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int t = scan.nextInt();        
        while (t-- > 0) {
            int a = scan.nextInt();
            int b = scan.nextInt();
            int n = scan.nextInt();
            int calc = a;
            
            for (int i = 0; i < n; i++) {
                
                calc += Math.pow(2, i) * b;
                
                System.out.print(calc);
                if (i < n - 1) {
                    System.out.print(" ");
                }
            }
            
            System.out.println();
        }
    }
}