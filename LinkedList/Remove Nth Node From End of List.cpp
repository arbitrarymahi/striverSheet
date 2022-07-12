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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t1 = head;
        ListNode* t2 = nullptr;
        
        while(t1->next != nullptr){
            if(n>0){
                t1=t1->next;
            }else if(n==0){
                t2 = head;
            }
            else{
                t1=t1->next;
                t2=t2->next;
            }
            n--;
        }
        if(n==0){
                t2 = head;
            }
        if(t2==nullptr) head = head->next;
        else t2->next = t2->next->next;
        return head;
    }
};
