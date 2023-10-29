class Solution
{
    public:
    // Function to check if Kth bit is set or not.
     bool checkKthBit(int n, int k)
    {
        int count  = 0;
        while(n){
            if(count == k){
                if(n&1==1) return true;
                else false;
            }
            n = n/2;
            count++;
        }
        return false;
    }


};
