class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int>> &v)
    {
        int n=v.size();
        int c = v[0].size();
        vector<pair<int, int>> vp;
        for(int i=0; i<n; i++){
            for(int j=0; j<v[i].size(); j++){
                if (v[i][j] == 1) vp.push_back({i, j});
            }
        }
        
        for(auto pr: vp){
            for(int i=0; i<n; i++) v[i][pr.second] = 1;
            for(int i=0; i<c; i++) v[pr.first][i] = 1;
        }
        return;
    }
};
