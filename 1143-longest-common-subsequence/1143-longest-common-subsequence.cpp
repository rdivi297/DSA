class Solution {
public:
    int dp[1001][1001];
    int help(string &x,string& y, int n,int m){
          if(n==0 || m==0) return 0;
        if(dp[n][m]!=-1) return dp[n][m];
        if(x[n-1]==y[m-1]) return dp[n][m]=1+help(x,y,n-1,m-1);
        else return dp[n][m]=max(help(x,y,n-1,m),help(x,y,n,m-1));
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
     
        memset(dp,-1,sizeof(dp));
        return help(text1,text2,n,m);
    }
};