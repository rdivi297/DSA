class Solution {
public:
    int dp[501][501];
    int help(int l,int r,vector<int>&p){
        if(l>r) return 0;
        if(dp[l][r]!=-1) return dp[l][r];
       int left=(r-l)%2==0?p[l]:0;
       int right=(r-l)%2==0?p[r]:0;
       dp[l][r]=max(help(l+1,r,p)+left,help(l,r-1,p)+right);
    return dp[l][r];
    }
    bool stoneGame(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        int sum=accumulate(piles.begin(),piles.end(),0);
        return help(0,piles.size()-1,piles)>sum/2;
    }
};