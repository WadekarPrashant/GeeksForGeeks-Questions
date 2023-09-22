class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> op;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                op.push_back(i);break;
            }
        }
        if(op.size()!=1)op.push_back(-1);
        
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==x)
            {
                op.push_back(i);
                break;
            }
        }
        if(op.size()!=2)op.push_back(-1);
        
        return op;
    }
};