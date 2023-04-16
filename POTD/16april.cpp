class Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
        long long sum = 0;
        vector<int> AP[2], BP[2];
        for(int i = 0; i < N; i++) {
           sum += A[i] - B[i];
           AP[abs(A[i]) % 2].push_back(A[i]);
           BP[abs(B[i]) % 2].push_back(B[i]);
        }
        if(sum != 0 || (int)AP[0].size() != (int)BP[0].size())
        return -1;
        
        long long ans = 0;
        for(int i = 0; i < 2; i++) {
           sort(AP[i].begin(), AP[i].end());
           sort(BP[i].begin(), BP[i].end());
        
           for(int j = 0; j < (int)AP[i].size(); j++) {
               ans += abs(AP[i][j] - BP[i][j]) / 2;
           }
        }
        return ans / 2;
    }
};