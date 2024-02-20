class Solution {
  public:
    int totalCount(int n, string s) {
        long long int mod=1e9+7;
        int k=s.size();
        int sum=0;
        int i,j=0;
        sum=sum%mod+s.size();
        for(i=1;i<n;i++){
            if(s[i]==s[0]){
                sum=sum%mod+(s.size()%mod-i%mod)%mod;
            }
        }
        return sum%mod;
    }
};
