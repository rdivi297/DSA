class Solution {
public:
    long long minimumSteps(string s) {
        int l=0;
        int h=s.size()-1;
        long long c=0;
        long long ans=0;
        while(h>=0){
            if(s[h]=='0') c++;
            if(s[h]=='1'){
                 ans+=c;
            } h--;
        } return ans;
        }
    
};