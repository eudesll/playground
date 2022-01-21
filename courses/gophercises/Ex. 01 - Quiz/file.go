package main

import (
	"encoding/csv"
	"log"
	"os"
)

func loadFile(filePath string) *os.File {
	file, err := os.Open(filePath)
	if err != nil {
		log.Fatalln(err)
	}

	return file
}

func loadCSV(filePath string) [][]string {
	file := loadFile(filePath)
	defer file.Close()

	return readCSV(file)
}

func readCSV(file *os.File) [][]string {
	reader := csv.NewReader(file)
	rows, err := reader.ReadAll()
	if err != nil {
		log.Fatalln(err)
	}

	return rows
}
