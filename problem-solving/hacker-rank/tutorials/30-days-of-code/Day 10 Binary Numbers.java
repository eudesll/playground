/* 
   HackerRank
   Problem Name: 30-binary-numbers
*/
   
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), c = 0, b = 0;
        
        String binary = Integer.toBinaryString(n);
        for (char ch : binary.toCharArray()) {
            if (ch == '1') {
                c++;
                
                if (c > b) {
                    b = c;
                }
            } else {
                c = 0;
            }
        }
        
        System.out.println(b);
    }
}
