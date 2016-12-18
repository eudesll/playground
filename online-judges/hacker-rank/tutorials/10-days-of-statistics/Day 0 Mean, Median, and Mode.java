/* 
   HackerRank
   Problem Name: s10-basic-statistics
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n, bQt = -1;
        n = scan.nextInt();
        
        long sum = 0, bValue = 0;
        List<Long> nums = new ArrayList<>();
        HashMap<Long, Integer> numsMap = new HashMap<>();
        
        for (int i = 0; i < n; i++) {
            long num = scan.nextLong();
            sum += num;
            
            nums.add(num);
            
            if (numsMap.containsKey(num)) {
                numsMap.put(num, numsMap.get(num) + 1);
            } else {
                numsMap.put(num, 1);
            }
            
            int qt = numsMap.get(num);
            
            if (qt > bQt) {
                bQt = qt;
                bValue = num;
            } else if (qt == bQt && bValue > num) {
                bValue = num;
            }
        }
        
        Collections.sort(nums);
        
        double mean = (double)sum / n;
        double median = ((nums.get(n / 2 - 1) + nums.get(n / 2)) / 2.0);
        
        System.out.println(String.format("%.1f", mean));
        System.out.println(String.format("%.1f", median));
        System.out.println(bValue);
    }
}
