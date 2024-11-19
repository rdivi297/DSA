class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l = 0, ans = 0, temp = 0, count = 0;
        
        for (int r = 0; r < nums.size(); r++) {
            // Increment temp for odd numbers
            if (nums[r] % 2 == 1) {
                temp++;
                count = 0; // Reset count for subarrays
            }
            
            // Shrink window until there are exactly `k` odd numbers
            while (temp == k) {
                if (nums[l] % 2 == 1) temp--;
                l++;
                count++;
            }
            
            // Add the count of valid subarrays ending at r
            ans += count;
        }
        
        return ans;
    }
};
