class Solution {
public:
    int maxConsecutiveAnswers(string answerkey, int k) {
        int l=0;
        int ans=0;
        int temp=0;
        for(int r=0;r<size(answerkey);r++){
            if(answerkey[r]=='T') temp++;
            while(temp>k){
                if(answerkey[l]=='T') temp--;
                l++;
            } ans=max(ans,r-l+1);
        }
        int x=0;
        int res=0;
        int tep=0;
        for(int r=0;r<size(answerkey);r++){
            if(answerkey[r]=='F') tep++;
            while(tep>k){
                if(answerkey[x]=='F') tep--;
                x++;
            } res=max(res,r-x+1);
        }
        return max(res,ans);
    }
};