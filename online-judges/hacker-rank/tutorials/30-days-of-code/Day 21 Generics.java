/* 
   HackerRank
   Problem Name: 30-generics
*/

import java.lang.reflect.Method;

class Solution {
    //Write your code here
    public static void printArray(Object[] arr) {
        for (Object e : arr) {
            System.out.println(e);
        }
    }
    
    public static void main(String args[]){
        Integer[] intArray = { 1, 2, 3 };
        String[] stringArray = { "Hello", "World" };
        
        printArray( intArray  );
        printArray( stringArray );
        
        if(Solution.class.getDeclaredMethods().length > 2){
            System.out.println("You should only have 1 method named printArray.");
        }
    }
}
