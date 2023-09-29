class Solution {
  public:
    void markVisited(int i, int j, vector<vector<bool>>&visited, vector<vector<int>>&grid)
    {
        if(i < 0 || j < 0|| i >= grid.size() || j >= grid[0].size() || !grid[i][j] || visited[i][j]) 
        return;
        visited[i][j] = 1;
        markVisited(i + 1, j, visited, grid);
        markVisited(i - 1, j, visited, grid);
        markVisited(i, j + 1, visited, grid);
        markVisited(i, j - 1, visited, grid);
    }
    
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>>visited(n, vector<bool>(m,0));
        
        for(int i = 0; i < n; i++)
        {
            if(grid[i][0] and !visited[i][0])
            markVisited(i,0,visited, grid);
            
            if(grid[i][m-1] and !visited[i][m-1])
            markVisited(i,m-1,visited,grid);
        }
        
        for(int j = 0; j < m; j++)
        {
            if(grid[0][j] and !visited[0][j])
            markVisited(0,j,visited, grid);
            
            if(grid[n-1][j] and !visited[n-1][j])
            markVisited(n-1,j,visited,grid);
        }
        
        int count = 0;
         for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j]==1 and !visited[i][j]) count++;
            }
        }
        return count;
    }
};
