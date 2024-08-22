class Solution {
public:
    bool dp[1001][1001];
    int countSubstrings(string s) {
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
           dp[i][i]=true;
        ans ++;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=true;
                ans++;}
        }
        for(int l=3;l<n+1;l++){
            for(int i=0;i<n-l+1;i++){
                int j=i+l-1;
                if(s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j]=true;
                    ans++;}
            }
        } return ans;
    }
};