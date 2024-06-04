//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        int zero = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                zero++;
            }
            else{
                break;
            }
        }
        s.erase(s.begin(),s.begin()+zero);
        reverse(s.begin(),s.end());
        int carry = 0;
        int first = s[0]-'0';
        if(first==0){
            s[0]='1';
            reverse(s.begin(),s.end());
            string st = s;
            return st;
        }
        carry = 1;
        s[0]='0';
        for(int i=1;i<s.length();i++){
            if(carry & s[i]=='1'){
                s[i]='0';
            }
            else{
                s[i]='1';
                carry--;
                break;
            }
        }
        if(carry){
            s+='1';
        }
        reverse(s.begin(),s.end());
        string st = s;
        return st;
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends