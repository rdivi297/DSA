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
    bool symm(TreeNode* r1,TreeNode * r2){
        if( r1==NULL || r2==NULL) return r1==r2;
        return (r1->val==r2->val) && symm(r1->right,r2->left) && symm(r1->left,r2->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return symm(root->left,root->right);
    }
};