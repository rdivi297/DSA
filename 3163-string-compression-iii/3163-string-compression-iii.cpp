class Solution {
public:
    string compressedString(string word) {
        string comp="";
        int n=word.size();
        for(int i=0;i<n;){
            char x=word[i];
            int c=0;
            while(i<n && word[i]==x && c<9){
                i++;
                c++;
            }
            comp+=to_string(c)+x;
        } return comp;
    }
};