//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        map<int , int> m;
        multimap<int ,int , greater<int>> k;
        
        for(auto &i : arr){
            m[i]++;
        }
        
        for(auto &i : m){
           k.insert({i.second, i.first});
        }
        
        vector<int> ans;
        
        for(auto &i : k){
            for (int j = 0; j < i.first; j++) {
            ans.push_back(i.second);
        }
        }
        
        return ans;
    }


};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends