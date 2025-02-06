class Solution {
private:
    void dfs(int r, int c, vector<vector<int>>&vis, vector<vector<char>>& board, int row[], int col[]){
        int n=board.size();
        int m=board[0].size();
        vis[r][c]=1;
        for(int i=0;i<4;i++){
            int nrow=r+row[i];
            int ncol=c+col[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && board[nrow][ncol]=='O' && !vis[nrow][ncol]){
                dfs(nrow, ncol, vis, board, row, col);
            }
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int row[4]={-1,0,1,0};
        int col[4]={0,1,0,-1};
        for(int j=0;j<m;j++){
            if(board[0][j]=='O' && !vis[0][j]){
                dfs(0,j,vis,board,row,col);
            }
            if(board[n-1][j]=='O' && !vis[n-1][j]){
                dfs(n-1,j,vis,board,row,col);
            }
        }
        for(int i=0;i<n;i++){
            if(board[i][0]=='O' && !vis[i][0]){
                dfs(i,0,vis,board,row,col);
            }
            if(board[i][m-1]=='O' && !vis[i][m-1]){
                dfs(i,m-1,vis,board,row,col);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && !vis[i][j]){
                    board[i][j]='X';
                }
            }
        }
    }
};