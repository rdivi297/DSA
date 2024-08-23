class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.size()-1;
        int i=0;
        while(i<n){
           if(s[i]!=s[n]) return ispal(s,i+1,n) || ispal(s,i,n-1);
                               i++;
                               n--;
        } return true;
    
    }
     bool ispal(string &s,int i,int n) {
       
        while(i<n){
              if(s[i]!=s[n]) return false;
                  
                  i++;
                  n--;
              
              
        }
        return true;
    }
};