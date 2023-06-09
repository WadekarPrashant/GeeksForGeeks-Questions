class Solution
{ public:
        void Rearrange(int arr[], int n)
        {
         stable_partition(arr, arr + n, [](int x) { return x < 0; });
        }}; 
