package questions

import "fmt"

// ---------------------------------------------------------
// EXERCISE: Short Discard
//
// 	1. Short declare two bool variables
//     (use multiple short declaration syntax)
//
//  2. Initialize both variables to true
//
//  3. Change your declaration and
//     discard the 2nd variable's value
//     using the blank-identifier
//
//  4. Print only the 1st variable
//
// EXPECTED OUTPUT
//  true
// ---------------------------------------------------------

//Q5 solution
func Q5() {
	a, _ := true, true

	fmt.Println(a)
}
