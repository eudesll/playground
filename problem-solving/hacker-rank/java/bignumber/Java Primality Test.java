/* 
   HackerRank
   Problem Name: java-primality-test
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	private static final int CERTAINTY = 100;

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		BigInteger n = in.nextBigInteger();      
		System.out.println(n.isProbablePrime(CERTAINTY) ? "prime" : "not prime");

		in.close();
	}
}
