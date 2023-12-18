class Solution {
  public:
    int gameOfXor(int n, int A[]) {
        int ans = 0;
        
        for(int i=0; i<n; i++){
            long long ct = (i+1)*(n-i);
            if(ct%2) ans^=A[i];
        }
        
        return ans;
    }
};
