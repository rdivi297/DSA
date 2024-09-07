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
    void help(TreeNode* root, string &s){
        if(!root) return;
        if(!root->right && !root->left) s+=to_string(root->val)+" ";
        help(root->left,s);
        help(root->right,s);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       string s1,s2;
        help(root1,s1);
        help(root2,s2);
        return s1==s2;
    }
};