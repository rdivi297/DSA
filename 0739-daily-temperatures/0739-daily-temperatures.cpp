class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
        vector<int>ans(temperatures.size());
        for(int i=0;i<size(temperatures);i++){
            while(!s.empty() && temperatures[i]>temperatures[s.top()]){
                ans[s.top()]=i-s.top();
                s.pop();
            } s.push(i);
        } return ans;
        
    }
};