package questions

import "fmt"

// ---------------------------------------------------------
// EXERCISE: Swapper #2
//
//  1. Swap the values of `red` and `blue` variables
//
//  2. Print them
//
// EXPECTED OUTPUT
//  blue red
// ---------------------------------------------------------

//Q9 solution
func Q9() {
	red, blue := "red", "blue"
	red, blue = blue, red

	fmt.Println(red, blue)
}
