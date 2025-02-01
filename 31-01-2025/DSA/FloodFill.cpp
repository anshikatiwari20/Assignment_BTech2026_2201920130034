class Solution {
private:
    void dfs(int r,int c,vector<vector<int>>& image,vector<vector<int>>& ans,int color,int stcolor,int row[],int col[]){
        int n=image.size();
        int m=image[0].size();
        ans[r][c]=color;
        for(int i=0;i<4;i++){
            int nrow=r+row[i];
            int ncol=c+col[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==stcolor && ans[nrow][ncol]!=color){
                dfs(nrow,ncol,image,ans,color,stcolor,row,col);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int stcolor=image[sr][sc];
        vector<vector<int>>ans=image;
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
        dfs(sr,sc,image,ans,color,stcolor,row,col);
        return ans;
    }
};