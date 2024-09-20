class Solution {
public:
    
    int help(vector<vector<int>>& t,int i,int j,vector<vector<int>>& dp){
        if(i==t.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j]=t[i][j]+min(help(t,i+1,j,dp),help(t,i+1,j+1,dp));
        return dp[i][j];   
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return help(triangle,0,0,dp);
    }
};