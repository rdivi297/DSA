class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int rox=0;
        for(int n:nums) rox^=n;
        return rox;
    }
};