class Solution{
  public:
    // Function to detect cycle in an undirected graph.
    bool detectCycle(int src, vector<vector<int>>& adj, int vis[]){
        vis[src]=1;
        queue<pair<int,int>>q;
        q.push({src,-1});
        while(!q.empty()){
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,node});
                }
                else if(parent!=it){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(vector<vector<int>>& adj) {
        int n=adj.size();
        int vis[n]={0};
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(detectCycle(i,adj,vis)){
                    return true;
                }
            }
        }
        return false;
    }
}