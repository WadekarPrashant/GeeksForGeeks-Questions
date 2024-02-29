//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
        long long ans = 0;
        
        for(int k=0;k<32;k++){
            int ct1 = 0;
            int ct0 = 0;
            for(int i=0;i<n;i++){
                int t = ((arr[i]>>k)&1);
                if(t==1){
                    ct1++;
                }
                else{
                    ct0++;
                }
            }
            ans+=(ct1*(1ll)*ct0);
        }
        
        return ans*2;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends