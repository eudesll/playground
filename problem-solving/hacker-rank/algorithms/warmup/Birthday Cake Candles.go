package birth

// Complete the birthdayCakeCandles function below.
func birthdayCakeCandles(ar []int32) int32 {
	numMap := map[int32]int32{}
	big := int32(0)

	for _, v := range ar {
		if v > big {
			big = v
		}

		numMap[v]++
	}

	return numMap[big]
}
