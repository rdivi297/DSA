class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int l=0;
        int ans=0;
        int res=0;
        for(int r=0;r<arr.size();r++){
            ans+=arr[r];
            if(r-l==k) {
                ans-=arr[l];
                l++;
            }
            if(r-l+1==k && ans/k >=threshold) {
                res++;
            }
        } return res;
    }
};