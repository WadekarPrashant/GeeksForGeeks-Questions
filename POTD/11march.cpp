class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        
        unordered_map<int,int> map;
        vector<int> freq(N);
        
        for(int i = N-1; i >= 0; i--) {
            map[A[i]]++;
            freq[i] = map[A[i]];
        }
        
        vector<int> res;
        for(auto &q: Q) {
            int L = q[0], R = q[1], k = q[2], numOfIdx = 0;
            
            while(L <= R) {
                if(freq[L] == k)numOfIdx++;
                L++;
            }
            
            res.push_back(numOfIdx);
        }
        
        return res;
    }
};