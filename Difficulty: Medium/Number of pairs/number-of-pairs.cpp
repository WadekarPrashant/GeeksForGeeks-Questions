//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

int cnt_more_than_X_in_Y(int target,vector<int>&brr,int m){
    
    return m-(upper_bound(brr.begin(),brr.end(),target)-brr.begin());
}

class Solution {
  public:
    long long countPairs(vector<int> &arr, vector<int> &brr) {
     
     
     int n=arr.size();
     
     int m=brr.size();
     
     sort(brr.begin(),brr.end());
     
     long long ans=0;
     
     int one=count(brr.begin(),brr.end(),1);
     
    int two=count(brr.begin(),brr.end(),2);
         
     int three=count(brr.begin(),brr.end(),3);
      
     int four=count(brr.begin(),brr.end(),4);
    
     for(auto x:arr){
         
         
         if(x==1){
             
             continue;
         }
         
         
         ans=ans+one;
         
       if(x==2){
             
             
             ans=ans+cnt_more_than_X_in_Y(x,brr,m);
             
             ans=ans-three-four;
             
         }
         
         
         else if(x==3){
             
             ans=ans+two;
             
          ans=ans+cnt_more_than_X_in_Y(x,brr,m);
         }
      
      
      else{
          ans=ans+cnt_more_than_X_in_Y(x,brr,m);   
          
      }
     }
     
     return ans;
    
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<int> ex;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            ex.push_back(num);
        a = ex;
        getline(cin, input);
        ss.clear();
        ss.str(input);
        int num2;
        while (ss >> num2)
            b.push_back(num2);

        Solution ob;
        cout << ob.countPairs(a, b) << endl;
    }
}
// } Driver Code Ends