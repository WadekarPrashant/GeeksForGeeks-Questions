//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution {
public:
    string removeDuplicates(string s) {
        unordered_map<char, int> f;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (f.find(s[i]) == f.end()) {
                f[s[i]] = i;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (f.find(s[i]) != f.end()) {
                if (f[s[i]] < i) {
                    s.erase(s.begin() + i);
                }
            }
        }

        return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends