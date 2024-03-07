//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    string longestSubstring(string str, int n) {
        
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        
        int maxLen = 0, index = 0;
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(str[i-1] == str[j-1] && i!=j)
                {
                    if(i+dp[i-1][j-1] < j)
                    {
                        dp[i][j] = 1+dp[i-1][j-1];
                        if(dp[i][j] > maxLen)
                        {
                            maxLen = dp[i][j];
                            index = i-maxLen;
                        }
                    }
                }
            }
        }
        
        if(maxLen == 0) return "-1";
        else return str.substr(index,maxLen);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends