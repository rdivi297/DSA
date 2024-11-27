class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indeg(numCourses,0);
        for(auto i:prerequisites){
            adj[i[0]].push_back(i[1]);
            indeg[i[1]]++;
        }
        queue<int>q;
        vector<int> ans;
        for(int i=0;i<numCourses;i++){
            if(indeg[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for (auto i:adj[node]){
                indeg[i]--;
                if(indeg[i]==0) q.push(i);
            }
        }
        reverse(ans.begin(),ans.end());
        if(ans.size()==numCourses) return ans;
        return {};
    }
};