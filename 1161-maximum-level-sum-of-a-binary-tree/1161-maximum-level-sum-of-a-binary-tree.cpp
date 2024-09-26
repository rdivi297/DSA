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
    int maxLevelSum(TreeNode* root) {
       
        queue<TreeNode*> q;
        q.push(root);
        int maxlevel=1;
        int level=1;
        int maxsum=INT_MIN;
        while(!q.empty()){
             int sum=0;
            int s=q.size();
            for(int i=0;i<s;i++){
                 TreeNode* node=q.front();
            q.pop();
                sum+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            
            }
            if(sum>maxsum){
                maxsum=sum;
                maxlevel=level;
            } level++;
        }
        return maxlevel;
    }
};