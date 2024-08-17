class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxi=values[0];
        int best=0;
        for(int i=1;i<values.size();i++){
            best=max(best,maxi+values[i]-i);
            maxi=max(maxi,values[i]+i);
            
        }
   return best;
    }
};