class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans({arr.begin(),arr.end()});
        sort(arr.begin(),arr.end());
        unordered_map<int,int> m;
        
        for(int i =0,j=1;i<arr.size();i++){
            if(m.find(arr[i])==m.end()){
                m[arr[i]]=j;
                j++;
            }
        }
        for(int i=0;i<arr.size();i++){
            ans[i]=m[ans[i]];
        } return ans;
    }
};