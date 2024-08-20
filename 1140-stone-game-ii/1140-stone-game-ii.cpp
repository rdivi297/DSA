class Solution {
public:
    int dp[101][201];
    int help(int i,int m,vector<int>&p){
       
        if(i>=p.size()) return 0;
         if(dp[i][m]!=-1) return dp[i][m];
        int t=0;
        int ans=INT_MIN;
        for(int j=0;j<2*m && i+j<p.size();j++){
            t+=p[i+j];
            ans=max(ans,t-help(i+j+1,max(m,j+1),p));
        } return dp[i][m]=ans;
    }
    int stoneGameII(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        int sum=accumulate(piles.begin(),piles.end(),0);
        return (sum+help(0,1,piles))/2;
    }
};