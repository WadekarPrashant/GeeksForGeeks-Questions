class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
  void quickSort(int arr[], int low, int high)
    {
        if(low>=high) return;

        int p = partition(arr,low, high);
    
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
        
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int pivot = arr[low]; 

        int i = low+1, j = high; 
        while(i<=j)
        {
            if(arr[i]<=pivot) i++;
            if(arr[j]>pivot) j--;
    
            if(i<=j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
        
        return j;
        
    }
};
