/* 
   HackerRank
   Problem Name: 30-nested-logic
*/

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        long fine = 0;
        String actual = in.nextLine();
        String expect = in.nextLine();

        SimpleDateFormat dateFormat = new SimpleDateFormat("dd MM yyyy");

        try {
            Calendar actualDate = Calendar.getInstance();
            Calendar expectDate = Calendar.getInstance();

            actualDate.setTime(dateFormat.parse(actual));
            expectDate.setTime(dateFormat.parse(expect));

            if (actualDate.get(Calendar.YEAR) > expectDate.get(Calendar.YEAR)) {
                fine = 10000;
            } else {
                if (actualDate.get(Calendar.YEAR) == expectDate.get(Calendar.YEAR)) {
                    if (actualDate.get(Calendar.MONTH) > expectDate.get(Calendar.MONTH)) {
                        fine = 500 * (actualDate.get(Calendar.MONTH) - expectDate.get(Calendar.MONTH));
                    } else if (actualDate.get(Calendar.DAY_OF_MONTH) > expectDate.get(Calendar.DAY_OF_MONTH)) {
                        fine = 15 * (actualDate.get(Calendar.DAY_OF_MONTH) - expectDate.get(Calendar.DAY_OF_MONTH));
                    }
                }
            }
            
            System.out.println(fine);

        } catch (ParseException e) {
            e.printStackTrace();
        }
    }
}