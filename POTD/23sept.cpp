class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long sum = 0;
        for(long long  i = 0 ; i<n;i++) sum+=a[i];
        long long prevSum = 0;
        for(int i = 0 ; i<n;i++){
            sum-=a[i];
            if(prevSum==sum) return i+1;
            prevSum+=a[i];
            
        }
        return -1;
    }

};