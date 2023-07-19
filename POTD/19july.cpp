class Solution{
  public:
    int solve(int i ,int j ,string s,string t,vector<vector<int>>&dp){
        if(i<0 or j<0 )return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int match=0;
        if(s[i]==t[j])match=1+solve(i-1,j-1,s,t,dp);
        int nomatch=max(solve(i-1,j,s,t,dp),solve(i,j-1,s,t,dp));
        return dp[i][j]=max(nomatch,match);
    }
    int longestPalinSubseq(string A) {
        string t=A;
        reverse(t.begin(),t.end());
        // vector<vector<int>>dp(A.size()+1,(vector<int>(A.size()+1,0)));
        int n=A.size();
        vector<int>prev(n+1,0),cur(n+1,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(A[i-1]==t[j-1])cur[j]=1+prev[j-1];
                else cur[j]=max(prev[j],cur[j-1]);
            }
            prev=cur;
        }
        return prev[n];
    }
};
