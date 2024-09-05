class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
             int l=0;
             int h=letters.size()-1;
        char res=letters[0];
           while(l<=h){
               int m=l+(h-l)/2;
               if(letters[m]==target) l=m+1;
               if(letters[m]>target) {
                   res=letters[m];
                   h=m-1;
               } else l=m+1;
           } return res;
    }
};