//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string compareNM(int n, int m){
        // code here
        if(n < m) {
            return "lesser";
        }
        else if(n > m) {
            return "greater";
        }
        else {
            return "equal";
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m ; cin>>n>>m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    }
    return 0;
}
// } Driver Code Ends