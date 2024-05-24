//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int mod = 1000000007;
    int countPartitions(int n, int d, vector<int>& arr) {
       int totalSum = 0;
       for(auto it : arr){
           totalSum = (totalSum + it);
       }
       
       //check for odd cases
       if((totalSum + d) % 2 != 0) return 0;
       
       int target =((totalSum + d)/2) % mod;
       
       vector<vector<int>> dp(n,vector<int>(target+1,-1));
       
       return countPartitionsHelper(n-1,target,arr,dp);
    }
    
    int countPartitionsHelper(int index,int target, vector<int> &arr, vector<vector<int>> &dp){
        //base conditions
        if(target < 0) return 0;
        if(index < 0) return target == 0;
        
        if(dp[index][target] != -1) return dp[index][target];
        
        if(arr[index] <= target){
            dp[index][target] = ((countPartitionsHelper(index -1, target - arr[index],arr,dp) % mod)
                                 + (countPartitionsHelper(index -1, target,arr,dp) % mod)) % mod;
        }
        else{
            dp[index][target] = countPartitionsHelper(index -1, target,arr,dp) % mod;
        }
        
        return dp[index][target];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends