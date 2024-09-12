class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int s=words.size();
        bool check[26];
        for(char word:allowed) check[word-'a']=true;
        for(string word:words){
            for(char c:word){
                if(!check[c-'a']) {s--; break;}
            }
        } return s;
    }
};