//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution
{
	public:
        long long int func(long long int x,long long int n,long long int M){
            long long int e=n;
            long long int ans=1;
            long long int base=x;
            while(e>0){
                if(e%2!=0){
                    ans*=base;
                    ans%=M;
                    e--;
                }else{
                    base*=base;
                    base%=M;
                    e/=2;
                }
            }
            return ans;
            
        }
        long long int PowMod(long long int x,long long int n,long long int M)
        {
            // Code here
            long long int result=func(x,n,M);
            return result%M;
        }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int x, n, m;
    	cin >> x >> n >> m;
    	Solution ob;
    	long long int ans = ob.PowMod(x, n, m);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends