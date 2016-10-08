/* 
   HackerRank
   Problem Name: delete-duplicate-value-nodes-from-a-sorted-linked-list
*/

/*
Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/

Node RemoveDuplicates(Node head) {
    
    Node current = head.next;
    
    while (current.next != null) {
        if (current.data == current.next.data) {
            current.next = current.next.next;            
        } else {
            current = current.next;
        }       
    }
    
    return head;
}
