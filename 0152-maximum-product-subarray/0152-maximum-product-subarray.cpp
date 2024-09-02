class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=INT_MIN;
        int n=nums.size();
        int p=1;
        int s=1;
        for(int i=0;i<n;i++){
            if(p==0) p=1;
            if(s==0) s=1;
            p*=nums[i];
            s*=nums[n-i-1];
            mx=max(mx,max(p,s));
        } return mx;
    }
};