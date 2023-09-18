class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n){
        long long arr[n+4],mod = 1e9+7;
        arr[1] = 1,arr[2]=2,arr[3] = 4;
        for(int i=4;i<=n;i++)arr[i] = (arr[i-1]+arr[i-2]+arr[i-3])%mod;
        return arr[n];
    }
};