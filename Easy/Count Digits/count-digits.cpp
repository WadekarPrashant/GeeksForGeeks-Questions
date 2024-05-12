//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends


class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int cnt = 0;
        int num = N;
        while(N>0){
        int digit = N%10;
        if(digit!=0 && num%digit ==0){
            cnt ++;
        }
        N = N/10;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends