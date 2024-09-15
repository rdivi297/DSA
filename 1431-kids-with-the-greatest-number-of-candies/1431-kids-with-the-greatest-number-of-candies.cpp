class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans ;
        int x=*max_element(candies.begin(),candies.end());
        for(auto i:candies){
            if(i+extraCandies>=x) ans.push_back(1);
            else ans.push_back(0);
        }
        return ans;
        
    }
};