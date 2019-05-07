package runner

import "fmt"

//RunSolutions can run functions that solves the course questions
func RunSolutions(callbacks []func()) {
	for i := range callbacks {
		fmt.Println("Solution", i)
		callbacks[i]()
		fmt.Println()
	}
}
