class Solution {
public:
    int dp[1001][1001];
    int lcs(string &x,string&y,int n,int m){
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0) dp[i][j]=0;
                else{
                    if(x[i-1]==y[j-1]) dp[i][j]= 1+dp[i-1][j-1];
                    else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        } return dp[n][m];
    }
    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        int n=s.size();
        return lcs(s,t,n,n);
    }
};