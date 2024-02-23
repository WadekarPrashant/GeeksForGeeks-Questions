//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        int maxProfit(vector<int>&prices){
            int buy1 = INT_MIN, sell1 = 0;
            int buy2 = INT_MIN, sell2 = 0;
            for (int price : prices) {
                buy1 = max(buy1, -price);
                sell1 = max(sell1, buy1 + price);
                buy2 = max(buy2, sell1 - price);
                sell2 = max(sell2, buy2 + price);
            }
            return sell2;
        }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    }

}

// } Driver Code Ends