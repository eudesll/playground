package main

import "fmt"

type fn func()

func main() {
	runSolutions()
}

func runSolutions() {
	runSolution("1", q1)
	runSolution("4", q4)
	runSolution("5", q5)
}

func runSolution(id string, callback fn) {
	fmt.Println("Solution", id)
	callback()
	fmt.Println()
}
