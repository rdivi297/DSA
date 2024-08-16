class Solution {
public:
    int dp[102][102];
    int solve(vector<int>&cuts, int l,int r){
          if(r-l==1) return 0;
          if(dp[l][r]!=-1) return dp[l][r];
         int cost=INT_MAX;
          for(int i=l+1;i<r;i++){
              cost= min(cost,(cuts[r]-cuts[l])+solve(cuts,l,i)+solve(cuts,i,r));
          } return dp[l][r]=cost==INT_MAX?0:cost;
    }
    int minCost(int n, vector<int>& cuts) {
        memset(dp,-1,sizeof(dp));
        cuts.push_back(n);
        cuts.push_back(0);
        sort(cuts.begin(),cuts.end());
        int ans=solve(cuts,0,cuts.size()-1);
        return ans;
    }
};