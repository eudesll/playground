/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int rd = 0;
    ListNode* result = l1;
    ListNode* tmp;
    
    while (l1 || l2) {
      tmp = l1;
      if (!tmp) {
        tmp = l2;
      } else if (l2) {
        tmp->val += l2->val;
      }
      
      tmp->val += rd;
      
      rd = tmp->val / 10;
      tmp->val %= 10;
      
      if (!l1->next && (l2 && l2->next)) {
        l1->next = l2->next;
        l2->next = nullptr;
      }
      
      l1 = this->getNext(l1);
      l2 = this->getNext(l2);
    }
    
    if (rd) {
      tmp->next = new ListNode(rd);
    }
    
    return result;
  };
  
  ListNode* getNext(ListNode* l) {
    return l && l->next ? l->next : nullptr;
  }
};

