class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>q;
        for(auto& i:piles) q.push(i);
        while(k--){
            int i=q.top();
            q.pop();
            i-=floor(i/2);
            q.push(i);
        } 
        int ans=0;
        while(!q.empty()){
            int i=q.top();
            ans+=i;
            q.pop();
        } return ans;
    }
};