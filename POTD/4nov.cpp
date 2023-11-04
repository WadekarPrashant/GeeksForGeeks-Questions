class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int s = 0;
        int e = n - 1;
        while(s <= e) {
            int mid = (s + e) / 2;
            if(arr[mid - 1] == 0 and arr[mid] == 1) {
                return mid;
            }
            else if(arr[mid - 1] == 0 and arr[mid] == 0) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return -1;
    }
};
