class Solution{
public:
    int totalCuts(int n,int K,vector<int> &A){
        int post[n];
        post[n-1] = A[n-1];
        int mini = A[n-1];
        for(int i=n-2;i>=0;i--)
            mini = min(mini,A[i]),post[i] = mini;
        int ans = 0, maxi = A[0];
        for(int i=0;i<n-1;i++){
            maxi = max(maxi,A[i]);
            if(maxi+post[i+1]>=K) ans++;
        }
        return ans;
    }
};
