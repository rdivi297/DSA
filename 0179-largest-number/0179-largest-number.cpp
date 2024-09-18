bool comp(int a, int b){
    return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    }
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),comp);
        string s="";
        for(auto i:nums) s+=to_string(i);
        
        return s[0]=='0'?"0":s;
        
    }
};