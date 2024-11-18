class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=size(code);
        vector<int>ans(n,0);
        if(k==0) return ans;
        for(int i=0;i<n;i++){
            if(k>0){
                for(int j=i+1;j<i+1+k;j++){
                    ans[i]+=code[j%n];
                }
                
            }
            else {
                int res=0;
                for(int j=i-abs(k);j<i;j++)
                    ans[i] += code[(j + code.size()) % code.size()];
            }
        } return ans;
        }
    };
