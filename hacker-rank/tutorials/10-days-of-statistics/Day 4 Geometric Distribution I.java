/* 
	HackerRank
	Problem Name: s10-geometric-distribution-1
*/
	
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {

         Scanner scan = new Scanner(System.in);              
         int n = scan.nextInt();
         int f = scan.nextInt();
         int x  = scan.nextInt();
         
         double p = (double) n / f;
         double resultadoGeo = (Math.pow((1 - p), (x - 1))) * p;
        
         System.out.println(Math.round((resultadoGeo) * 1000.0) / 1000.0);
        
        scan.close();
    }

}