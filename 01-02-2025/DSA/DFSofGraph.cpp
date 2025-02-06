class Solution{
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node, vector<vector<int>>& adj,vector<int>& vis, vector<int>& ans){
        vis[node]=1;
        ans.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis,ans);
            }
        }
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        int n=adj.size();
        int node=0;
        vector<int>vis(n+1);
        vector<int>ans;
        dfs(node,adj,vis,ans);
        return ans;
        
    }
}