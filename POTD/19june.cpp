class Solution{
    public:
    
   void arrange(long long arr[], int n) 
    {
        int arr1[n];
        for(int i=0;i<n;i++)
        {
            arr1[i] = arr[i];
        }
        
        for(int i=0;i<n;i++)
        {
            arr[i] = (arr1[arr1[i]]);
        }
   
    }
};
