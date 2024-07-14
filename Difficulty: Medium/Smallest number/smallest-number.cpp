//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        if ( s > 9 * d) return "-1";
        string res = "";
        
        while (d--) {
            if (s > 1 && d != 0) {
                int num = min(s-1,9);
                res += to_string(num);
                s -= num;
            } else {
                if (d != 0) res += "0";
                else res += to_string(s);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends