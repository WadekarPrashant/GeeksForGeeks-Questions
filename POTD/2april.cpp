class Solution{
public:
    int knightInGeekland(int start_x,int start_y,vector<vector<int>> &arr){
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>> vis(n,vector<int>(m));
        vis[start_x][start_y] = 1;
        queue<pair<int,int>> q;
        q.push({start_x, start_y});
        vector<int> list;
        int points = 0;
        int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
        int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
        auto isSafe=[&](int i, int j){
            return (i>=0 and j>=0 and i<n and j<m);
        };
        while(q.size()){
            int size = q.size();
            points = 0;
            for(int i = 0; i < size; i++){
                auto tmp = q.front();
                q.pop();
                int x = tmp.first, y = tmp.second;
                points += arr[x][y];
                for(int k = 0; k < 8; k++){
                    int xi = x + dx[k];
                    int xj = y + dy[k];
                    if(isSafe(xi, xj) && !vis[xi][xj]){
                        vis[xi][xj] = 1;
                        q.push({xi, xj});
                    }
                }
            }
            list.push_back(points);
        }
        int max = -1, ans = -1;
        
        for(int i = list.size() - 1; i >= 0; i--){
            if(list[i] + i < list.size())
                list[i]+=list[i + list[i]];
        }
        for(int i = 0; i < list.size(); i++){
            if(list[i] > max){
                max = list[i];
                ans = i;
            }
        }
        return ans;
    }
};