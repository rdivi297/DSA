class Solution {
public:
    int findComplement(int num) {
        if(num==2) return 1;
        vector<int> ans;
        int res=0;
          while(num!=0){
              ans.push_back(num%2);
              num/=2;
          }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            if(ans[i]==0) res+=pow(2,ans.size()-1-i);
        } return res;
    }
};