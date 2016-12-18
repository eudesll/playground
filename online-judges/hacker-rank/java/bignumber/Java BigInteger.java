/* 
   HackerRank
   Problem Name: java-biginteger
*/

import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Solution {

    public static void main(String[] args) {        
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        
        BigInteger aB = new BigInteger(a);
        BigInteger bB = new BigInteger(b);
        
        System.out.println(aB.add(bB));
        System.out.println(aB.multiply(bB));
    }
}