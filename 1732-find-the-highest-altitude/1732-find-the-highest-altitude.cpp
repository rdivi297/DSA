class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int al=0;
        int maxal=0;
        for(int i=0;i<gain.size();i++){
            al+=gain[i];
            maxal=max(maxal,al);
        } return maxal;
    }
};