/* 
   HackerRank
   Problem Name: 30-inheritance
*/

import java.util.*;

class Person {
	protected String firstName;
	protected String lastName;
	protected int idNumber;
	
	// Constructor
	Person(String firstName, String lastName, int identification){
		this.firstName = firstName;
		this.lastName = lastName;
		this.idNumber = identification;
	}
	
	// Print person data
	public void printPerson(){
		 System.out.println(
				"Name: " + lastName + ", " + firstName 
			+ 	"\nID: " + idNumber); 
	}
	 
}

class Student extends Person{
	private int[] testScores;    
    private double average = 0;
    private char grade;
    
    public Student(String firstName, String lastName, int identification, int[] testScores) {
        super(firstName, lastName, identification);
        
        this.testScores = testScores;
        
        for (int score : testScores) {
            average += score;
        }
        
        average /= testScores.length;
        
        if (average < 40) {
            grade = 'T';
        } else if (average < 55) {
            grade = 'D';
        } else if (average < 70) {
            grade = 'P';
        } else if (average < 80) {
            grade = 'A';
        } else if (average < 90) {
            grade = 'E';
        } else if (average <= 100) {
            grade = 'O';
        }
    }
    
    public char calculate() {
        return grade;
    }
}

class Solution {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String firstName = scan.next();
		String lastName = scan.next();
		int id = scan.nextInt();
		int numScores = scan.nextInt();
		int[] testScores = new int[numScores];
		for(int i = 0; i < numScores; i++){
			testScores[i] = scan.nextInt();
		}
		scan.close();
		
		Student s = new Student(firstName, lastName, id, testScores);
		s.printPerson();
		System.out.println("Grade: " + s.calculate());
	}
}
