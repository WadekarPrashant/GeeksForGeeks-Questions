class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
        //Complete the function
        
        long long int result = 0; 

        for (int i = 0; i < 32; i++) { 
            long long int countSetBits = 0; 
            long long int twos = 1LL << i; 

            for (int j = 0; j < n; j++) {
                if (arr[j] & twos) {
                    countSetBits++;
                }
            }

          
            result += (twos * countSetBits * (n - countSetBits));
        }

        return result;
        
    }
};
