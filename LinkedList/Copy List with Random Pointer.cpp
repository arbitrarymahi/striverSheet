/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return head;
        Node* d = head;       
        while(d != NULL){
            Node * x = new Node(d->val);
            x->next = d->next;
            d->next = x;
            d =x->next;
            }
        d = head;
        Node* ans = d->next;
        Node * p2 = d->next;
        while(d != NULL){
            if(d->random != NULL) 
            p2->random = d->random->next;
            else p2->random = NULL;
            
           // p1->next = p2->next;
            d = p2->next;
            if(d != NULL) {
                //p2->next = p1->next;
                p2 = d->next;
            }else p2 = NULL;

        }
 d = head;
 p2 = d->next;
	while(d != NULL){
		d->next = p2->next;
            d = d->next;
            if(d != NULL) {
                p2->next = d->next;
                p2 = p2->next;
            }else p2 = NULL;
}
        return ans;
    }
};
