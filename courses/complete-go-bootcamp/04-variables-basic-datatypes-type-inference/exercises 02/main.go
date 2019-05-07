package main

import (
	r "../../runner"
	qs "./questions"
)

func main() {
	questions := []func(){qs.Q1, qs.Q2, qs.Q3, qs.Q4, qs.Q5,
		qs.Q6, qs.Q7, qs.Q8, qs.Q9, qs.Q10, qs.Q11}
	r.RunSolutions(questions)
}
