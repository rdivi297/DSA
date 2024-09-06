class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int n=nums.size()-1;
        int res=0;
        while(l<=n){
            int m=(l+n)/2;
            if(nums[m]==target) return m;
            else if(nums[m]>target) {res=m;n=m-1;}
            else {l=m+1;}
        } return l;
    }
};