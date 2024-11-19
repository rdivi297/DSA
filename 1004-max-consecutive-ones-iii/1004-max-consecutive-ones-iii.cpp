class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int ans=0;
        int temp=0;
        for(int r=0;r<size(nums);r++){
            if(nums[r]==0) temp++;
            while(temp>k){
                if(nums[l]==0) temp--;
                l++;
            } ans=max(ans,r-l+1);
        } return ans;
    }
};