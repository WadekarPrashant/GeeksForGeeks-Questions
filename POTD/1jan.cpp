class Solution {
  public:
    long long countBits(long long N) {
        if(N == 0){
            return 0;
        }
        if(N == 1){
            return 1;
        }
        vector<int> lut = {1, 2, 5, 13, 33, 81, 193, 449, 1025, 2305, 5121, 11265, 24577, 53249, 114689, 245761, 524289, 1114113, 2359297, 4980737, 10485761, 22020097, 46137345, 96468993, 201326593, 419430401, 872415233, 1811939329};
        
        int count = 0;
        int setCountRem = -1;
        
        //Count set bits in N
        for(int x = N; x; x>>=1){
            setCountRem += x & 1;
        }
        for(int x = 0; N; N>>=1){
            if((N & 1) == 1){
                count += lut[x] + setCountRem*pow(2,x);
                setCountRem--;
            }
            x++;
        }
        
        return count;
    }
};