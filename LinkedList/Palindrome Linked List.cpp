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
    bool isPalindrome(ListNode* head) {
        int n=0;
        
        ListNode* temp = head;
        while(temp != nullptr){
            n++;
            temp = temp->next;
        }
        if(n==1)return true;
        else if(n==2)return (head-> val == head->next->val);
        int mid = ceil(n/2);
        
        ListNode * firsthalf;
        ListNode * lasthalf;
        
        ListNode * p1 = head;
        ListNode * p2 = head->next;
        head->next = nullptr;
        int x=1;
        while(x<mid){
            x++;
            ListNode * tmp = p2->next;
            p2->next = p1;
            p1 = p2;
            p2 = tmp;
        }
        
        firsthalf = p1;
        if(n%2==0)lasthalf = p2; 
        else lasthalf = p2->next;
        
        while(firsthalf != nullptr && lasthalf != nullptr){
            if(firsthalf->val != lasthalf->val){
                return false;
            }
            firsthalf = firsthalf->next;
            lasthalf = lasthalf->next;
            
        }
        return true;
    }
};
