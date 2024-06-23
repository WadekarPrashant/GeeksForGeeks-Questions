//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        stack<int>st;
        int open  = 1;
        vector<int>ans;
        for(auto x : str){
            if(x == '('){
                ans.push_back(open);
                st.push(open++);
            }
            else if(x ==')'){
                int currTop = st.top();
                ans.push_back(currTop);
                st.pop();
            }
        }
        return ans;
       
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends