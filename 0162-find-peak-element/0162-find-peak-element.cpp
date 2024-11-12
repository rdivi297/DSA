class Solution {
public:
    int findPeakElement(vector<int>& nums) {
         int n=nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-2]<nums[n-1]) return n-1;
        int i=1;
        while(i<=n){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) return i;
            i++;
        } return -1;
    }
};