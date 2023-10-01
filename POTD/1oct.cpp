class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> result = matrix[0];
        if(row == 1)    return result;
        vector<int> r, c, l = matrix[row - 1];
        reverse(l.begin(), l.end());
        for(int i = 1; i < row - 1; i++)
            r.push_back(matrix[i].back()), c.push_back(matrix[row - i - 1].front());
        result.insert(result.end(), r.begin(), r.end());
        result.insert(result.end(), l.begin(), l.end());
        if(col != 1)    result.insert(result.end(), c.begin(), c.end());
        return result;
    }
};