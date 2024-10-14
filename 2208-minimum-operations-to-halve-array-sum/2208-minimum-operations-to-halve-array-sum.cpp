class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum=accumulate(nums.begin(),nums.end(),0.0);
        double t=sum/2.0;
        priority_queue<double>q;
        for(auto&i:nums) q.push(i);
        int p=0;
        while(sum>t){
            double i=q.top();
            q.pop();
            i/=2.0;
            sum-=i;
            q.push(i);
            p++;
        } return p;
    }
};