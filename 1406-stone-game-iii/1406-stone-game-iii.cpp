class Solution {
public:
    
    int help(int i,vector<int>&s,vector<int>&dp){
        if(i==s.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int t=0;
        int ans=INT_MIN;
        for(int j=i;j<i+3 && j<s.size();j++){
            t+=s[j];
            ans=max(ans,t-help(j+1,s,dp));
        } return dp[i]=ans;
     }
    string stoneGameIII(vector<int>& stoneValue) {
      int n=stoneValue.size();
        vector<int> dp(n+1,-1);
        int res=help(0,stoneValue,dp);
        return res>0?"Alice":res<0?"Bob":"Tie";
    }
};