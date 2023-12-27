class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) {
        int p1 = matrix.size(), p2 = matrix[0].size();
        queue<pair<int, int>> qp;
        qp.push({0, 0});
        
        vector<int> res;
        while(!qp.empty()) {
            auto p = qp.front();
            qp.pop();
            
            int x = p.first, y = p.second;
            res.push_back(matrix[x][y]);
            
            if(y + 1 < p2 and x == 0)
                qp.push({x, y + 1});
                
            if(x + 1 < p1)
                qp.push({x + 1, y});
        }
           
        return res;
    }
};
