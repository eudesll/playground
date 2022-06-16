package linkedlist

import "errors"

type List struct {
	head *Node
}

type Node struct {
	Value interface{}
	next  *Node
	prev  *Node
}

func NewList(args ...interface{}) *List {
	l := &List{}
	if len(args) > 0 {
		l.head = &Node{}

		var cur = l.head
		var prev *Node
		for _, v := range args {
			cur.Value = v
			cur.prev = prev

			if cur.prev != nil {
				prev.next = cur
			}

			prev = cur
			cur = &Node{}
		}
	}

	return l
}

func (n *Node) Next() *Node {
	return n.next
}

func (n *Node) Prev() *Node {
	return n.prev
}

func (l *List) Unshift(v interface{}) {
	n := &Node{
		Value: v,
		next:  l.head,
	}

	if l.head != nil {
		l.head.prev = n
	}

	l.head = n
}

func (l *List) Push(v interface{}) {
	n := &Node{
		Value: v,
	}

	if l.head == nil {
		l.head = n
		return
	}

	tail := l.Last()
	tail.next = n
	n.prev = tail
}

func (l *List) Shift() (interface{}, error) {
	n := l.head
	if n == nil {
		return nil, errors.New("empty list")
	}

	l.head = n.next
	if l.head != nil {
		l.head.prev = nil
	}

	return n.Value, nil
}

func (l *List) Pop() (interface{}, error) {
	tail := l.Last()
	if tail == nil {
		return nil, errors.New("empty list")
	}

	if tail == l.head {
		l.head = nil
	} else {
		tail.prev.next = nil
	}

	return tail.Value, nil
}

func (l *List) Reverse() {
	tail := l.Last()

	cur := tail
	for cur != nil {
		temp := cur.prev
		cur.prev = cur.next
		cur.next = temp

		cur = temp
	}

	l.head = tail
}

func (l *List) First() *Node {
	return l.head
}

func (l *List) Last() *Node {
	cur := l.head
	for cur != nil && cur.next != nil {
		cur = cur.next
	}

	return cur
}
