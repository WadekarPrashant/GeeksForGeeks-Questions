//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int mod = 1e9+7;
    int solve(int i, int j, string s1, string s2, vector<vector<int>> &dp)
    {
        if(j < 0)
            return 1;
        if(i < 0)
            return 0;
            
        if(dp[i][j] != -1) 
            return dp[i][j];
            
        int same = 0, notsame = 0;
        // got both char same -> two cases pick it both pointer move forward and not pick it only i will move
        if(s1[i] == s2[j])
            same = solve(i-1,j-1,s1,s2,dp) + solve(i-1,j,s1,s2,dp);
        else
            notsame = solve(i-1,j,s1,s2,dp);
        // didn't get the same element -> just move the i pointer to find that element
            
        return dp[i][j] = (same + notsame)%mod;
    }
    int countWays(string s1, string s2) {
        // code here
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,s1,s2,dp);
    }


};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        Solution obj;
        int res = obj.countWays(s1, s2);

        cout << res << endl;
    }
}

// } Driver Code Ends