class Solution {
public:
    int dp[1001][1001];
    void lcs(string&x,string&y,int n,int m){
       for(int i=0;i<n+1;i++){
           for(int j=0;j<m+1;j++){
               if(i==0 || j==0) dp[i][j]=0;
               else if
                   (x[i-1]==y[j-1]) dp[i][j]=1+dp[i-1][j-1];
                  
               
             else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
           }
       }
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();
        
        lcs(str1,str2,n,m);
        int i=n;int j=m;
        string s="";
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){ s+=(str1[i-1]);
                                    i--;
                                     j--;
                                    }
            else
                if(dp[i-1][j]>dp[i][j-1]) {
                    s+=(str1[i-1]);
                    i--;
                }
                else {
                    s+=(str2[j-1]);
                    j--;
                }
            
        }
        while(i>0) {s+=(str1[i-1]);i--;}
        while(j>0) {s+=(str2[j-1]);j--;}
         reverse(s.begin(),s.end());
        return s;
    }
};