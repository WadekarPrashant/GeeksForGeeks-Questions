class Solution{
public:
    int mod = 1e9+7;
    long long sequence(int N){
        // code her
        int M=1;
        long long int ans=0;
        for(int i=1;i<=N;i++){
            int j=i;
            long long temp=1;
            while(j){
                temp = (temp * M) % mod;
                M++;
                j--;
            }
            ans = (ans + temp) % mod;
        }
        return ans;
    }
};
