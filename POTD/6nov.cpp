class Solution{
public:
   vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
        vector<int>ans;
        for(int k = 0;k<q;k++){
            int w = queries[k][0];
            int i = queries[k][1];
            int j = queries[k][2];
            int sum = 0;
            if(w == 1){
                if((i-1) >=0 && (j-1) >= 0){
                    sum += mat[i-1][j-1];
                }
                if((i-1) >= 0 && j<m){
                    sum += mat[i-1][j];
                }
                if((i-1) >=0 && (j+1) < m) sum += mat[i-1][j+1];
                if(i < n && j-1 >= 0) sum += mat[i][j-1];
                if(i < n && j+1 < m) sum += mat[i][j+1];
                if((i+1) < n && (j-1) >= 0) sum += mat[i+1][j-1];
                if((i+1) < n && j < m ) sum += mat[i+1][j];
                if((i+1) < n && (j+1) < m ) sum += mat[i+1][j+1];
                ans.push_back(sum);
            }
            else{
                for(int l = i-2 ; l<=i+2 ; l++){
                    for(int r = j-2 ;r <= j+2 ; r++){
                        if(l >=0 && l < n && r >=0 && r < m){
                            if(abs(l-i) == 2 || abs(r-j) == 2) sum += mat[l][r];
                        }
                    }
                }
                ans.push_back(sum);
            }
        }
        return ans;
    }
};
