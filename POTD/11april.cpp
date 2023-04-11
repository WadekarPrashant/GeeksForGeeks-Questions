class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
        int ans=a+b+c;
        if(a==b && b==c) return ans;
        if(a>b && a>c) return a%2==0 ? (b+c >= (a/2)-1 ? ans : -1 ) : (b+c >= a/2 ? ans : -1);
        if(b>c && b>a) return b%2==0 ? (a+c >= (b/2)-1 ? ans : -1 ) : (a+c >= b/2 ? ans : -1);
        if(c>a && c>b) return c%2==0 ? (b+a >= (c/2)-1 ? ans : -1 ) : (b+a >= c/2 ? ans : -1);
        return ans;
    }
};