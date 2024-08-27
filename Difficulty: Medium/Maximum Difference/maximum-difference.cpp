//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        int n =arr.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        
        for(int i=0; i<n-1;i++){
         
           for(int j=i+1;j<n;j++){
                
                if(arr[j]<arr[i]){
                    right[i]=arr[j];

                    break;
                }
                
            }
            
        }
        
        
        
        for(int i=n-1; i>0;i--){
            for(int j=i-1;j>=0;j--){
                  if(arr[j]<arr[i]){
                   left[i]=arr[j];
                    
                    break;
                }
                
            }
            
            
        }
        
        
        int maxi=INT_MIN;


        for(int i=0 ; i<n;i++){
            maxi=max(maxi, abs(left[i]-right[i]));
        }
        
       return maxi; 
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

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends