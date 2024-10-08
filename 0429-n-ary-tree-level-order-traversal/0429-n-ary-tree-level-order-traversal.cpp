/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if (!root) return {};
        vector<vector<int >> ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
             int n=q.size();
            vector<int> a;
            for(int i=0;i<n;i++){
                Node* f=q.front();
                 q.pop();
                a.push_back(f->val);
               for(auto i:f->children) q.push(i);
            }
            
         ans.push_back(a);
        } return ans;
    }
};