class Solution {
public:
    
    long long solver(int i, int j, int n, int k, vector<vector<int>> &arr, vector<vector<vector<int>>> &dp) {
        
        if (i == n - 1 && j == n - 1) {
            if (k == arr[i][j]){
                return 1;
            }
            else{
                return 0;
            }
        }
    
        if (dp[i][j][k] != -1){
            return dp[i][j][k];
        }
    
        long long right = 0;
        long long down = 0;
    
        if (i + 1 <= n - 1 && k - arr[i][j] >= 0){
            right = solver(i + 1, j, n, k - arr[i][j], arr, dp);
        }
        if (j + 1 <= n - 1 && k - arr[i][j] >= 0){
            down = solver(i, j + 1, n, k - arr[i][j], arr, dp);
        }
    
        return dp[i][j][k] = right + down;
        
    }
    
    long long numberOfPath(int n, int k, vector<vector<int>> arr) {
        
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(k + 1, -1)));
        return solver(0, 0, n, k, arr, dp);
        
    }
    
};
