class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr, int n) {
    long sum = 0;
    long max_sum = INT_MIN;
    int i = 0, j = 0;
    while (j < n) {
        sum += arr[j];
        if (j - i + 1 == k) {
            max_sum = max(max_sum, sum);
            sum -= arr[i];
            i++;
        }
        j++;
    }
    return max_sum;
}


};
