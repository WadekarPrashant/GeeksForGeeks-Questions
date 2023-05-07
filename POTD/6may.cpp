class Solution {
  public:
  vector<vector<int>> dp;
    int solve( int N, int K, int target, vector<int> &coins){
        if(K==0){
            if(target==0){
                return 1;
            }else{
                return 0;
            }
        }
        
        if(dp[K][target]!=-1) return dp[K][target];
        int ans=0;
        for(int i=0; i<N; i++){
            if(target>=coins[i])
                if(solve(N, K-1, target-coins[i], coins)) return dp[K][target]=1;
            
        }
        return dp[K][target]=0;
    }
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        // code here
        dp=vector<vector<int>>(K+1, vector<int>(target+1, -1));
        return solve(N, K, target, coins);
    }
};
