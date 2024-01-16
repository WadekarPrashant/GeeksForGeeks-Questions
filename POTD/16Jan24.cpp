class Solution{
public:
    int f(int num, int n, int m, int count)
    {
        if(count == n) return 1;
        
        int ans = 0;
        for(int i=num*2;i<=m;i++) {
            ans += f(i, n, m, count+1);
        }
        
        return ans;
    }

    int numberSequence(int m, int n){
        // code here
        if(n <= 1) return m;
        
        int ans = 0;
        for(int i=1;i<=m;i++) {
            int res = f(i, n, m, 1);
            if(res == 0) break;
            ans += res;
        }
        return ans;
    }
};