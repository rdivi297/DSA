class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>q;
        vector<int> ans;
        for(auto i:arr){
            q.push({abs(i-x),i});
            if(q.size()>k) q.pop();
        }
        
        while(!q.empty()){
            ans.push_back(q.top().second);
            q.pop();
        } 
        sort(ans.begin(),ans.end());
        return ans;
            
    }
};