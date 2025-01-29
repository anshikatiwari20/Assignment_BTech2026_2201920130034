class Solution {
private:
    void bfs(int i,int j,vector<vector<int>>& vis,vector<vector<char>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        vis[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            vector<pair<int,int>>direction={{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
            for(auto dir:direction){
                int nrow=i+dir.first;
                int ncol=j+dir.second;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
                
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    cnt++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return cnt;
    }
};