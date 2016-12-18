/* 
   HackerRank
   Problem Name: s10-weighted-mean
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), dividend = 0, divisor = 0;
        int[] grades = new int[n], weights = new int[n];
        
        for (int i = 0; i < n; i++) {
            grades[i] = in.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            weights[i] = in.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            dividend += grades[i] * weights[i];
            divisor += weights[i];
        }
        
        double result = (double)dividend / divisor;
        System.out.println(String.format("%.1f", result));
    }
}
