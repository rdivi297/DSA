class Solution {
public:
    int atmost(vector<int>&nums,int k){
        unordered_map<int,int>s;
        int l=0;
        int temp;
        int ans =0;
        int n=size(nums);
        for(int r=0;r<n;r++){
            s[nums[r]]++;
            while(size(s)>k){
                s[nums[l]]--;
                if(s[nums[l]]==0) s.erase(nums[l]);
                l++;
            }
            ans+=r-l+1;
        } return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};