class Solution{
public:
    int maxCoins(int n,vector<vector<int>> &ranges){
        // Code here
        sort(ranges.begin(),ranges.end());

        vector<pair<int,int>> v(n);
        int mx = 0;
        for(int i= n-1;i>=0;i--)
        {
            mx = max(mx,ranges[i][2]);
            v[i] = {ranges[i][0],mx};
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            pair<int,int> p  = {ranges[i][1],0};
             auto it = lower_bound(v.begin()+i+1,v.end(),p) - v.begin();

            if(it<n )
            ans = max(ans, ranges[i][2]+v[it].second);
            else
            ans = max(ans,ranges[i][2]);
        }
        return ans;
    }
};
