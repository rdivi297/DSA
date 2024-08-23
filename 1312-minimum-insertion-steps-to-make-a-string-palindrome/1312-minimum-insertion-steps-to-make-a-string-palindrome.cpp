class Solution {
public:
    int dp[502][502];
    int minInsertions(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        int n=s.size();
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0) dp[i][j]=0;
                else{
                if(s[i-1]==t[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                
            }}
        } return n-dp[n][n];
    }
};