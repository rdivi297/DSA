class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
         
        int sum1=accumulate(rolls.begin(),rolls.end(),0);
        int sum=mean*(n+m)-sum1;
        if(sum<n || n*6<sum) return {};
        vector<int>ans(n,sum/n);
        for(int i=0;i<sum%n;i++){
            ans[i]++;
        } return ans;
    }
};