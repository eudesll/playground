/* 
   HackerRank
   Problem Name: detect-whether-a-linked-list-contains-a-cycle
*/

/*
Detect a cycle in a linked list. Note that the head pointer may be 'null' if the list is empty.

A Node is defined as: 
    class Node {
        int data;
        Node next;
    }
*/

boolean hasCycle(Node head) {
    Set<Node> visited = new HashSet<>();
    
    Node current = head;
    while (current != null) {
        
        if (visited.contains(current)) {
            return true;
        } else {
            visited.add(current);
        }
        
        current = current.next;
    }
    
    return false;
}
