package main

import (
	"fmt"
	"runtime"
)

// ---------------------------------------------------------
// EXERCISE: Print the Go Version
//
//  1. Look at the runtime package documentation
//  2. Find the func that returns the Go version
//  3. Print the Go version by calling that func
//
// HINT
//  It's here: https://golang.org/pkg/runtime
//
// EXPECTED OUTPUT
//  "go1.10"
// ---------------------------------------------------------

func q4() {
	fmt.Println(runtime.Version())
}
