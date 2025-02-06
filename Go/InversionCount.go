package main

import "fmt"

func InversionCount(arr []int, index int) int {
	count := 0
	for i := index + 1; i < len(arr); i++ {
		if arr[i] < arr[index] {
			count++
		}
	}

	return count
}

func GetInversionCount(arr []int) int {
	count := 0
	for i := 0; i < len(arr)-1; i++ {
		count += InversionCount(arr, i)
	}

	return count
}

func main() {
	for {
		fmt.Print("Number of elements: ")
		count := 0
		fmt.Scan(&count)
		if count == 0 {
			break
		}

		fmt.Print("Enter the array: ")
		vec := make([]int, count)
		for i := 0; i < count; i++ {
			fmt.Scan(&vec[i])
		}

		fmt.Printf("To sort the array, it needs %d moves\n", GetInversionCount(vec))
	}
}
