class Solution {
public:
    vector<vector<int>> ans;
    
    int timer = 0;
    vector<bool> vis;
    vector<int> first, low;
    
    void dfs(int cur, int par, vector<int> adj[]){
        vis[cur] = true;
        first[cur] = low[cur] = timer++;
        
        for(auto ch: adj[cur]){
            if(ch==par) continue;
            if(vis[ch]) low[cur] = min(low[cur], first[ch]);
            else{
                dfs(ch, cur, adj);
                
                low[cur] = min(low[cur], low[ch]);
                
                if(low[ch] > first[cur]) ans.push_back({min(ch, cur), max(ch, cur)});
            }
        }
    }
    
vector<vector<int>>criticalConnections(int n, vector<int> adj[]){
    // Code here
    timer = 0;
    
    vis.assign(n, false);
    first.assign(n, -1);
    low.assign(n, -1);
    
    for(int i = 0; i < n; i++){
        if(!vis[i]) dfs(i, -1, adj);
    }
    
    sort(ans.begin(), ans.end());
    
    return ans;
}
};
