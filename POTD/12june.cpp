class Solution{
  public:
    
    int f(int price[], int n,int index, vector<int> &dp)
    {
        if(index==n)
            return 0;
        
        if(dp[index]!=-1)
            return dp[index];
            
        int ans = 0;
        for(int i=1;i<=n-index;i++)
        {
            int cut = price[i-1] + f(price,n,index+i,dp);
            
            ans = max(ans,cut);
        }
        return dp[index] = ans;
    }
    int cutRod(int price[], int n) {
        
        vector<int> dp(n,-1);
        return f(price,n,0,dp);
    }
};