class Solution {
  public:
    long long int minOperations(int N) {
        long long divide = N / 2; 
        long long rem = N - divide; 
        return divide * rem; 
    }
};