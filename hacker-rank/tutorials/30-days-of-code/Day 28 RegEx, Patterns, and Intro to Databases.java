/* 
   HackerRank
   Problem Name: 30-regex-patterns
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        List<String> names = new ArrayList<>();
        
        String emailRegEx = ".+@gmail\\.com$";
        Pattern pattern = Pattern.compile(emailRegEx);
        
        for(int a0 = 0; a0 < N; a0++){
            String firstName = in.next();
            String emailID = in.next();
            
            if (pattern.matcher(emailID).find()){
                names.add(firstName);
            }
        }
        
        Collections.sort(names);
        for (String name : names){
            System.out.println(name);
        }
    }
}
