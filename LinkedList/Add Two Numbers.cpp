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
        int carry = 0;
        ListNode* ans = new ListNode();
        ListNode* d1 = ans;

        while(l1 != nullptr || l2 != nullptr){
            if(l1 == nullptr){
                int temp = l2->val+ carry;
                l2->val = temp%10;
                carry = temp/10;
                d1->next = l2;
                d1 = d1->next;
                l2=l2->next;
               
            }else if(l2 == nullptr){
                int temp = l1->val+ carry;
                l1->val = temp%10;
                carry = temp/10;
                d1->next = l1;
                d1 = d1->next;
                l1=l1->next;
                
            }else{
                int temp = (l1->val) + (l2->val)+carry;
                l1->val = temp%10;
                carry = temp/10;
                d1->next = l1;
                d1 = d1->next;
                l1=l1->next;
                l2=l2->next;
            }
        }
        if(carry > 0){
            d1->next = new ListNode(carry, nullptr);
        }
        return ans->next;
    }
};
