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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr)return head;
        ListNode* firstHead = head;
        ListNode* t2 = head->next;
        ListNode* t1;
        while(t2!=nullptr){
            t1 = head;
            head = t2;
            t2 = head->next;
            head->next = t1;
        
        }   
        firstHead->next = nullptr;
        return head;
    }
};
