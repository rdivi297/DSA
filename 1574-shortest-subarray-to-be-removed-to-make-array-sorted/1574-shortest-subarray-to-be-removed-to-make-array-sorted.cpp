class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int r=arr.size()-1;
        while(r>0 && arr[r-1]<=arr[r]) r--;
        int res=r;
        for(int l=0;l<r && (l==0 || arr[l-1]<=arr[l]);l++){
            while(r<arr.size() && arr[l]>arr[r]) r++;
            res=min(res,r-l-1);
        } return res;
            
    }
};