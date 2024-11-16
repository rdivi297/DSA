class Solution {
public:
    bool issort(vector<int>&n,int i,int j){
        for(int k=i;k<j-1;k++) if(n[k+1]-n[k]!=1) return false;
        return true;
    } 
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n-k+1;i++){
            if(issort(nums,i,i+k)) ans.push_back(nums[i+k-1]);
            else ans.push_back(-1);
        } return ans ;
    }
};