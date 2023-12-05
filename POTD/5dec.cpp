class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr + n);
        int res = arr[n-1] - arr[0];
        int i = lower_bound(arr, arr + n, k) - arr;
        for(int j = max(i, 1); j < n; j++) {
            int mini = min(arr[0] + k, arr[j] - k);
            int maxi = max(arr[n-1] - k, arr[j-1] + k);
            res = min(res, maxi - mini);
        }
        return res;
    }
};
