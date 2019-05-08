package questions

import (
	"fmt"
	"os"
)

// ---------------------------------------------------------
// EXERCISE: Greet 5 People
//
//  Greet 5 people this time.
//
//  Please do not copy paste from the previous exercise!
//
// RESTRICTION
//  This time do not use variables.
//
// INPUT
//  bilbo balbo bungo gandalf legolas
//
// EXPECTED OUTPUT
//  There are 5 people!
//  Hello great bilbo !
//  Hello great balbo !
//  Hello great bungo !
//  Hello great gandalf !
//  Hello great legolas !
//  Nice to meet you all.
// ---------------------------------------------------------

//Q5 solution
func Q5() {
	fmt.Println("There are", len(os.Args)-1, "people!")
	for i := range os.Args {
		if i != 0 {
			fmt.Println("Hello great", os.Args[i])
		}
	}

	if len(os.Args) > 1 {
		fmt.Println("Nice to meet you all.")
	}
}
