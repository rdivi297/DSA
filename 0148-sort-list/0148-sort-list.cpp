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
    ListNode* sortt(ListNode* l,ListNode* r){
         ListNode* dum=new ListNode(-1);
        ListNode* node= dum;
        while(l && r){
            if(l->val<r->val){
                node->next=l;
                l=l->next;
            }
            else {
              node->next=r;
                r=r->next;
                
            } node=node->next;
        }
        while(l) {
            node->next=l;
            l=l->next;
            node=node->next;
        }
        while(r){
            node->next=r;
            r=r->next;
            node=node->next;
        } return dum->next;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* slow;
        ListNode* fast;
        ListNode* prev=NULL;
        slow=fast=head;
        while(fast && fast->next){
            prev=slow;
           slow=slow->next;
           fast=fast->next->next; 
        }
        prev->next=NULL;
        
        return sortt(sortList(head),sortList(slow));
        
    }
};