/* 
   HackerRank
   Problem Name: arrays-ds
*/

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        int n;
        List<Integer> ns = new ArrayList<>();

        Scanner in = new Scanner(System.in);

        n = in.nextInt();

        for (int i = 0; i < n; i++) {
        	ns.add(in.nextInt());
        }

        Collections.reverse(ns);

        for (int i : ns) {
        	System.out.print(i + " ");
        }
    }
}