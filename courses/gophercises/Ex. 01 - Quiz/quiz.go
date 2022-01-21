package main

import (
	"math/rand"
	"time"
)

type quiz struct {
	index     int
	questions []question
	points    int
}

type question struct {
	description string
	answer      string
}

func NewQuiz(rows [][]string, shuffle bool) *quiz {
	q := quiz{-1, createQuestions(rows), 0}

	if shuffle {
		q.shuffle()
	}

	return &q
}

func createQuestions(rows [][]string) []question {
	qs := make([]question, len(rows))
	for i := range rows {
		qs[i] = question{
			description: rows[i][0],
			answer:      rows[i][1],
		}
	}

	return qs
}

func (q *quiz) shuffle() {
	rand.Seed(time.Now().UnixNano())
	rand.Shuffle(len(q.questions), func(i, j int) { q.questions[i], q.questions[j] = q.questions[j], q.questions[i] })
}

func (q *quiz) hasNext() bool {
	return q.index < len(q.questions)-1
}

func (q *quiz) next() question {
	q.index += 1
	qn := q.questions[q.index]

	return qn
}

func (q *quiz) guess(guess string) bool {
	if q.questions[q.index].answer == guess {
		q.addPoint()
		return true
	}

	return false
}

func (q *quiz) addPoint() int {
	q.points++
	return q.points
}
