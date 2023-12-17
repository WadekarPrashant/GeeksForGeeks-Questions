class Solution{
private:
    int solve(int *arr, int i, int n, vector<int>& dp)
    {
        if(i >= n){
            return 0;
        }
        if(dp[i] != -1) return dp[i];
        int pick = arr[i] + solve(arr, i+2, n, dp);
        int notPick = solve(arr, i+1, n, dp);
        return dp[i] = max(pick, notPick);
    }
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	   vector<int> dp(n+2, -1);
	   return solve(arr, 0, n, dp);
	}
};
