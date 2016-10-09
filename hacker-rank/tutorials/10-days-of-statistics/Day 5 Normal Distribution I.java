/* 
    HackerRank
    Problem Name: s10-normal-distribution-1
*/
    
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        double mean = 20;
        double sdev = 2;

        System.out.printf("%.3f\n", normal(19.5, mean, sdev));
        System.out.printf("%.3f\n", normal(22, mean, sdev) - normal(20, mean, sdev));

    }
    
    private static double normal(double x, double mean, double sdev) {
        return .5*(1 + erf((x - mean) / (sdev * Math.sqrt(2))));
    }
    
    public static double erf(double z) {
        double t = 1.0 / (1.0 + 0.5 * Math.abs(z));

        // use Horner's method
        double ans = 1 - t * Math.exp( -z*z   -   1.26551223 +
                                            t * ( 1.00002368 +
                                            t * ( 0.37409196 + 
                                            t * ( 0.09678418 + 
                                            t * (-0.18628806 + 
                                            t * ( 0.27886807 + 
                                            t * (-1.13520398 + 
                                            t * ( 1.48851587 + 
                                            t * (-0.82215223 + 
                                            t * ( 0.17087277))))))))));
        if (z >= 0) return  ans;
        else        return -ans;
    }
}