/* 
   HackerRank
   Problem Name: java-strings-introduction
*/

import java.io.*;
import java.util.*;

public class Solution {

	static String capitalize(String s){
		return s.substring(0,1).toUpperCase() + s.substring(1).toLowerCase();
	}

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        
        
        System.out.println(A.length + B.length);
        System.out.println(A.compareTo(B) > 0 ? "Yes" : "No");
		System.out.println(capitalize(A) + " " + capitalize(B));
        
    }
}