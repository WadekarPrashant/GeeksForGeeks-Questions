//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    int wordBreak(int n, string s, vector<string> &dictionary) {
                vector<bool> dp(s.size()+1, 0);

        dp[0]=true;

        unordered_set<string> st(dictionary.begin(), dictionary.end());

        for(int i=1;i<=s.size();i++){

            for(int j=0;j<i;j++){

                if(dp[j] && st.count(s.substr(j, i-j))){

                    dp[i]=true;

                    break;

                }

            }

        }

            return dp[s.size()];
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends