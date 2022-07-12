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
    ListNode* middleNode(ListNode* head) {
        ListNode* t1 = head->next;
        while(t1 != nullptr){
            head = head->next;
            if(t1->next != nullptr)
            t1 = t1->next->next;
            else t1 = nullptr;
        }
        return head;
    }
};
