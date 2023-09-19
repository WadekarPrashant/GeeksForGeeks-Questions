class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n){
        // Your code here
        if(n==0) return 0;
        unsigned int c = 1;
        while(n){
            if(n&1)
                return c;
            n>>=1;
            c++;
        }
        return c;    
}
};