//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity W.
     vector<vector<int>> memo;

    int knapsackhelper(int index, int W, vector<int>& wt, vector<int>& val) {
        if (index == 0 ) {
            return 0;
        }

        if (memo[index][W] != -1) {
            return memo[index][W];
        }

        int ans = 0;
        if (wt[index - 1] <= W) {
            ans += val[index - 1] + knapsackhelper(index - 1, W - wt[index - 1], wt, val);
            } 
            ans = max(ans,knapsackhelper(index - 1, W, wt, val));
    

        memo[index][W] = ans;
        return ans;
    }

    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        int n = val.size();
        memo.resize(n + 1, vector<int>(W + 1, -1));
        return knapsackhelper(n, W, wt, val);
    }
};

//{ Driver Code Starts.

int main() {
    // taking total testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // reading number of elements and weight
        int n, w;
        vector<int> arr, val, wt, drr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            val.push_back(number);
        }

        w = arr[0];
        n = val.size();
        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            wt.push_back(number);
        }
        Solution ob;
        cout << ob.knapSack(w, wt, val) << endl;
    }
    return 0;
}
// } Driver Code Ends