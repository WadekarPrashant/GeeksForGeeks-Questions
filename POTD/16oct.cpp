class DSU{
    public:
    vector<int> parent;
    vector<int> size;
    DSU(int n){
        parent.resize(n);
        size.resize(n,1);
        for(int i=0;i<n;i++) parent[i] = i;
    }
    int find(int x){
        if(x==parent[x]) return x;
        return parent[x] = find(parent[x]);
    }
    void Union(int x,int y){
        int parx = find(x), pary = find(y);
        if(parx==pary) return ;
        if(size[parx]>size[pary]){
            parent[pary] = parx;
            size[parx]+= size[pary];
        } else{
            parent[parx] = pary;
            size[pary]+= size[parx];
        }
        return;
    }
};
class Solution
{
public:

    int largestIsland(vector<vector<int>>& grid) 
    {
        // Your code goes here.
        int n = grid.size();
        DSU ds(n*n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    int now = i*n+j;
                    if(j+1<n and grid[i][j+1]) ds.Union(now,i*n+j+1);
                    if(j>=1 and grid[i][j-1]) ds.Union(now,i*n+j-1);
                    if(i+1<n and grid[i+1][j]) ds.Union(now,(i+1)*n+j);
                    if(i>=1 and grid[i-1][j]) ds.Union(now,(i-1)*n+j);
                }
            }
        }
        if(ds.size[ds.find(0)]==n*n) return n*n;
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    int res=1;
                    set<int> pars;
                    if(i+1<n and grid[i+1][j]) pars.insert(ds.find((i+1)*n+j));
                    if(i-1>=0 and grid[i-1][j]) pars.insert(ds.find((i-1)*n+j));
                    if(j+1<n and grid[i][j+1]) pars.insert(ds.find(i*n+j+1));
                    if(j-1>=0 and grid[i][j-1]) pars.insert(ds.find(i*n+j-1));
                    for(auto itr = pars.begin(); itr != pars.end(); itr++) res+= ds.size[*itr];
                    ans = max(ans,res);
                }
            }
        }
        return ans;
    }
};
