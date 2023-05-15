class Solution {

  public:
    long long findMaxSubsetSum(int N, vector<int> &A) {
        // code here
        long long a = A[0],b = A[1] + max(0,A[0]);
        for(long long c,i=2;i<N;i++)
            c = max(a,b) + A[i],a = b,b = c;
        return max(a,b);
    }
};
