class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  int ans=INT_MIN;
	    vector<int>dp(n);
	    for(int i=0;i<n;i++)
	    {
	        dp[i]=arr[i];
	        for(int j=0;j<i;j++)
	        {
	            if(arr[j]<arr[i])
	                dp[i]=max(dp[j]+arr[i],dp[i]);
	        }
	        ans=max(ans,dp[i]);
	    }
	    return ans;
	}    
};
