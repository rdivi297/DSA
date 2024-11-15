class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3) return 0;
        int i=0;
        int j=2;
        int ans=0;
        while(j<s.size()){
            if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2]) ans++;
            i++;j++;
        }return ans;
    } 
};