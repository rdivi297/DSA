class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>m;
        if(s.size()<10) return {};
        vector<string>ans;
        for(int i=0;i<s.size()-10+1;i++){
            string temp = s.substr(i,10);
            if(m[temp]==1) {
                ans.push_back(temp);
                m[temp]++;
            }
            else m[temp]++;
        } return ans;
    }
};