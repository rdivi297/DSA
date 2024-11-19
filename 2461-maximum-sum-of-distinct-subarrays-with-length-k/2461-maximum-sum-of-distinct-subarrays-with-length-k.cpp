class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
          int n=nums.size();
        long long l=0;
        long long r=0;
        long long maxx=0;
        long long ans=0;
        unordered_map<long long,long long>m;
        for(r=0;r<n;r++){
            m[nums[r]]++;
            ans+=nums[r];
            if(r-l==k){
                m[nums[l]]--;
                if(!m[nums[l]]) m.erase(nums[l]);
                ans-=nums[l];
                l++;
            }
            if(r-l+1==k && m.size()==k) {
                maxx=max(ans,maxx);
            }
        } return maxx;
    }
};