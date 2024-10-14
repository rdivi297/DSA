class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>q;
         long long ans =0;
        
        for(auto& i:nums) q.push(i);
        while(k--){
            int i=q.top();
            q.pop();
            ans+=i;
            q.push(ceil(i/3.0));
        } return ans;
    }
};