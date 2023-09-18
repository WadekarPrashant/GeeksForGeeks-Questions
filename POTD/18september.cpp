class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here  
        if(n==0){
            return false;
        }
        while(n>1){
            if(n&1){
                return false;
            }
            n=n>>1;
        }
        return true;
        
    }
};