class Solution {
public:
   void help(vector<vector<int>>&ans,vector<int>&a,vector<int>&c,int target,int ind){
         if(target==0){
            ans.push_back(a);
            return;
         }
         for(int i=ind;i<c.size();i++){
            if(i>ind && c[i]==c[i-1]) continue;
            if(c[i]<=target){
                a.push_back(c[i]);
                help(ans,a,c,target-c[i],i+1);
                    a.pop_back();

         }

   }}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> a;
        sort(candidates.begin(),candidates.end());
        help(ans,a,candidates,target,0);
        return ans;
    }
};