/* 
   HackerRank
   Problem Name: lonely-integer
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    private static int lonelyInteger(int[] a) {
        int result = 0;

        for (int i = 0; i < a.length; i++) {
            result ^= a[i];
        }

        return result;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        System.out.println(lonelyInteger(a));
    }

}
