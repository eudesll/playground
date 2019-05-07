package questions

import "fmt"

// ---------------------------------------------------------
// EXERCISE: Package Variable
//
//  1. Declare a variable in the package-scope
//
//  2. Observe whether something happens when you don't
//     use it
// ---------------------------------------------------------

var isLiquid = true

//Q10 solution
func Q10() {
	fmt.Println(isLiquid)
}
