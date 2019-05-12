package questions

import "fmt"

// ---------------------------------------------------------
// EXERCISE: Print the Temperature
//
//  Print the current temperature in your area using Printf
//
// NOTE
//  Do not use %v verb
//  Output "shouldn't" be like 29.500000
//
// EXPECTED OUTPUT
//  Temperature is 29.5 degrees.
// ---------------------------------------------------------

//Q4 solution
func Q4() {
	temp := 29.500000

	fmt.Printf("Temperature is %.1f degrees.\n", temp)
}
