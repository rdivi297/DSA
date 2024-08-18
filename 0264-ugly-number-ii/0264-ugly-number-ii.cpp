class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> nums;
        if(n==0) return 0;
        nums.push_back(1);
        int i2,i3,i5;
        i2=i3=i5=0;
       
        for(int i=1;i<n;i++){
       int  next_num=min({2*nums[i2],3*nums[i3],5*nums[i5]});
            nums.push_back(next_num);
            if(next_num==2*nums[i2]) i2++;
            if(next_num==3*nums[i3]) i3++;
            if(next_num==5*nums[i5]) i5++;
        }  return nums[n-1];
    }
};