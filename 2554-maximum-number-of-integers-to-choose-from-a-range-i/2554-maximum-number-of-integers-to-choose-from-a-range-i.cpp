class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int>s;
        for(auto i:banned){
            if(i<=n) s.insert(i);
        }
        int ans=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()){
            if(sum+i<=maxSum){
                sum+=i;
                ans++;
            }
            else break;}
        } return ans;
    }
};