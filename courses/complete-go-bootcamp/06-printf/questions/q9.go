package questions

import "fmt"

// ---------------------------------------------------------
// EXERCISE: Print the Type #4
//  Print the type and value of true using fmt.Printf
//
// EXPECTED OUTPUT
//  Type of true is bool
// ---------------------------------------------------------

//Q9 solution
func Q9() {
	fmt.Printf("Type of %t is %[1]T\n", true)
}
