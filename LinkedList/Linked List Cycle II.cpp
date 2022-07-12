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
    ListNode *detectCycle(ListNode *head) {
        //O(n), O(1)
        if(head == nullptr)return nullptr;
        ListNode* s= head;
        ListNode* f =head;
        ListNode* tmp = head;
        
        while(f->next !=nullptr && f->next->next != nullptr){
            s=s->next;
            f=f->next->next;
            if(s==f)break;
        }
        if(f->next == nullptr || f->next->next ==nullptr) return nullptr;
        
        while(tmp != s){
            s=s->next;
            tmp = tmp->next;
        }
        return tmp;
        
        
        
        
        //O(n), O(n)
        // unordered_set<ListNode*> hset;
        // ListNode* d = head;
        // while(d != nullptr){
        //     if(hset.count(d)){
        //         return d;
        //     }else{
        //         hset.insert(d);
        //         d = d->next;
        //     }
        // }
        // return nullptr;
    }
};
