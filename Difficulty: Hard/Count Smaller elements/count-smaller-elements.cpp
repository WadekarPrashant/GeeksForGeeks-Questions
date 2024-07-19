//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        vector<int> ans;
        
        vector<int> res;
        
        for(int i=arr.size()-1;i>=0;i--){
            int index=lower_bound(ans.begin(),ans.end(),arr[i])-ans.begin();
            res.push_back(index);    
            
            if(index==ans.size()){
                ans.push_back(arr[i]);
            }
            else{
                ans.insert(ans.begin()+index,arr[i]);
            }
            
        }
        reverse(res.begin(),res.end());
        return(res);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends