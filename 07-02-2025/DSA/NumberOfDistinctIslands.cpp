class Solution {
  private:
    void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<int>>&grid,vector<pair<int,int>>&vec,int row0,int col0){
        vis[r][c]=1;
        vec.push_back({r-row0,c-col0});
        int n=grid.size();
        int m=grid[0].size();
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=r+row[i];
            int ncol=c+col[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && !vis[nrow][ncol]){
                dfs(nrow,ncol,vis,grid,vec,row0,col0);
            }
        }
    }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    vector<pair<int,int>>vec;
                    dfs(i,j,vis,grid,vec,i,j);
                    st.insert(vec);
                }
            }
        }
        return st.size();
    }
};