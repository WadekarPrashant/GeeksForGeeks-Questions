//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
public:
    int countWays(int n, string s){
        // code here
        int mod = 1003;
        
         // Create dp tables for True and False values
        vector<vector<int>> dp_true(n, vector<int>(n, 0));
        vector<vector<int>> dp_false(n, vector<int>(n, 0));
        
        // Initialize diagonal elements based on T or F
        for (int i = 0; i < n; i++) {
            if (s[i] == 'T') {
                dp_true[i][i] = 1;
            } else {
                dp_false[i][i] = 1;
            }
        }
        
        // Iterate over the lengths of substrings
        for (int l = 3; l <= n; l += 2) {
            for (int i = 0; i < n - l + 1; i++) {
                int j = i + l - 1;
                for (int k = i + 1; k < j; k += 2) {
                    // Compute the number of ways for each operator
                    if (s[k] == '&') {
                        dp_true[i][j] += dp_true[i][k - 1] * dp_true[k + 1][j];
                        dp_false[i][j] += dp_true[i][k - 1] * dp_false[k + 1][j] + dp_false[i][k - 1] * dp_true[k + 1][j] + dp_false[i][k - 1] * dp_false[k + 1][j];
                    } else if (s[k] == '|') {
                        dp_true[i][j] += dp_true[i][k - 1] * dp_false[k + 1][j] + dp_false[i][k - 1] * dp_true[k + 1][j] + dp_true[i][k - 1] * dp_true[k + 1][j];
                        dp_false[i][j] += dp_false[i][k - 1] * dp_false[k + 1][j];
                    } else if (s[k] == '^') {
                        dp_true[i][j] += dp_true[i][k - 1] * dp_false[k + 1][j] + dp_false[i][k - 1] * dp_true[k + 1][j];
                        dp_false[i][j] += dp_true[i][k - 1] * dp_true[k + 1][j] + dp_false[i][k - 1] * dp_false[k + 1][j];
                    }
    
                    dp_true[i][j] %= mod;
                    dp_false[i][j] %= mod;
                }
            }
        }
        
        return dp_true[0][n - 1] % mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.countWays(n, s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends