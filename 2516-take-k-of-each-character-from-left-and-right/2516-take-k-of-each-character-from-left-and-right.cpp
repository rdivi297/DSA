class Solution {
public:
    int takeCharacters(string s, int k) {
        int n=size(s);
        unordered_map<char,int>st;
        for(auto i:s) st[i]++;
        if(st['a']<k || st['b']<k || st['c']<k) return -1;
        int j=0;
        int ans=INT_MAX;
        for(int i=0;i<size(s);i++){
            st[s[i]]--;
            while(st[s[i]]<k){
                st[s[j]]++;
                j++;
            }
            ans=min(ans,j+n-1-i);
        } return ans;
    }
};