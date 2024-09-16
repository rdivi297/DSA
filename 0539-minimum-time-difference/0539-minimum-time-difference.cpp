class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>ans(timePoints.size());
        for(int i=0;i<timePoints.size();i++){
            ans[i]=((timePoints[i][0]-'0')*10 + (timePoints[i][1]-'0'))*60 + (timePoints[i][3]-'0') * 10 + (timePoints[i][4]-'0');
        }
        int res=INT_MAX;
       sort(ans.begin(),ans.end());
       for(int i=1;i<timePoints.size();i++){
           res= min(res, ans[i]-ans[i-1]);
       }
        return min(res, ans[0]+1440-ans[timePoints.size()-1]);
    }
};