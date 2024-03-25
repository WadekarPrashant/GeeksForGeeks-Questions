//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
void rec(vector<string>&ans,int i ,int n,string s,int ct1,int ct0){
    if(i>=n){
        int ct1=0;
        for(auto it:s)if(it=='1')ct1++;
        if(ct1>=n-ct1)ans.push_back(s);
        return ;
    }
    if(ct1==ct0){
    rec(ans,i+1,n,s+'1',ct1+1,ct0);}
    else if(ct1>ct0){
    rec(ans,i+1,n,s+'1',ct1+1,ct0);
    rec(ans,i+1,n,s+'0',ct1,ct0+1);
    }
}
vector<string> NBitBinary(int n)
{
    vector<string>ans;
    string p="1";
    rec(ans,1,n,p,1,0);
    return ans;
}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends