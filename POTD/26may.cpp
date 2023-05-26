class Solution{
    public:
    long long power(int n,int x){
        if(x==0) return 1;
        long long temp = n;
        while(--x){
            temp *= n;
        }
        return temp;
    }
    int dp[1001][1001];
    const int M = 1000000007;
    int numOfWays(int n, int x)
    {
        memset(dp,-1,sizeof(dp));
        return ways(1,n,x);
    }
    int ways(int i,int n,int x){
        long long p = power(i,x);
        if(p>n) return 0;
        if(p==n || n==0) return 1;
        if(dp[i][n]!=-1) return dp[i][n];
        int ans = 0;
        ans = (ans + ways(i+1,n-p,x))%M;
        ans = (ans + ways(i+1,n,x))%M;
        return dp[i][n] =  ans;
    }
};
