package main

import r "../../runner"

func main() {
	questions := []func(){q1, q2}
	r.RunSolutions(questions)
}
