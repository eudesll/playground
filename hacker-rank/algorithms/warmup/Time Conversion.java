/* 
   HackerRank
   Problem Name: time-conversion
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String time = in.next();
        
        String nums[] = time.split(":");
        String period = nums[2].substring(2,4);
        
        int hour = Integer.valueOf(nums[0]);

        if (period.equals("PM") && hour != 12) {
            hour += 12;
        } else if (period.equals("AM") && hour == 12) {
            hour = 0;
        }
        
        int min = Integer.valueOf(nums[1]);
        int sec = Integer.valueOf(nums[2].substring(0,2));
        
        System.out.println(String.format("%02d:%02d:%02d", hour, min, sec));
    }
}
