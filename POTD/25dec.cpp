class Solution
{   
    public:
    //Function for finding determinant of matrix.
    int determinantOfMatrix(vector<vector<int> > m, int n)
    {
        // code here 
        if(n==1)
        {
            return m[0][0];
        }
        if(n==2)
        {
            return ((m[0][0]*m[1][1])-(m[0][1]*m[1][0]));
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            vector<vector<int>>tmp;
            for(int j=1;j<n;j++)
            {
                vector<int>v;
                for(int k=0;k<n;k++)
                {
                    if(k==i)
                    continue;
                    else 
                    {
                        v.push_back(m[j][k]);
                    }
                }
                tmp.push_back(v);
            }
            if(i&1)
            {
                ans-=m[0][i]*determinantOfMatrix(tmp, n-1);
            }
            else 
            {
                ans+=m[0][i]*determinantOfMatrix(tmp, n-1);
            }
        }
        
        return ans;
    }
};
