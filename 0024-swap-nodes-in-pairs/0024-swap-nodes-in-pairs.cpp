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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* temp=head;
        ListNode* newh=head->next;
        ListNode* prev=NULL;
        while(temp && temp->next){
            ListNode* second=temp->next;
            ListNode* nextpair=temp->next->next;
            second->next=temp;
            temp->next=nextpair;
            if(prev) prev->next=second;
            prev=temp;
            temp=nextpair;
        } return newh;
    }
};