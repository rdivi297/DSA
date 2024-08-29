class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int i=0;
        int n=s.size()-1;
        while(i<n){
            if(s[i++]!=s[n--]) return false;
        } return true;
    }
};