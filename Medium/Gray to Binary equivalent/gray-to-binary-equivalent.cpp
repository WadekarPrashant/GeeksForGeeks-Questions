//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        if(n==0) return 0;
        
        string bin="";
        string gray="";
        while(n>0)
        {
            int rem=n%2;
            bin+=to_string(rem);
            n/=2;
        }
        reverse(bin.begin(),bin.end());
        gray+=to_string(bin[0]-'0');
        for(int i=1;i<bin.size();i++)
        {
            int x=bin[i]-'0';
            int y=gray[i-1]-'0';
            int z=x^y;
            gray+=to_string(z);
        }
        
        int ans=0;
        
        reverse(gray.begin(),gray.end());
        
        for(int i=0;i<gray.size();i++)
        {
            int x=gray[i]-'0';
            ans+=x*pow(2,i);
        }
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends