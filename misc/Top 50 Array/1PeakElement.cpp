#include<iostream>

using namespace std;


int peakElement(int arr[], int n)
{
   
    if(n == 0)
        return 0;
        
    if(n == 1)
        return arr[0];
        
    int l, r, mid;
    l = 0;
    r = n - 1;
    mid = (l + r) / 2;
    
    while(l <= r){
        if((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == n - 1 || arr[mid] >= arr[mid + 1]))
            return mid;
            
        else if(arr[mid + 1] >= arr[mid])
            l = mid + 1;
            
        else
            r = mid - 1;
            
        mid = (l + r) / 2;
    }
    
    return 0;
}
