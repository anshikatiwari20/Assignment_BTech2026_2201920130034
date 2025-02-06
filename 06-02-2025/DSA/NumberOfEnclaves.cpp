class Solution {
private:
    void dfs(int r, int c, vector<vector<int>>&vis, vector<vector<int>>& grid, int row[], int col[]){
        vis[r][c]=1;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<4;i++){
            int nrow=r+row[i];
            int ncol=c+col[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && !vis[nrow][ncol]){
                dfs(nrow, ncol, vis, grid, row, col);
            }
        }

    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int row[4]={-1,0,1,0};
        int col[4]={0,1,0,-1};
        for(int j=0;j<m;j++){
            if(grid[0][j]==1 && !vis[0][j]){
                dfs(0,j,vis,grid,row,col);
            }
            if(grid[n-1][j]==1 && !vis[n-1][j]){
                dfs(n-1,j,vis,grid,row,col);
            }
        }
        for(int i=0;i<n;i++){
            if(grid[i][0]==1 && !vis[i][0]){
                dfs(i,0,vis,grid,row,col);
            }
            if(grid[i][m-1]==1 && !vis[i][m-1]){
                dfs(i,m-1,vis,grid,row,col);
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};