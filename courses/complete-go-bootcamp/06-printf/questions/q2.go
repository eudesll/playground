package questions

import "fmt"

// ---------------------------------------------------------
// EXERCISE: Print Your Name and LastName
//
//  Print your name and lastname using Printf
//
// EXPECTED OUTPUT
//  My name is Inanc and my lastname is Gumus.
//
// BONUS
//  Store the formatting specifier (first argument of Printf)
//    in a variable.
//  Then pass it to printf
// ---------------------------------------------------------

//Q2 solution
func Q2() {
	firstName, lastName := "Joao", "Lemos"
	fmt.Printf("My name is %s and my lastname is %s.\n", firstName, lastName)
}
