class Solution {
public:
    int first(vector<int>&a,int l ,int h,int target){
        int res=-1;
        while(l<=h){
            int m=(l+h)/2;
            if(a[m]==target){
                res=m;
                h=m-1;
            }
            else if(a[m]<target) l=m+1;
            else h=m-1;
        } return res;
    }
    int last(vector<int>&a,int l,int h,int target){
        int res=-1;
        while(l<=h){
            int m=(l+h)/2;
            if(a[m]==target){
                res=m;
                l=m+1;
            }
            else if(a[m]<target) l=m+1;
            else h=m-1;
        } return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        
        int n=nums.size()-1;
        int f=first(nums,0,n,target);
        int l=last(nums,0,n,target);
        ans.push_back(f);
         ans.push_back(l);
        return ans;
    }
};