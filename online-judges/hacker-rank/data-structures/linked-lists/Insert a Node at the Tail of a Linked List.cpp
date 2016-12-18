/* 
   HackerRank
   Problem Name: insert-a-node-at-the-tail-of-a-linked-list
*/

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
Node Insert(Node head,int data) {
    Node node = new Node();
    node.data = data;
    
    Node current = head;
    while (current.next != null) {
        current = current.next;
    }
    
    current.next = node;
    
    return head;
}

