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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> hset;
        ListNode* tmp = headA;
        int lena=0;
        int lenb=0;
        while(tmp != nullptr){
            lena++;
            tmp = tmp->next;
        }
        tmp = headB;
        while(tmp != nullptr){
            lenb++;
            tmp = tmp->next;
        }
        int n = lena - lenb;
        ListNode * t2 = headB;
        ListNode * t1= headA;
        
        while(t2 != t1){
            if(n>0){
                t1=t1->next;
                n--;
            }else if(n<0){
                t2=t2->next;
                n++;
            }else{
                t2=t2->next;
                t1=t1->next;
                
            }
        }
        return t1;
    }
};











































