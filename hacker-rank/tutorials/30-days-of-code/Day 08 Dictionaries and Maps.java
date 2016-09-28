/* 
   HackerRank
   Problem Name: 30-dictionaries-and-maps
*/

import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        
        HashMap<String, Integer> dict = new HashMap<>();
        
        for(int i = 0; i < n; i++){
            String name = in.next();
            int phone = in.nextInt();
            

            dict.put(name, phone);
        }
        
        while(in.hasNext()){
            String s = in.next();
            
            if (dict.containsKey(s)) {
                System.out.println(s + "=" + dict.get(s));
            } else {
                System.out.println("Not found");
            }
        }
        
        in.close();
    }
}
