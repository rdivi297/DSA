class Solution {
public:
    int dp[1001][1001];
    string longestPalindrome(string s) {
     string t=s;
        reverse(t.begin(),t.end());
        int n=s.size();
       int maxx=0;
        int r=0;
      
        for(int i=0;i<n+1;i++){
           for(int j=0;j<n+1;++j){
               if(i==0 || j==0) dp[i][j]=0;
               else{
                   if(s[i-1]==t[j-1]){dp[i][j]=1+dp[i-1][j-1];
                                      if(dp[i][j]>maxx && i-dp[i][j]==n-j){
                                          maxx=dp[i][j];
                                          r=i;
                                      }
                                      
                                     }
                   else dp[i][j]=0;
                   
               }
           
        }}
        return s.substr(r-maxx,maxx);
    }
};