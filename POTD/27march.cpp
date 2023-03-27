class Solution {
  public:
   int countWaystoDivide(int n, int k) {
        if(n<k) return 0;
        vector<vector<int>> dp(n+1,vector<int>(k+1));
        for(int i=1;i<=n;i++) dp[i][1]=1;
        dp[0][0]=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=2;j<=k;j++)
            {
                if(i>=j) dp[i][j]= dp[i-1][j-1] + dp[i-j][j];
                else dp[i][j]=dp[i-1][j-1];
            }
        }
        return dp[n][k];
    }
};