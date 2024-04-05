//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int solve(int st,vector<int>&nums,vector<int>&dp){
        if(dp[st]!=-1){
            return dp[st];
        }
        int ans = 1;
        for(int i=st+1;i<nums.size();i++){
            if(nums[i]>=nums[st]+i-st){
                ans = max(ans,1 + solve(i,nums,dp));
            }
        }
        return dp[st] = ans;
    }
    int min_operations(vector<int>& nums) {
        int lps = 1;
        vector<int>dp(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            lps = max(lps,solve(i,nums,dp));
        }
        return nums.size()-lps;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution ob;
        int ans = ob.min_operations(nums);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends