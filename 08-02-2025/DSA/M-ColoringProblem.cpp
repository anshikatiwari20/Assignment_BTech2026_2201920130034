class Solution{
  private:
    bool isPossible(int node,int v,vector<vector<int>>& graph,int color[],int i){
        for(int k=0;k<v;k++){
            if(k!=node && graph[k][node]==1 && color[k]==i) return false;
        }
        return true;
    }
    bool solve(int node,int v,vector<vector<int>>& graph,int color[],int m){
        if(node==v){
            return true;
        }
        for(int i=1;i<=m;i++){
            if(isPossible(node,v,graph,color,i)){
                color[node]=i;
                if(solve(node+1,v,graph,color,m)==true) return true;
                else{
                    color[node]=0;
                }
            }   
        }
        return false;
    }
  public:
    bool graphColoring(int v, vector<pair<int, int>>& edges, int m) {
        // code here
        vector<vector<int>>graph(v,vector<int>(v,0));
        for(int i=0;i<edges.size();i++){
            int u1=edges[i].first;
            int u2=edges[i].second;
            graph[u1][u2]=1;
            graph[u2][u1]=1;
        }
        
        int color[v]={0};
        if(solve(0,v,graph,color,m)==true){
            return true;
        }
        return false;
    }

};