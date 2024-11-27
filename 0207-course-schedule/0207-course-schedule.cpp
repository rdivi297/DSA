class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=size(prerequisites);
        vector<int>indeg(numCourses,0);
        vector<vector<int>>adj(numCourses);
             for(auto j:prerequisites){
                 adj[j[0]].push_back(j[1]);
                 indeg[j[1]]++;
             
         }
        queue<int>q;
        
        for(int i=0;i<numCourses;i++){
            if(indeg[i]==0) q.push(i);
        }
        int k=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            k++;
            for(auto i:adj[node]){
                indeg[i]--;
                if(indeg[i]==0) q.push(i);
            }
        } return k==numCourses;

    }
};