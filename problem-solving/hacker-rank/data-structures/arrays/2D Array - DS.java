/* 
   HackerRank
   Problem Name: 2d-array
*/

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int m[][] = new int[6][6], bVal = Integer.MIN_VALUE;
        
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                m[i][j] = in.nextInt();
            }
        }
        
        for (int i = 1; i < 5; i++) {
            for (int j = 1; j < 5; j++) {
                int val = m[i][j];
                val += m[i - 1][j - 1] + m[i - 1][j] + m[i - 1][j + 1];
                val += m[i + 1][j - 1] + m[i + 1][j] + m[i + 1][j + 1];
                
                if (val > bVal) {
                    bVal = val;
                }
            }
        }
        
        System.out.println(bVal);
    }
}