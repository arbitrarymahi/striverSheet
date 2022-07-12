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
    vector<ListNode*> reverseLL(ListNode* strt, int nodecount){
        int nc = nodecount -1;
        ListNode* p1 = strt->next;
        ListNode* p2 = strt;
        while(nc>0){
            nc--;
            ListNode* temp = p1->next;
            p1->next = p2;
            p2 = p1;
            p1 = temp;
        }
        
        return {p2,p1};
    }
    
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n = 0;
        ListNode* d = head;
        
        while(d!=nullptr){
            d= d->next;
            n++;
        }
        
        int parts = n/k;
        ListNode* start = head;
        ListNode* prevStart = nullptr;
        ListNode* ans = nullptr;
        
        while(parts>0){
            vector<ListNode*> px  = reverseLL(start, k);
            ListNode* p2 = px[0];
            ListNode* p1 = px[1];
            if(ans == nullptr)ans = p2;
            if(prevStart == nullptr){
                prevStart = start;
                start = p1;
            }else{
                prevStart->next = p2;
                prevStart = start;
                start = p1;
            }
            parts--;
        }
        
        prevStart->next = start;
        return ans;
    }
};









