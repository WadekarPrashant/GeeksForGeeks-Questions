class Solution {
  public:
  #define append push_back
    bool dfs(int i, vector<int> g[], vector<bool> &vis, vector<bool> &v){
        vis[i] = true;
        if (g[i].size()==0) return v[i] = true;
        bool ok=true;
        for(auto child: g[i]){
            if (vis[child]) {
                if (!v[child]) return false;
            }
            ok &= dfs(child, g, vis, v);
        }
        return v[i] = ok;
    }
    vector<int> eventualSafeNodes(int n, vector<int> g[]) {
        vector<bool> vis(n, false);
        vector<bool> v = vis;
        for(int i=0; i<n; i++){
            if (!vis[i]) dfs(i, g, vis, v);
        }
        vector<int> ans;
        for(int i=0; i<n; i++){
            if (v[i]) ans.append(i);
        }
        return ans;
    }
};
