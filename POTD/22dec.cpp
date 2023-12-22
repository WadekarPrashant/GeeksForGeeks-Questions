class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        
        vector<pair<int,int>>tmp;
        vector<int>ans;
        
        for(int i=0;i<N;i++)
        {
            tmp.push_back(make_pair(F[i], i+1));
        }
        sort(tmp.begin(), tmp.end());
        
        ans.push_back(tmp[0].second);
        
        int last=tmp[0].first;
        
        for(int i=1;i<N;i++)
        {
            if(S[tmp[i].second-1]>last)
            {
                ans.push_back(tmp[i].second);
                last=tmp[i].first;
            }
        }
        sort(ans.begin(), ans.end());
        
        return ans;
        
    }
};
