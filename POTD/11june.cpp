class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        for(int i=0;i<k;i++)
        {
            int p=updates[i]-1;
            a[p]++;
        }
        for(int i=1;i<n;i++)
        {
            a[i]=a[i]+a[i-1];
        }
    }
};
