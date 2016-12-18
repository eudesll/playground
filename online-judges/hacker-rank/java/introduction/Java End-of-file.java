/* 
   HackerRank
   Problem Name: java-end-of-file
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int count = 1;
        
        while (in.hasNext()) {
            System.out.println(count++ + " " + in.nextLine());
        }
    }
}