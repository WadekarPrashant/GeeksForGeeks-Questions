class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        // code here
        int p=-1,q=-1,ans=n;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                p=i;
                if(q!=-1)
                {
                    ans=min(ans,abs(p-q));
                }
            }
            if(arr[i]==y)
            {
                q=i;
                if(p!=-1)
                {
                    ans=min(ans,abs(p-q));
                }
            }
            
        }
        if(ans==n)return -1;
        return ans;
    }
};
