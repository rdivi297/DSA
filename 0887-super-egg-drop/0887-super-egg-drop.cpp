class Solution {
public:
    
    
    int solve(int k, int n,vector<vector<int>>&dp){
        if(n==0 || n==1) return n;
        if(k==1) return n;
        if(dp[k][n]!=-1) return dp[k][n];
        int mn=INT_MAX;
        int l=1;int h=n;
        while(l<=h){
            int m=(l+h)/2;
            int b=solve(k-1,m-1,dp);
            int nb=solve(k,n-m,dp);
            if(b>nb) h=m-1;
            else l=m+1;
            int temp=1+max(b,nb);
            mn=min(mn,temp);
        }
        return dp[k][n]=mn;
    }
    int superEggDrop(int k, int n) {
        vector<vector<int>>dp(k+1,vector<int>(n+1,-1));
        
        return solve(k,n,dp);
    }
};