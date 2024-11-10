/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int c=0;
    void help(TreeNode* root,int curr){
        if(!root) return;
        if(root->val>=curr){
            c++;
            curr=root->val;
        }
        help(root->left,curr);
        help(root->right,curr);
    }
    int goodNodes(TreeNode* root) {
        int curr=root->val;
        help(root,curr);
        return c;
    }
};