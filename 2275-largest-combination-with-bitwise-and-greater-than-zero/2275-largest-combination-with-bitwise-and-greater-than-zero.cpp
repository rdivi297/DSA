class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int>bc(32,0);
        for(auto cand:candidates){
            int i=0;
            while(cand){
                bc[i]+=cand&1;
                i++;
                cand>>=1;
            }
        } return *max_element(begin(bc),end(bc));
    }
};