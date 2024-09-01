class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        
        int n=s.size()-1;
       
        while(n>=0 && s[n]==' ') n--;
        while (n>=0 && s[n]!=' '){
            n--;
            c++;
        } return c;
    }
};