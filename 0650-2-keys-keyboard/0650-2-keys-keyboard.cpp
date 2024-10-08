class Solution {
public:
    int minSteps(int n) {
        vector<int>dp(n+1,INT_MAX);
        dp[1]=0;
        for(int i=2;i<n+1;i++){
            for(int j=1;j<=i;j++){
                if(i%j==0)
                dp[i]=min(dp[i],dp[j]+i/j);
            }
        }
        
        return dp[n];
    }
};