package main

import (
	"./q1"
	"./q2"
	"./q3"

	r "../runner"
)

func main() {
	questions := []func(){q1.Solution, q2.Solution, q3.Solution}
	r.RunSolutions(questions)
}
