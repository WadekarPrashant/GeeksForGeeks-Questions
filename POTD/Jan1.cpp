class Solution{
public:
        int inv(int n, int m, int mod=1000000007){
      if(m==0) return 1;
     if(m&1) return (n*1ll*inv(n, m-1))%mod;
      int tmp=inv(n, m/2);
       return (tmp*1ll*tmp)%mod;
    }
          int compute_value(int n)
        {
          // Code here
       int m = 1000000007;
      long long fact2N=1, factN;


     for(int i=1; i<=2*n; i++){
       fact2N *= i;
        fact2N %= m;
    if(i==n) factN=fact2N; } 
         
         factN = (factN*factN)%m;


      return (fact2N * 1ll * inv(factN, m-2))%m;
        }
};