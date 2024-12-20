class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         if(accumulate(nums.begin()+1,nums.end(),0)==0) return 0;
        for(int i=1;i<nums.size();i++){
            if(accumulate(nums.begin(),nums.begin()+i,0)==accumulate(nums.begin()+i+1,nums.end(),0)) return i;
        } 
       
        if(accumulate(nums.begin(),nums.end()-1,0)==0) return nums.size()-1;
        return -1;
    }
};