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
    
    void solve(TreeNode* root, int t,vector<int>a,vector<vector<int>>&ans){
         if(!root ) return;
         a.push_back(root->val);
         if(!root->left && !root->right && root->val-t==0)
             ans.push_back(a);
        else{
            solve(root->left,t-root->val,a,ans);
            solve(root->right,t-root->val,a,ans);
        }
             
         a.pop_back();
         
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>a;
        vector<vector<int>>ans;
        solve(root,targetSum,a,ans);
        return ans;
    }
};