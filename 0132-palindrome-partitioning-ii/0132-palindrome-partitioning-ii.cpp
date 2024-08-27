class Solution {
public:
    int dp[2001][2001];
    bool ispal(string &s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        } return true;
    }
    int solve(string &s,int i,int j){
        if(i>=j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(ispal(s,i,j)==true) return 0;
        int minn=INT_MAX;
        for(int k=i;k<j;k++){
            if(ispal(s,i,k)==true) {int temp=1+solve(s,k+1,j);
            minn=min(minn,temp);}
        } return dp[i][j]=minn;
    }
    int minCut(string s) {
        memset(dp,-1,sizeof dp);
        int n=s.size()-1;
        return solve(s,0,n);
    }
};