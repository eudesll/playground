/* 
   HackerRank
   Problem Name: 30-running-time-and-complexity
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        
        for (int i = 0; i < n; i++) {
            String result = "Prime";
            int num = in.nextInt();
            
            if (num == 1) {
                result = "Not prime";
            }
            
            for (int j = 2; j <= Math.sqrt(num); j++) {
                if (num % j == 0) {
                    result = "Not prime";
                    break;
                }
            }
            
            System.out.println(result);
        }
    }
}
