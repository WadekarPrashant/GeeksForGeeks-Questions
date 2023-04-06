class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        int sum=accumulate(A.begin(),A.end(),0);
        int sumx=0;
        for(int i=0;i<N;i++){
            if(sumx==(sum-A[i]-sumx)) return i+1;
            sumx+=A[i];
        }
        return -1;
    }
};