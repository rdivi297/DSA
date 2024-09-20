class Solution {
public:
    
    string shortestPalindrome(string s) {
        string t={s.rbegin(),s.rend()};
        int n=s.size();
        string_view s1(s);
        string_view t1(t);
        int i=0;
        for(i=0;i<n;i++){
            if(s1.substr(0,n-i)==t1.substr(i)) return t.substr(0,i)+s;
        } return t+s;
    }
};