class Solution {
public:
    char repeatedCharacter(string s) {
        char ans;
        for(int i=1;i<s.size();i++){
            if(s.substr(0,i).find(s[i])!=string::npos) {
                ans=s[i];
                break;
            }
        } return ans;
    }
};