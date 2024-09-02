class Solution {
public:
    unordered_map<string,bool> m;
    bool solve(string a, string b){
        if(a.compare(b)==0) return true;
        if(a.size()<=1) return false;
        string key=a+" "+b;
        if(m.find(key)!=m.end()) return m[key];
        bool flag= false;
        int n=a.size();
        for(int i=1;i<a.size();i++){
            if((solve(a.substr(0,i),b.substr(n-i,i)) && solve(a.substr(i,n-i),b.substr(0,n-i)))|| (solve(a.substr(0,i),b.substr(0,i)) && solve(a.substr(i,n-i),b.substr(i,n-i)))) {flag=true;
            break;}
        } return m[key]=flag;
    }
    bool isScramble(string s1, string s2) {
        if(s1.size()!=s2.size()) return false;
        return solve(s1,s2);
    }
};