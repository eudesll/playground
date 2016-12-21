/* 
   HackerRank
   Problem Name: s10-interquartile-range
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
        List<Integer> nums = new ArrayList<>();
        
        for (int i = 0; i < n; i++) {
            nums.add(in.nextInt());
        }
        
        for (int i = 0; i < n; i++) {
            int qt = in.nextInt();
            
            for (int j = 0; j < qt - 1; j++) {
                nums.add(nums.get(i));
            }
        }
        
        Collections.sort(nums);
        
        int size = nums.size();
        List<Integer> fH = nums.subList(0, size / 2);
        List<Integer> lH = nums.subList(size % 2 == 0 ? size / 2 : size / 2 + 1, size);
        
        double q1 = median(fH);
        double q3 = median(lH);
        
        System.out.println(String.format("%.1f", q3 - q1));
    }
    
    private static double median(List<Integer> nums) {
        int size = nums.size();

        if (size % 2 == 0) {
            return (nums.get(size / 2 - 1) + nums.get(size / 2)) / 2.0;
        } else {
            return (double) nums.get(size / 2);
        }
    }
}
