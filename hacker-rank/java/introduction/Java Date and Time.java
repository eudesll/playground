/* 
   HackerRank
   Problem Name: java-date-and-time
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int month = in.nextInt();
        int day = in.nextInt();
        int year = in.nextInt();
        
        Calendar calendar = Calendar.getInstance();
		calendar.set(year, month - 1, day);

		System.out.println(new DateFormatSymbols().getWeekdays()[calendar.get(Calendar.DAY_OF_WEEK)].toUpperCase());
    }
}