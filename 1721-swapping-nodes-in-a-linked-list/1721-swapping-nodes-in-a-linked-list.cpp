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
    ListNode* swapNodes(ListNode* head, int k) {
       vector<int> ans;
        ListNode* curr=head;
        while(curr){
            ans.push_back(curr->val);
            curr=curr->next;
        } 
        swap(ans[k-1],ans[ans.size()-k]);
        ListNode* node= new ListNode(ans[0]);
        ListNode* temp=node;
        for(int i=1;i<ans.size();i++){
            ListNode* men=new ListNode(ans[i]);
            temp->next=men;
            temp=temp->next;
        } return node;
    }
};