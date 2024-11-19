class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l=0;
        int ans=0;
        unordered_map<int,int>dp;
        for(int r=0;r<size(nums);r++){
            dp[nums[r]]++;
            while(dp[nums[r]]>k){
                dp[nums[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
        } return ans;
    }
};