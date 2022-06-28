package thefarm

import (
	"errors"
	"fmt"
)

type SillyNephewError struct {
	cows int
}

func (sne *SillyNephewError) Error() string {
	return fmt.Sprintf("silly nephew, there cannot be %d cows", sne.cows)
}

// DivideFood computes the fodder amount per cow for the given cows.
func DivideFood(weightFodder WeightFodder, cows int) (float64, error) {
	amount, err := weightFodder.FodderAmount()
	if err != nil && err != ErrScaleMalfunction {
		return 0, err
	} else if err == ErrScaleMalfunction {
		amount *= 2
	}

	if amount < 0 {
		return 0, errors.New("negative fodder")
	}

	if cows == 0 {
		return 0, errors.New("division by zero")
	}

	if cows < 0 {
		return 0, &SillyNephewError{cows}
	}

	return amount / float64(cows), nil
}
