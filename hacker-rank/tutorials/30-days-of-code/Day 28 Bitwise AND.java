/* 
   HackerRank
   Problem Name: 30-bitwise-and
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            int k = in.nextInt();
            
            int bB = -1;
            for(int i = 1; i <= n; i++) {
                for(int j = i + 1; j <= n; j++) {
                    int num = i & j;
                    if (num > bB && num < k) {
                        bB = i & j;
                    }
                }
            }
            
            System.out.println(bB);
        }
    }
}
