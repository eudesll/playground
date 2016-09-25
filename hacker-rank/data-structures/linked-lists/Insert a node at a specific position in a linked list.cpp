/* 
   HackerRank
   Problem Name: insert-a-node-at-a-specific-position-in-a-linked-list
*/

/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *node = new Node();
    node->data = data;
    
    if (position == 0 || head == NULL) {
        node->next = head;
        return node;
    }
    
    Node *temp = head;    
    while (position-- - 1 > 0) {
        temp = temp->next;
    }
    
    node->next = temp->next;
    temp->next = node;
    
    return head;
}
