class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans=0;
        int neg=0;
        int mineg=INT_MAX;
        for(int i=0;i<size(matrix);i++){
            for(int j=0;j<size(matrix);j++){
                ans+=abs(matrix[i][j]);
                if(matrix[i][j]<0) neg++;
                mineg=min(mineg,abs(matrix[i][j]));
            }
        } return neg%2==0?ans:ans-2*mineg;
    }
};