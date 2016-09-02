/* 
   HackerRank
   Problem Name: java-priority-queue
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Student {
 
    private int token;
    private String fname;
    private double cgpa;
 
    public Student(int id, String fname, double cgpa) {
        super();
        this.token = id;
        this.fname = fname;
        this.cgpa = cgpa;
    }
 
    public int getToken() {
        return token;
    }
 
    public String getFname() {
        return fname;
    }
 
    public double getCgpa() {
        return cgpa;
    }
}
 
public class Solution {
 
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int totalEvents = Integer.parseInt(in.nextLine());

        final PriorityQueue<Student> q = new PriorityQueue<>((s1, s2) -> {
            final double cgpaDiff = s2.getCgpa() - s1.getCgpa();
            if (cgpaDiff > 0) {
                return 1;
            } else if (cgpaDiff < 0) {
                return -1;
            }

            final int nameCompare = s1.getFname().compareTo(s2.getFname());
            
            if (nameCompare != 0) {
                return nameCompare;
            }
            return s1.getToken() - s2.getToken();
        });

        while (totalEvents > 0) {
            String event = in.next();
 
            switch (event) {
                case "ENTER": {
                    final String name = in.next();
                    final double cgpa = in.nextDouble();
                    final int token = in.nextInt();
                    q.offer(new Student(token, name, cgpa));
 
                }
                break;
                case "SERVED": {
                    q.poll();
                }
                break;
            }

            totalEvents--;
        }

        if (q.isEmpty()) {
            System.out.println("EMPTY");
        } else {

            while (!q.isEmpty()) {
            	System.out.println(q.poll().getFname());
            };
        }
    }
}

