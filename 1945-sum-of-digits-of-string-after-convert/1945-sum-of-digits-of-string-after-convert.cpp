class Solution {
public:
     int solve(string &s,int sum){
         string x="";
        for(auto i:s){
            x+=to_string(i-'a'+1);
        }
        for(auto i:x){
            sum+=i-'0';
        }
        return sum;
    }
        
    int getLucky(string s, int k) {
        int sum=solve(s,0); 
        for(int i=1;i<k;i++){
            int ans=0;
            while(sum>0){
               ans+=sum%10;
               sum/=10;
            } sum=ans;
        } return sum;
    }
    
};