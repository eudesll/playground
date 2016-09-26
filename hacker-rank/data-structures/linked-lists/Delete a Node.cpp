/* 
   HackerRank
   Problem Name: delete-a-node-from-a-linked-list
*/

/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    if (position == 0) {
        head = head->next;
    } else if (head != NULL) {
        Node *current = head;
        while (position-- > 1) {
            current = current->next;
        }
        
        current->next = (current->next)->next;
    }
    
    return head;
}
