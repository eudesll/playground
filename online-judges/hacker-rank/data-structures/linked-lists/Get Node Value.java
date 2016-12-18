/* 
   HackerRank
   Problem Name: get-the-value-of-the-node-at-a-specific-position-from-the-tail
*/

/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
    
int GetNode(Node head,int n) {
    List<Node> nodes = new ArrayList<>();
    
    while (head != null) {
        nodes.add(head);
        head = head.next;
    }
    
    Collections.reverse(nodes);
    
    return nodes.get(n).data;
}

