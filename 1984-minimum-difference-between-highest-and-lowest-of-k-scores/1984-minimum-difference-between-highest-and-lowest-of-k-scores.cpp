class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        
        int ans=INT_MAX;
        sort(begin(nums),end(nums));
        for(int i=0;i<n-k+1;i++){
            ans=min(ans,nums[i+k-1]-nums[i]);
        } return ans;
        
    }
};