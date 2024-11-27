class Solution {
public:
    int n;
    pair<int,int> getcoord(int val){
        int rt=(val-1)/n;
        int rb=(n-1)-rt;
        int col=(val-1)%n;
        if((n%2==1 && rb%2==1) || (n%2==0 && rb%2==0)) col= (n-1)-col;
        return {rb,col};
    }
    int snakesAndLadders(vector<vector<int>>& board) {
        queue<int>q;
         n=board.size();
        int steps=0;
        q.push(1);
        vector<vector<bool>>vis(n,vector<bool>(n,false));
        vis[n-1][0]=true;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int x=q.front();
                q.pop();
                if(x==n*n) return steps;
                for(int i=1;i<=6;i++){
                    int val= x+i;
                    if(val>n*n) break;
                    pair<int,int> coord= getcoord(val);
                    int r=coord.first;
                    int c=coord.second;
                    if(vis[r][c]) continue;
                    vis[r][c]=true;
                    if(board[r][c]==-1) q.push(val);
                    else q.push(board[r][c]);
                }
            } steps++;
        } return -1;
    }
};