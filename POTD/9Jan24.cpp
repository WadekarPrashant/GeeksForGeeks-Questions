class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here
            vector<int>ans;
            int k=pat.size();
            for(int i=0;i<=txt.size()-k;i++){
                if(pat[0]!=txt[i])continue;
                string sub_string=txt.substr(i,k);
                if(sub_string==pat)ans.push_back(i+1);
            }
            return ans;
        }
     
};
