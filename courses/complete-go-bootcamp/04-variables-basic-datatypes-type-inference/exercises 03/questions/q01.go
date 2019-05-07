package questions

import "fmt"

// ---------------------------------------------------------
// EXERCISE: Short Declare
//
//  Declare and then print four variables using
//  the short declaration statement.
//
// EXPECTED OUTPUT
//  i: 314 f: 3.14 s: Hello b: true
// ---------------------------------------------------------

//Q1 solution
func Q1() {
	i, f, s, b := 314, 3.14, "Hello", true

	fmt.Println(
		"i:", i,
		"f:", f,
		"s:", s,
		"b:", b,
	)
}
