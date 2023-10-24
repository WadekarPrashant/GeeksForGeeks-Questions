class Solution{
public:
    int dp[501][501];
    
    bool isPal(string& s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    
    int solve(string &s, int i, int j) {
        if(i>=j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(isPal(s,i,j)) return 0;
        int mn = INT_MAX;
        for(int k=i; k<j; k++){
            int x,y;
            if(dp[i][k] != -1) x = dp[i][k];
            else dp[i][k] = x = solve(s,i,k);
            
            if(dp[k+1][j] != -1) y = dp[k+1][j];
            else dp[k+1][j] = y = solve(s,k+1,j);
            
            int ans = x + y + 1;
            mn = min(mn, ans);
        }
        
        return dp[i][j] = mn;
    }

    int palindromicPartition(string str) {
        memset(dp, -1, sizeof(dp));
        return solve(str,0,str.size()-1);
    }
};
