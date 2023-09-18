class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> ans(n,1);
        
        if(n == 1){
            return {1};
        }
        
        for(int i=2; i<n; i++){
            ans[i] = ans[i-1] + ans[i-2];
        }
        
        return ans;
    }
};