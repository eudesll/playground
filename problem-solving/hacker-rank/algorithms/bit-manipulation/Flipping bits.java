/* 
   HackerRank
   Problem Name: flipping-bits
*/

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int n = in.nextInt();
        
        while (n-- > 0) {
            long num = in.nextLong();
            System.out.println(~num + 0x0000000100000000L);
        }
    }
}