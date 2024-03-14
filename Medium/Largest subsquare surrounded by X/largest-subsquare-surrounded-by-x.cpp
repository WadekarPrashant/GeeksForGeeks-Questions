//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class dist
  {
      public:
       int first=0;
       int second=0;
  };
class Solution {
  public:
  
    int largestSubsquare(int n, vector<vector<char>> mat) {
        // code here
        int m= mat[0].size();
       vector<vector<dist>>h(n,vector<dist>(m));
       for(int j=0;j<m;j++)
       {
           if(mat[0][j]=='X')
           {
               if(j==0)
               {
                   h[0][j].first=1;
                   h[0][j].second=1;
               }
               else
               {
                   h[0][j].first=1;
                   h[0][j].second= h[0][j-1].second+1;
               }
           }
       }
       for(int i=0;i<n;i++)
       {
           if(mat[i][0]=='X')
           {
               if(i==0)
               {
                   h[i][0].first=1;
                   h[i][0].second=1;
               }
               else
               {
                   h[i][0].first= h[i-1][0].first+1;
                   h[i][0].second=1;
               }
           }
       }
       for(int i=1;i<n;i++)
       {
           for(int j=1;j<m;j++)
           {
               if(mat[i][j]=='X')
               {
                   h[i][j].first= h[i-1][j].first+1;
                   h[i][j].second= h[i][j-1].second+1;
               }
           }
       }
       int maxi= 0;
       for(int i=n-1;i>=0;i--)
       {
           for(int j=m-1;j>=0;j--)
           {
               if(mat[i][j]=='X')
               {
                   int x= h[i][j].second;
                   int y = h[i][j].first;
                   int mini= min(x,y);
                   if(mini > maxi)
                   {
                       for(int k= mini;k>=1;k--)
                       {
                           int hori= h[i-(k-1)][j].second;
                           int ver= h[i][j-(k-1)].first;
                           if(hori>= k && ver>= k)
                           {
                               maxi= max(maxi,k);
                           }
                       }
                   }
                   else
                   {
                       continue;
                   }
               }
           }
       }
       return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<char>> a(n, vector<char>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cin >> a[i][j];
        }
        Solution ob;
        cout << ob.largestSubsquare(n, a) << "\n";
    }
}
// } Driver Code Ends