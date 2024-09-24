class Solution {
public:
    int help(vector<int> &nums,int i,vector<int>&dp){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(nums[i]+help(nums,i+2,dp),help(nums,i+1,dp));
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return help(nums,0,dp);
    }
};