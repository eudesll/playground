package runner

import (
	"fmt"
	"reflect"
	"runtime"
	"strings"
)

//RunSolutions can run functions that solves the course questions
func RunSolutions(callbacks []func()) {
	for i := range callbacks {
		name := getFuncName(callbacks[i])

		fmt.Println("Solution", name)
		callbacks[i]()
		fmt.Println()
	}
}

func getFuncName(fn func()) string {
	functionName := runtime.FuncForPC(reflect.ValueOf(fn).Pointer()).Name()

	names := strings.Split(functionName, ".")
	name := names[len(names)-1]

	return name
}
