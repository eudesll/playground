package questions

import (
	"fmt"
	"os"
)

// ---------------------------------------------------------
// EXERCISE: Count the Arguments
//
//  Print the count of the command-line arguments
//
// INPUT
//  bilbo balbo bungo
//
// EXPECTED OUTPUT
//  There are 3 names.
// ---------------------------------------------------------

//Q1 solution
func Q1() {
	count := len(os.Args)

	fmt.Printf("There are %d names.\n", count)
}
