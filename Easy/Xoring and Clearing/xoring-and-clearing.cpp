//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void printArr(int n, int arr[]) {
        // Your code for printing array here
         for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void setToZero(int n, int arr[]) {
        // Use memset to set arr to zero
        for(int i=0;i<n;i++){
            arr[i]=0;
        }
    }

    void xor1ToN(int n, int arr[]) {
        // Xor arr[i]^i
        
        for(int i=0;i<n;i++){
            arr[i]^=i;
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.xor1ToN(n, arr);
        obj.printArr(n, arr);
        obj.setToZero(n, arr);
        obj.printArr(n, arr);
    }
    return 0;
}

// } Driver Code Ends