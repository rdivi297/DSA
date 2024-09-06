class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
       int mini,minj,maxi,maxj;
        mini=minj=INT_MAX;
        maxi=maxj=INT_MIN;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]) {
                    mini=min(mini,i);
                    minj=min(minj,j);
                    maxi=max(maxi,i);
                    maxj=max(maxj,j);
                }
            } 
        } return (maxi-mini+1)*(maxj-minj+1);
    }
};