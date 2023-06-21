class Solution {
  public:
    int sumOfNaturals(int n) {
        long long mod=pow(10,9)+7;
        int ans=((n%mod)*((n%mod)+1))%mod;
        return ans/2;
    }
    
};
