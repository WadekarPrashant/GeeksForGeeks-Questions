class Solution {
  public:
   int getMaximum(int n, vector<int> &arr) {
        // code here
        long long sum = 0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        
        while(sum%n!=0){
            n--;
        }
        return n;
    }
};
