//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {

  public:
    int findMinCost(string X, string Y, int costX, int costY){
        int n=X.size();
        int m=Y.size();    
        
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));  //LCS
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(X[i-1]==Y[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
        
        int count=dp[n][m];
        
        int t1=n-count;
        int t2=m-count;
        
        
        return(t1*costX + t2*costY);
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;

        int costX, costY;
        cin >> costX >> costY;

        Solution ob;
        cout << ob.findMinCost(x, y, costX, costY);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends