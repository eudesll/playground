package lasagna

func PreparationTime(layers []string, averageTime int) int {
	if averageTime == 0 {
		averageTime = 2
	}

	return len(layers) * averageTime
}

func Quantities(layers []string) (int, float64) {
	noodlesWeight := 50
	sauceVolume := 0.2
	qttNoodles := 0
	qttSauce := 0

	for _, layer := range layers {
		if layer == "sauce" {
			qttSauce += 1
		}

		if layer == "noodles" {
			qttNoodles += 1
		}
	}

	return qttNoodles * noodlesWeight, float64(qttSauce) * sauceVolume
}

func AddSecretIngredient(friendsList, myList []string) []string {
	myList[len(myList)-1] = friendsList[len(friendsList)-1]
	return myList
}

func ScaleRecipe(twoPortionsAmounts []float64, numberOfPortions int) []float64 {
	portionAmounts := make([]float64, len(twoPortionsAmounts))
	for i := range twoPortionsAmounts {
		portionAmounts[i] = twoPortionsAmounts[i] / 2 * float64(numberOfPortions)
	}

	return portionAmounts
}
