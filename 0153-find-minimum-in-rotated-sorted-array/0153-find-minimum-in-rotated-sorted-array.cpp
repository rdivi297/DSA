class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int l=0;int n=nums.size()-1;
        if(nums[l]<=nums[n]) return nums[l];
        int ans=0;
        while(l<=n){
            int m=l+(n-l)/2;
            if(m>0 && nums[m]<nums[m-1]) return nums[m];
            if(m<n && nums[m]>nums[m+1]) return nums[m+1];
            else if(nums[m]>=nums[l])l=m+1;
            else n=m-1;
        } return -1;
    }
};