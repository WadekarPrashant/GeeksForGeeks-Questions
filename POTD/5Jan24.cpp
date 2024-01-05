class Solution{
	public:
	int mod = int(1e9 + 7);
	
	int f(int n, vector<int>& dp)
	{
	    if(n < 0) return 0;
	    if(n == 0) return 1;
	    if(n == 1) return 2;
	    if(dp[n] != -1) return dp[n];
	    
	    int notTake = f(n-1, dp)%mod;
	    int take = f(n-2, dp)%mod;
	    
	    return dp[n] = (notTake%mod + take%mod)%mod;
	}
	
	int TotalWays(int N)
	{
	    vector<int> dp(N+1, -1);
	    long long ans = f(N, dp)%mod;
	    
	    long long res = (ans * ans)%mod;
	    
	    return res;
	}
};
