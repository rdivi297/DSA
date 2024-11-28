class Solution {
public:
    bool isposs(vector<int>&p,int h,int k){
        for(int i=0;i<p.size();i++){
            int temp=p[i]/k;
            if(p[i]%k!=0) temp++;
            h-=temp;
            if(h<0) return false;
        } return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(begin(piles),end(piles));
        while(l<=r){
            int m=(l+r)/2;
            if(isposs(piles,h,m)) r=m-1;
            else l=m+1;
        } return l;
    }
};