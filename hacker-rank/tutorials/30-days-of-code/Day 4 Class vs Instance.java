/* 
   HackerRank
   Problem Name: 30-class-vs-instance
*/

import java.io.*;
import java.util.*;

public class Person {
    private int age;	
  
	public Person(int initialAge) {
  		age = initialAge;
        
        if (age < 0) {
            System.out.println("Age is not valid, setting age to 0.");
            age = 0;
        }
	}

	public void amIOld() {
        String res = "You are old.";
        
  		if (age < 13) {
            res = "You are young.";
        } else if (age < 18) {
            res = "You are a teenager.";
        }
        
        System.out.println(res);
	}

	public void yearPasses() {
  		age++;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		for (int i = 0; i < T; i++) {
			int age = sc.nextInt();
			Person p = new Person(age);
			p.amIOld();
			for (int j = 0; j < 3; j++) {
				p.yearPasses();
			}
			p.amIOld();
			System.out.println();
        	}
		sc.close();
    	}	
}
