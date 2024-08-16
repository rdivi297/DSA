class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n=arrays.size();
        int m=arrays[0].size();
        int minn=arrays[0][0];
        int maxx=arrays[0].back();
        int maxdis=0;
        for( int  i=1;i<n;i++){
            maxdis=max(maxdis,abs(arrays[i].back()-minn));
            maxdis=max(maxdis,abs(maxx-arrays[i][0]));
            minn=min(minn,arrays[i][0]);
            maxx=max(maxx,arrays[i].back());
        } return maxdis;
        
    }
};