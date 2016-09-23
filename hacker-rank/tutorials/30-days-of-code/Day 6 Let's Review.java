/* 
   HackerRank
   Problem Name: 30-loops
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
        while (n-- > 0) {
            String text = in.next();
        
            StringBuffer even = new StringBuffer();
            StringBuffer odd = new StringBuffer();
  

            for (int i = 0; i < text.length(); i++) {
                if (i % 2 == 0) {
                    even.append(text.charAt(i));
                } else {
                    odd.append(text.charAt(i));
                }
            }

            System.out.println(even.toString() + " " + odd.toString());
        }        
    }
}
