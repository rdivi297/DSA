class Solution {
public:
    void dfs(int node,vector<vector<int>>&x,vector<int>&y){
        y[node]=1;
        for(int i=0;i<size(x);i++){
            if(x[node][i] && !y[i]) dfs(i,x,y);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=size(isConnected);
        vector<int>vis(n,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if (!vis[i]){
                ans++;
                dfs(i,isConnected,vis);
            }
        } return ans;
    }
};