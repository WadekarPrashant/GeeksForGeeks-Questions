class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
{
    int xorResult = m ^ n;
    int rightmostBit = xorResult & -xorResult;
    int position = log2(rightmostBit) + 1;
    
    if (m == n) {
        return -1;
    }
    
    return position;
}
};
