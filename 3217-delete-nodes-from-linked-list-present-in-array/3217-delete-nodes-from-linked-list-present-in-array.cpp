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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s(nums.begin(),nums.end());
    ListNode d(0,head);
        ListNode* prev=&d;
        ListNode* curr=head;
        while(curr){
            if(s.find(curr->val)!=s.end()){
                prev->next=curr->next;
                curr=curr->next;
            }
            else{
                prev=prev->next;
                curr=curr->next;
            }
        } return d.next;
    }
};