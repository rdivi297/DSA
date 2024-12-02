class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n=searchWord.size();
        stringstream ss(sentence);
        string w;int c=0;
        while(ss>>w){
            c++;
            if(w.substr(0,n)==searchWord) {
                return c;
            }
        }
        return -1;
    }
};