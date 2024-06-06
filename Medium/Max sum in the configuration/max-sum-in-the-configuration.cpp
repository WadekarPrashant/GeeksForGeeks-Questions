//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int a[], int n) {
        long long initialSum = 0;
        long long int total = 0;
        for(int i = 0; i<n; i++){
            initialSum += (long long)a[i] * i;
            total += a[i];
        }
        
        long long int maxi = initialSum;
        
        int index = n-1;
        
        long long int tempSum = initialSum;
        
        while(index > 0){
            tempSum += total - (long long)n * a[index];
            index--;
            maxi = max(tempSum, maxi);
        }
        
        return maxi;
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends