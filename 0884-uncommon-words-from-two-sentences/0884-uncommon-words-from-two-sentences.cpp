class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>m;
        stringstream s(s1+" "+s2);
        string word;
        while(s>>word) m[word]++;
        vector<string> ans;
        for(auto i:m){
            if(i.second==1) ans.push_back(i.first);
        } return ans;
    }
};