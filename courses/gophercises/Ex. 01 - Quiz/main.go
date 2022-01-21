package main

import (
	"flag"
	"fmt"
	"time"
)

func main() {
	filePath := flag.String("file", "assets/problems.csv", "file with the questions")
	shuffle := flag.Bool("shuffle", false, "shuffle questions")
	timeout := flag.Int("time", 30, "time limit to answer the quiz")
	flag.Parse()

	questions := loadCSV(*filePath)

	quiz := NewQuiz(questions, *shuffle)
	run(quiz, *timeout)

	fmt.Println("You scored", quiz.points, "points out of", len(quiz.questions))
}

func run(q *quiz, timeout int) {
	fmt.Println("You have just", timeout, "seconds to answer the questions")
	fmt.Print("Press enter to start")
	fmt.Scanln()

	timer := time.NewTimer(time.Duration(timeout) * time.Second)
	for ok := true; ok; ok = q.hasNext() {
		fmt.Print(q.next().description, ": ")

		answerCh := make(chan string)
		go func() {
			var answer string
			fmt.Scanf("%s\n", &answer)
			answerCh <- answer
		}()

		select {
		case <-timer.C:
			fmt.Println()
			return
		case answer := <-answerCh:
			q.guess(answer)
		}
	}
}
