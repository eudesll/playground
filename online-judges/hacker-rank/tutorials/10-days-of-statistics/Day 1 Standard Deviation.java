/* 
   HackerRank
   Problem Name: s10-standard-deviation
*/

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt(), sum = 0;
        double mean, stdVariation = 0.0;
        List<Integer> nums = new ArrayList<>();

        for (int i = 0; i < n; i++) {
        	int num = in.nextInt();
        	sum += num;

        	nums.add(num);
        }

        mean = (double)sum / n;

        for (Integer i : nums) {
        	stdVariation += Math.pow(i - mean, 2);
        }

        stdVariation = Math.sqrt(stdVariation / n);

        System.out.println(String.format("%.1f", stdVariation));
    }
}