package questions

import "fmt"

// ---------------------------------------------------------
// EXERCISE: Multiple Short Declare #2
//
// 	1. Declare two variables using short declaration
//
//  2. `a` variable's value should be 42
//  3. `c` variable's value should be "good"
//
// EXPECTED OUTPUT
//  42 good
// ---------------------------------------------------------

//Q3 solution
func Q3() {
	a, c := 42, "good"

	fmt.Println(a, c)
}
