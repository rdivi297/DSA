class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.length();
        while(i<n && s[i]==' ') i++;
        int sign=1;
        while(i<n && (s[i]=='-' || s[i]=='+') && isdigit(s[i+1])) {
            sign=s[i]=='-'?-1:1;
            i++;
        }
        long ans=0;
        while(i<n && isdigit(s[i])){
            ans=ans*10+(s[i]-'0');
            if(ans*sign>INT_MAX) return INT_MAX;
            if (ans*sign<INT_MIN) return INT_MIN;
           i++;
        }
        
        return ans*sign;
    }
};