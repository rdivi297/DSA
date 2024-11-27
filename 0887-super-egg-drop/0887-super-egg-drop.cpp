class Solution {
public:
   
    int solve(int k,int n,vector<vector<int>>&dp) {
        if(k==1) return n;
        if(n==0 || n==1) return n;
        if(dp[k][n]!=-1) return dp[k][n];
        int l=0;
        int h=n;
        int mn=INT_MAX;
        while(l<=h) {
            int m=(l+h)/2;
            int eggbreak = dp[k-1][m-1]==-1?solve(k-1,m-1,dp):dp[k-1][m-1];
            int noeggbreak = dp[k][n-m]==-1?solve(k,n-m,dp):dp[k][n-m];
            int temp=1+max(eggbreak,noeggbreak);
            mn=min(mn,temp);
            if(eggbreak>noeggbreak) h=m-1;
            else l=m+1;
        } 
        return dp[k][n]=mn;
    }
    
    int superEggDrop(int k, int n) {
        vector<vector<int>>dp(k+1,vector<int>(n+1,-1));
       int ans=solve(k,n,dp);
     return ans;
    }
};