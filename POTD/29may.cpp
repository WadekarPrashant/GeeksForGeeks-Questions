class Solution {
  public:
    bool func(string A,string B)
    {
        int i = 0;
        int j = 0;
        while(i<A.size() and j<B.size())
        {
            if(A[i] == B[j])
            {
                i++;
                j++;
            }
            else if(A[i] >= 'A' and A[i]<='Z' and B[j]>='A' and B[j]<='Z')
            {
                return false;
            }
            else
            {
                i++;
            }
        }
        return j==B.size();
    }
    vector<string> CamelCase(int N, vector<string> D, string Pattern) {
        vector<string> ans;
        for(auto c : D)
        {
            if(func(c,Pattern))
            {
                ans.push_back(c);
            }
        }
        if(ans.empty())
        {
            vector<string> bools;
            bools.push_back("-1");
            return bools;
        }
        return ans;
    }
};
