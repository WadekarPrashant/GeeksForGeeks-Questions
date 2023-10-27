class Solution{
  public:
    // Memoization code
    int f(int i, int j, string &s1, string &s2, vector<vector<int>>& dp)
    {
        if(i==0 || j==0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        if(s1[i-1] == s2[j-1]) {
            return dp[i][j] = 1 + f(i-1, j-1, s1, s2, dp);
        }
        
        return dp[i][j] = max(f(i-1, j, s1, s2, dp), f(i, j-1, s1, s2, dp));
    }
    
    // Tabulation code
    int fTab(string S)
    {
        string s1 = S;
        reverse(S.begin(), S.end());
        string s2 = S;
        int n = S.length();
        
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                if(s1[i-1] == s2[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
    
    // Most space optimized code
    int Space_Opti(string S)
    {
        string s1 = S;
        reverse(S.begin(), S.end());
        string s2 = S;
        int n = S.length();
        
        vector<int> curr(n+1, 0), prev(n, 0);
        
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                if(s1[i-1] == s2[j-1]) {
                    curr[j] = 1 + prev[j-1];
                }
                else {
                    curr[j] = max(prev[j], curr[j-1]);
                }
            }
            prev = curr;
        }
        return curr[n];
    }
  
    int minimumNumberOfDeletions(string S) { 
        // code here
        int n = S.length();
        // string s1 = S;
        // reverse(S.begin(), S.end());
        
        // vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        
        // int maxPalSub = f(n, n, s1, S, dp);
        
        // int maxPalSub = fTab(S);
        
        int maxPalSub = Space_Opti(S);
        
        return (n - maxPalSub);
    } 
};
