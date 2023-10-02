class Solution{
  public:	
	int distinctSubsequences(string s)
    {
        int ans=1,m=1e9+7;
        int mp[26]={0};
        for(char c:s){
            int repeating_seq = mp[c-'a'];  
            mp[c-'a']=ans;               
            ans=(1LL*ans*2 - repeating_seq+m)%m;  
        }
        return ans;
    } 
};
