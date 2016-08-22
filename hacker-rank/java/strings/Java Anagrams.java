/* 
   HackerRank
   Problem Name: java-anagrams
*/

import java.io.*;
import java.util.*;

public class Solution {

	static boolean isAnagram(String a, String b) {
        
		a = a.toLowerCase();
		b = b.toLowerCase();

		char[] c = a.toCharArray(), d = b.toCharArray();
		Arrays.sort(c);
		Arrays.sort(d);
		a = new String (c);
		b = new String (d);
		
		return a.equals(b);        
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}