class Solution{
public:
int solve(int i , int j , int n , int m ,vector<vector<int>>&M ,   vector<vector<int>>&dp)
{
    if(i<0 || i>=n || j<0 || j>=m)
    {
        return 0;
    }
    
    if(dp[i][j]!=-1)  return dp[i][j];
    
    int du=M[i][j]+solve(i-1,j+1,n,m,M,dp);
    int r=M[i][j]+solve(i,j+1,n,m,M,dp);
    int dl=M[i][j]+solve(i+1,j+1,n,m,M,dp);
    
   dp[i][j]= max(du,max(r,dl));
}
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code heref
        int maxi=INT_MIN;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int j=0;j<n;j++)
        {
          int ans= solve(j,0,n,m,M,dp);
           maxi=max(ans,maxi);
        }
        return maxi;
    }
};
