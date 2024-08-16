class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int ones=ranges::count(nums,1);
        int oness=0;
        int maxones=0;
        int l=0;
        for(int i=0;i<2*n;i++){
            if(nums[i%n]) oness++;
            if((i-l+1)>ones) {
                oness-=nums[l%n];
                l++;
            }
            maxones=max(maxones,oness);
        } return ones-maxones;
    }
};