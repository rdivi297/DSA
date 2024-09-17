class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string ,int>m;
        for(auto i:words1) m[i]++;
        for(auto i:words2) if(m[i]<2) m[i]--;
        int c=0;
        for(auto i:m) if(i.second==0) c++;;
        return c;
    }
};