//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    vector<vector<int>> nQueen(int n)
    {
        vector<vector<int>> board(n, vector<int>(n)), ans;
        vector<int> curr;
        auto fun = [&](auto self, int r) -> void
        {
            if (r == n)
                ans.push_back(curr);
            else
                for (int c = 0; c < n; c++)
                {
                    bool isSafe = true;
                    for (int x = r, y1 = c, y2 = c; isSafe and x >= 0; x--, y1--, y2++)
                        if (board[x][c] or (y1 >= 0 and board[x][y1]) or (y2 < n and board[x][y2]))
                            isSafe = false;
                    if (isSafe)
                    {
                        board[r][c] = true;
                        curr.push_back(c + 1);
                        self(self, r + 1);
                        curr.pop_back();
                        board[r][c] = false;
                    }
                }
        };
        fun(fun, 0);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends