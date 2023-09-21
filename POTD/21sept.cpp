class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
{
        if (n == 1) return arr[0];
        
        if (n == 2) return max(arr[0], arr[1]);

        arr[1] = max(arr[0], arr[1]);

        for (int i = 2; i < n; i++)
        {
            auto withHouse = arr[i] + arr[i - 2];
            arr[i] = max(withHouse, arr[i-1]);
        }
        
        return arr[n-1];
 }
};