package questions

import (
	"fmt"
	"reflect"
)

func printSolution(resp interface{}) {
	fmt.Printf("(%T): %q\n", resp, resp)
	fmt.Println(reflect.TypeOf(resp), resp)
}
