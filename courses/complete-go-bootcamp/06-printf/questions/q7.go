package questions

import "fmt"

// ---------------------------------------------------------
// EXERCISE: Print the Type #2
//
//  Print the type and value of 3.14 using fmt.Printf
//
// EXPECTED OUTPUT
//  Type of 3.14 is float64
// ---------------------------------------------------------

//Q7 solution
func Q7() {
	fmt.Printf("Type of %f is %[1]T\n", 3.14)
}
