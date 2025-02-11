class Solution {
  private:
      bool isValid(vector<vector<char>>& board,char c,int row ,int col){
          for(int i=0;i<9;i++){
              if(board[row][i]==c) return false;
              if(board[i][col]==c) return false;
              if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)]==c) return false;
          }
          return true;
      }
      bool solve(vector<vector<char>>& board){
          int n=board.size(),m=board[0].size();
          for(int r=0;r<n;r++){
              for(int c=0;c<m;c++){
                  if(board[r][c]=='.'){
                      for(char i='1';i<='9';i++){
                          if(isValid(board,i,r,c)){
                              board[r][c]=i;
                              if(solve(board)==true){
                                  return true;
                              }
                              else{
                                  board[r][c]='.';
                              }
                          }
                      }
                      return false;
                  }
              }
          }
          return true;
      }
  public:
      void solveSudoku(vector<vector<char>>& board) {
          solve(board);
      }
  };