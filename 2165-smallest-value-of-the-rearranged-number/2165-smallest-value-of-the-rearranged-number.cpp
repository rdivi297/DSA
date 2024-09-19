class Solution {
public:
    long long smallestNumber(long long num) {
        if(num==0) return 0;
        vector<int>ans;
        bool flag= false;
       if(num<0) flag =true;
       while(num){
           ans.push_back(num%10);
           num/=10;
       }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++) {
            if(!flag && ans[i]!=0)  { swap(ans[i],ans[0]); break;}
        }
        long long res=0;
        for(auto i:ans){
            res=res*10+i;
        }
        return res;
    }
};