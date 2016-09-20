/* 
   HackerRank
   Problem Name: s10-quartiles
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
        List<Integer> fHalf = new ArrayList<>();
        List<Integer> lHalf = new ArrayList<>();
        double q1 = 0, q2 = -1, q3 = 0;
        
        for (int i = 0; i < n; i++) {
            nums.add(in.nextInt());
        }
        
        Collections.sort(nums);
        fHalf = nums.subList(0, n / 2);
        lHalf = nums.subList(nums.size() % 2 == 0 ? n / 2 : n / 2 + 1, nums.size());            
        
        System.out.println(median(fHalf));
        System.out.println(median(nums));
        System.out.println(median(lHalf));
    }
    
    private static int median(List<Integer> nums) {
        int size = nums.size();
        
        if (size % 2 == 0) {
            return (nums.get(size / 2 - 1) + nums.get(size / 2)) / 2;
        } else {
            return nums.get(size / 2);
        }
    }
}
