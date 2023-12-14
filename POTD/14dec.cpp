class Solution{
    public:
    long long countWays(int n, int k) {
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return k;
        }
        std::vector<long long> dp(n + 1, 0);
        const int mod = 1000000007; 
        dp[1] = k;
        dp[2] = static_cast<long long>(k) * k;    
        for (int i = 3; i <= n; ++i) {
            long long same_color = (k - 1) * dp[i - 1];
            long long diff_color = (k - 1) * dp[i - 2];
            dp[i] = (same_color + diff_color) % mod;
        }
        return dp[n];
    }
};
