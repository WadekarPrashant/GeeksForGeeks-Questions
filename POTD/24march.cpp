class Solution {
  public:
    string removeReverse(string S) {
        int freq[26]={0};
        for(auto i:S)
            freq[i-'a']++;
        int l=0,r=S.size()-1,f=0;
        while(l<=r)
        {
            if(f==0)
            {
                if(freq[S[l]-'a']==1)
                {
                    l++;
                }
                else{
                    freq[S[l]-'a']--;
                    S[l]='#';
                    l++;
                    f^=1;
                }
            }
            else{
                if(freq[S[r]-'a']==1)
                {
                    r--;
                }
                else{
                    freq[S[r]-'a']--;
                    S[r]='#';
                    r--;
                    f^=1;
                }
            }
        }
        string ans="";
        for(auto i:S)
        {
            if(i!='#')
                ans.push_back(i);
        }
        if(f)
            reverse(ans.begin(),ans.end());
        return ans;
    }
};