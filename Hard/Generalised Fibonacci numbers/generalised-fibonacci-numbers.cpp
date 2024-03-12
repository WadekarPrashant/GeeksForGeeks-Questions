//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:

vector<vector<long long>> multiply(vector<vector<long long>>&A, vector<vector<long long>>&B, long long m){
       int size = A.size();
       vector<vector<long long>>result(size, vector<long long>(size,0));
       for(int i=0;i<size;i++){
           for(int j=0;j<size;j++){
               for(int k=0;k<size;k++){
                   result[i][j]=(result[i][j]+(A[i][k]%m * B[k][j]%m)%m)%m;
               }
           }
       }
       return result;
    }
    vector<vector<long long>> power(vector<vector<long long>>&mat, long long R, long long m){
        if(R==1)return mat;
        vector<vector<long long>>ans = power(mat,R/2,m);
        ans = multiply(ans,ans,m);
        if(R%2==1){
            ans = multiply(ans,mat,m);
        }
        return ans;
    }
    long long genFibNum(long long a, long long b, long long c, long long n, long long m) {
        // code here
        if(n<=2)return 1%m;
        vector<vector<long long>>mat{{a,b,c},{1,0,0},{0,0,1}};
        vector<vector<long long>>ans=power(mat,n-2,m);
        return (ans[0][0]+ans[0][1]+ans[0][2])%m;
        
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b,c,n,m;
        
        cin>>a>>b>>c>>n>>m;

        Solution ob;
        cout << ob.genFibNum(a,b,c,n,m) << endl;
    }
    return 0;
}
// } Driver Code Ends