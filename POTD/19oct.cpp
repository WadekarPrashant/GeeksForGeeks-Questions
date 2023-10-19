class Solution
{
	public:
int nodeLevel(int n, vector<int> v[], int x) 
	{
	    vector<bool> vis(n, false);
	    queue<pair<int, int>> q;
	    q.push({0, 0});
	    vis[0]=true;
	    while(!q.empty()){
	        int vertex = q.front().first;
	        int level = q.front().second;
	        if (vertex==x) return level;
	        q.pop();
	        for(auto child: v[vertex]){
	            if (vis[child]) continue;
	            q.push({child, level+1});
	            vis[child]=true;
	        }
	    }
	    return -1;
	}
};
