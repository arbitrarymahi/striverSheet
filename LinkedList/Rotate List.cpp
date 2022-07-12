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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr) return head;
        if(k==0) return head;
        ListNode* d = head;
        ListNode* last;
        int n=0;
        while(d!=nullptr){
            if(d->next == nullptr) last = d;
            d=d->next;
            n++;
        }
        
        n=n-(k%n);
        if(n == 0)return head;
        // last->next = head;
        int i=1;
        d = head;
        while(i<n){
            d=d->next;
            i++;
        }
        cout<<last->val<<" "<<head->val<<endl;
        last->next = head;
        head = d->next;
        d->next = nullptr;
        return head;
    }
};
