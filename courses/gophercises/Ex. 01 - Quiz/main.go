package main

import (
	"encoding/csv"
	"flag"
	"fmt"
	"log"
	"math/rand"
	"os"
	"time"
)

type quiz struct {
	question string
	answer   string
}

type config struct {
	file    string
	shuffle bool
	time    int
}

func getConfig() *config {
	c := new(config)

	flag.StringVar(&c.file, "file", "problems.csv", "file with the questions")
	flag.BoolVar(&c.shuffle, "shuffle", false, "shuffle questions")
	flag.IntVar(&c.time, "time", 30, "time limit to answer the quiz")
	flag.Parse()

	return c
}

func createQuiz(c *config) []quiz {
	q := loadQuestions(c.file)

	if c.shuffle {
		shuffle(q)
	}

	return q
}

func shuffle(q []quiz) {
	rand.Seed(time.Now().UnixNano())
	rand.Shuffle(len(q), func(i, j int) { q[i], q[j] = q[j], q[i] })
}

func loadQuestions(file string) []quiz {
	problems, err := os.Open(file)
	if err != nil {
		log.Fatalln(err)
	}

	reader := csv.NewReader(problems)
	rows, err := reader.ReadAll()
	if err != nil {
		log.Fatalln(err)
	}

	q := make([]quiz, len(rows))
	for i := range rows {
		q[i] = quiz{
			question: rows[i][0],
			answer:   rows[i][1],
		}
	}

	return q
}

func main() {
	config := getConfig()

	quiz := createQuiz(config)
	fmt.Println(quiz)

	ticker := time.NewTicker(1000 * time.Millisecond)
	done := make(chan bool)
	go func() {
		for {
			select {
			case <-done:
				return
			case t := <-ticker.C:
				fmt.Println("Tick at", t)
			}
		}
	}()

	time.Sleep(1 * time.Second)
	//ticker.Stop()
	//done <- true
	fmt.Println("Ticker stopped")

	timer1 := time.NewTimer(3 * time.Second)

	timer2 := time.NewTimer(4 * time.Second)
	go func() {
		<-timer2.C
		fmt.Println("Timer 2 expired")
	}()

	<-timer1.C
	fmt.Println("Timer 1 expired")

	stop2 := timer2.Stop()
	if stop2 {
		fmt.Println("Timer 2 stopped")
	}
}
