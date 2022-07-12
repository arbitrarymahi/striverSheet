/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr){
            return false;
        }
        ListNode* l1 = head;
        ListNode* l2 = head->next;
        while(l1 != nullptr || l2 != nullptr){
            if(l1==l2){
                return true;            
            }

            if(l1 != nullptr){
               l1 = l1->next;
            }
            if(l2 != nullptr){
            l2 = l2->next;
            }
            if(l2 != nullptr){
            l2 = l2->next;
            }
        }
        
        return false;
    }
};
