package main

import (
	r "../../runner"
	qs "./questions"
)

func main() {
	questions := []func(){qs.Q1, qs.Q2, qs.Q3, qs.Q4, qs.Q5}
	r.RunSolutions(questions)
}
