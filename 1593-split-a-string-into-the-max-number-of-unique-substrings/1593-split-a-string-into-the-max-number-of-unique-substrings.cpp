class Solution {
public:
    int help(string &s,int start,unordered_set<string>&seen){
        if(start==s.size()) return 0;
        int maxc=0;
        for(int end=start+1;end<=s.size();end++){
             string sub=s.substr(start,end-start);
            if(seen.find(sub)==seen.end()){
                seen.insert(sub);
                maxc=max(maxc,1+help(s,end,seen));
                seen.erase(sub);
            }
        } return maxc;
    }
    int maxUniqueSplit(string s) {
        unordered_set<string>ss;
        return help(s,0,ss);
    }
};