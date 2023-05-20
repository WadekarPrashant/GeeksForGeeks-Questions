class Solution{
    public:
    static bool comp(vector< int> &a, vector<int> &b)
    {
        if (a[1] == b[1])
            return a[0] < b[0];
        return a[1] < b[1];
    }
    vector<int> kthSmallestNum(int n, vector<vector<int>> &range, int q, vector<int> query)
    {
        // Write your code here
        sort(range.begin(), range.end(), comp);
        int index = 0, mini = range[0][0], maxi = range[0][1];
        for (int i = 1; i < n; i++)
        {
            if (range[i][0] > range[i - 1][1])
            {
                range[index] = {mini, maxi};
                index++;
                mini = range[i][0];
                maxi = range[i][1];
            }
            else
            {
                mini = min(mini, range[i][0]);
                maxi = max(maxi, range[i][1]);
            }
        }
        range[index] = {mini, maxi};
        index++;
        // cout<<index<<endl;
        // for (int i = 0; i < index; i++){
        //     cout<<range[i][0] <<" "<<range[i][1]<<endl;
        // }
        vector<int> ans;
        for (int i = 0; i < q; i++)
        {
            int num = query[i];
            for (int j = 0; j < index; j++)
            {
                if (num <= range[j][1] - range[j][0]+1)
                {
    
                    ans.push_back(range[j][0] + num-1);
                    num = 0;
                    break;
                }
                else
                {
                    num -= range[j][1] - range[j][0]+1;
                    // cout<<num<<endl;
                }
            }
            if (num > 0)
                ans.push_back(-1);
        }
        return ans;
    }
};
