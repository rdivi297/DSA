class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string nice=s+s;
        return nice.find(goal)<nice.size();
    }
};