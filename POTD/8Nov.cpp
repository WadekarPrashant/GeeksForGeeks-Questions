class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        int N=matrix.size();
        vector<int> ans;
        int flag=0;
        for(int i=0;i<N;i++)
        {
            if(flag==0)
            {
                while(flag<N)
                ans.push_back(matrix[i][flag++]);
                flag=N-1;
            }
            else 
            {
                while(flag>=0)
                ans.push_back(matrix[i][flag--]);
                flag=0;
            }
            
            
        }
        return ans;
    }
};
