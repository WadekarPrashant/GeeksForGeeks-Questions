class Solution{   
public:
    int minimumStep(int n){
        int ans = 0;
        
        while(n >= 3){
            ans += n % 3 + 1;
            n /= 3;
        }
        
        return ans + (n - 1);
    }
};
