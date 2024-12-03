//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minChar(string& s) {
        string rev=s;
        reverse(rev.begin(),rev.end());
        s+="$";
        s+=rev;
        int pre=0,suff=1;
        vector<int>LPS(s.length(),0);
        while(suff<s.length()){
            if(s[suff]==s[pre]){
                LPS[suff]=pre+1;
                suff++;
                pre++;
            }
          else{
              if(pre==0)
              suff++;
             else
             pre=LPS[pre-1];
          }  
        }
        return rev.length()-LPS[s.length()-1];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends