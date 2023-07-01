class Solution {
  public:
    long long minTime(int n, vector<int> &locations, vector<int> &types) {
        unordered_map<int,int> mxPos, mnPos;
        for(int i=0;i<n;i++)
        {
            if(mxPos.find(types[i]) == mxPos.end())
            {
                mxPos[types[i]] = locations[i];
            }
            else
            {
                mxPos[types[i]] = max(mxPos[types[i]], locations[i]);
            }
            
            if(mnPos.find(types[i]) == mnPos.end())
            {
                mnPos[types[i]] = locations[i];
            }
            else
            {
                mnPos[types[i]] = min(mnPos[types[i]], locations[i]);
            }
        }
        
        vector<int> disTypes;
        for(auto it = mxPos.begin(); it != mxPos.end(); it++)
        {
            disTypes.push_back(it->first);
        }
        
        sort(disTypes.begin(), disTypes.end());
        int l = disTypes.size();
        vector<vector<long long>> dp(l,vector<long long>(2, 0));
        
        dp[l-1][0] = abs(mnPos[disTypes[l-1]] - mxPos[disTypes[l-1]]) + abs(mxPos[disTypes[l-1]] - 0);
        dp[l-1][1] = abs(mxPos[disTypes[l-1]] - mnPos[disTypes[l-1]]) + abs(mnPos[disTypes[l-1]] - 0);
        
        for(int i=disTypes.size()-2;i>=0;i--)
        {
            // dp[i][0] : starting from minimum location of disType[i]
            dp[i][0] = abs(mnPos[disTypes[i]] - mxPos[disTypes[i]]);
            
            long long A = abs(mxPos[disTypes[i]] - mnPos[disTypes[i+1]]) + dp[i+1][0];
            long long B = abs(mxPos[disTypes[i]] - mxPos[disTypes[i+1]]) + dp[i+1][1];
            
            dp[i][0] += min(A,B);
            
                
            // dp[i][1] : starting from maximum location of disType[i]
            dp[i][1] = abs(mxPos[disTypes[i]] - mnPos[disTypes[i]]);
            
            A = abs(mnPos[disTypes[i]] - mnPos[disTypes[i+1]]) + dp[i+1][0];
            B = abs(mnPos[disTypes[i]] - mxPos[disTypes[i+1]]) + dp[i+1][1];
            
            dp[i][1] += min(A,B);
        }
        long long ans1 = abs(0 - mnPos[disTypes[0]]) + dp[0][0];
        long long ans2 = abs(0 - mxPos[disTypes[0]]) + dp[0][1];
        return min(ans1, ans2);
    }
};
