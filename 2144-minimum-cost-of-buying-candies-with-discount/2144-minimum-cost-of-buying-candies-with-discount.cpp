class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size()==1) return cost[0];
        sort(rbegin(cost),rend(cost));
        int ans=0;
        for(int i=0;i<cost.size();i+=3){
            if(i+1<cost.size()) ans+=cost[i]+cost[i+1];
            else ans+=cost[i];
        } return ans;
    }
};