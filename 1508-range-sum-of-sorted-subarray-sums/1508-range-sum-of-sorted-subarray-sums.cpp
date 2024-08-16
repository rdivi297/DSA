class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int summ=0;
           for(int j=i;j<nums.size();j++) {
            summ+=nums[j];
            ans.push_back(summ);}

        }
        sort(ans.begin(),ans.end());
        int sum=0;
        int md=1e9+7;
        for(int i=left-1; i<right;i++){
            sum =(sum+ ans[i])%md;
        } return sum;
    }
};