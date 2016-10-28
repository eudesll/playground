/* 
   HackerRank
   Problem Name: sparse-arrays
*/

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);        
        HashMap<String, Integer> textQt = new HashMap<>();
        
        int n = in.nextInt();        
        for (int i = 0; i < n; i++) {
            String text = in.next();
            
            if (textQt.get(text) == null) {
                textQt.put(text, 0);
            }
            
            textQt.put(text, textQt.get(text) + 1);
        }
        
        n = in.nextInt();        
        for (int i = 0; i < n; i++) {
            String text = in.next();
            
            if (textQt.get(text) == null) {
                System.out.println(0);
            } else {
                System.out.println(textQt.get(text));
            }
        }
    }
}