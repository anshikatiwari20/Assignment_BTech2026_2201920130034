class Solution{
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        int n=adj.size();
        queue<int>q;
        q.push(0);
        vector<int>vis(n+1);
        vis[0]=1;
        vector<int>ans;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it: adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        return ans;
    }
}