package main

import (
	"./q1"
	"./q2"
	"./q3"

	r "../../runner"
)

func main() {
	questions := []func(){q1.Q1, q2.Q2, q3.Q3}
	r.RunSolutions(questions)
}
