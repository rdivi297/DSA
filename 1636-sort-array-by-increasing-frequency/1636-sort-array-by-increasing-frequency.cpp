class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        priority_queue<pair<int,int>> q;
        for(auto i: nums) m[i]++;
        for(auto i:m){
            q.push({-i.second,i.first});
        }
        vector <int> ans;
        while(!q.empty()) {
            auto x=q.top();
            q.pop();
            
            for(int i=0;i<-x.first;i++){
                ans.push_back(x.second);
            } 
        }
    
        return ans;
    }
};