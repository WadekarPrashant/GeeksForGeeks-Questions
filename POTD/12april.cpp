class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
         n=n/2;
         int  ans=0;
         reverse(arr.begin(),arr.end());
         sort(arr.begin()+n,arr.end());
         for(int i=0;i<n;i++){
             auto it=lower_bound(arr.begin()+n,arr.end(),5*arr[i]);
             int id=it-arr.begin();
                 ans+=2*n-id;
         }
         return ans;
    }  
};