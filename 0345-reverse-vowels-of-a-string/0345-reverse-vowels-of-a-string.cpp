class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int n=s.size()-1;
        set<char> ch{'a','e','i','o','u','A','E','I','O','U'};
        while(i<n){
           if(ch.find(s[n])==ch.end()) n--;
        else  if(ch.find(s[i])==ch.end()) i++;
            else {swap(s[i],s[n]);i++;n--;}
        } return s;
    }
};