class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0;
        vector<pair<int,int>> ans;
        for(int i=0;i<nums.size();i++){
             ans.push_back({nums[i],i});
        }

        int h=nums.size()-1;
        sort(ans.begin(),ans.end());
        while(l<h){
            if(ans[l].first+ans[h].first==target) return {ans[l].second,ans[h].second};
            else if(ans[l].first+ans[h].first<target) l++;
            else h--;
        } return {};
    }
};