package main

import "fmt"

// ---------------------------------------------------------
// EXERCISE: Print the literals
//
//  1. Print a few integer literals
//
//  2. Print a few float literals
//
//  3. Print true and false bool literals
//
//  4. Print your name using a string literal
//
//  5. Print a non-english sentence using a string literal
//
// ---------------------------------------------------------

func q1() {
	// Use fmt.Println()

	fmt.Println(1, 2, 3, 40, 5000)
	fmt.Println(1., .7, 10.9, -100.2)
	fmt.Println(true, false)
	fmt.Println("YourName")
	fmt.Println("你的名字")
}
