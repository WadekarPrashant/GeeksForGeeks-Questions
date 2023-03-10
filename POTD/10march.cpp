class Solution {
  public:
   long long maxTripletProduct(long long arr[], int n) {
    	sort(arr,arr+n);
    	
    	return max({arr[n-1]*arr[n-2]*arr[n-3], arr[n-1]*arr[0]*arr[1], arr[0]*arr[1]*arr[2]});
    }
};