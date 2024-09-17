class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>> q;
        for(auto i:points){
            q.push({i[0]*i[0]+i[1]*i[1],i});
            if(q.size()>k) q.pop();
        }
        vector<vector<int>> ans;
        while(!q.empty()){
            ans.push_back(q.top().second);
            q.pop();
        } return ans;
    }
};