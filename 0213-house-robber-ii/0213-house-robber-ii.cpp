class Solution {
public:
    // Helper function for linear house robber problem
    int help(vector<int>& nums, int start, int end, vector<int>& dp) {
        if (start > end) return 0;
        if (dp[start] != -1) return dp[start];
        
        // Either rob the current house or skip it
        dp[start] = max(nums[start] + help(nums, start + 2, end, dp), help(nums, start + 1, end, dp));
        return dp[start];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];  // If there's only one house, return its value.
        if (n == 0) return 0;        // If no houses, return 0.

        // Case 1: Rob from house 0 to n-2
        vector<int> dp1(n, -1);
        int case1 = help(nums, 0, n - 2, dp1);

        // Case 2: Rob from house 1 to n-1
        vector<int> dp2(n, -1);
        int case2 = help(nums, 1, n - 1, dp2);

        // Return the maximum of both cases
        return max(case1, case2);
    }
};
