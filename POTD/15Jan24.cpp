class Solution{
    public:
    
    int dp[1001][1001];
     
    int func(int ind,int total,vector<int>&cost,int n){
        if(ind==n)return 0;
        if(dp[ind][total]!=-1) return dp[ind][total];
        int notpick=func(ind+1,total,cost,n);
        int pick=0;
        if(cost[ind]<=total)pick=1+func(ind+1,total-cost[ind]+(cost[ind]*9)/10,cost,n);
        return dp[ind][total]=max(pick,notpick);
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        memset(dp,-1,sizeof(dp));
        return func(0,total,cost,n);
    }
};