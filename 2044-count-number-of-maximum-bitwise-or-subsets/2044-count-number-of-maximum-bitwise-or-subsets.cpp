class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxor=0;
        for(int i:nums) maxor|=i;
        return help(nums,0,0,maxor);
    }
    int help(vector<int>&nums,int i,int curror,int maxor){
        if(i==nums.size()){
            if(curror==maxor) return 1;
            return 0;
        }
        return help(nums,i+1,curror,maxor)+help(nums,i+1,curror|nums[i],maxor);
    }
};