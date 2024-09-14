class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int c=0;int ans=0;
        int n=nums.size();
        for(int i=0;i<n;++i){
           if(nums[i]==mx){
               c++;
               ans=max(c,ans);
           }
           if(i>0 && nums[i]!=mx && nums[i-1]==mx){
               c=0;
           }
        } return ans;
    }
};