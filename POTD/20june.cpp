class Solution {
  public:
    int matchGame(long long n) {
        return (n%5==0)?-1:n%5;
    }
};
