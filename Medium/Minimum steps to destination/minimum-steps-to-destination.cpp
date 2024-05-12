//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     int minSteps(int d) {
        int add=1;
        int elem=0,cnt=0;
        while(elem<d){
            elem+=add;
            add++;
            cnt++;
        }
        while((elem-d)%2!=0){
            cnt++;
            elem+=add;
            add++;
        }
        return cnt;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends