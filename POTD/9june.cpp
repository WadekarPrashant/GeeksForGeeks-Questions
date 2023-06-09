class Solution
{
	void recPermute(int index,string s,set<string> &ans,int n){
        if(index==n){
            ans.insert(s);
            return;
        }
        for(int i=index;i<n;i++){
            swap(s[i],s[index]);
            recPermute(index+1,s,ans,n);
            swap(s[i],s[index]);
        }
    }
    public:
        vector<string>find_permutation(string s)
        {
          set<string>ans;
          vector<string> res;
          recPermute(0,s,ans,s.size());
          
          for(auto a:ans){
              res.push_back(a);
          }
          return res;
        }
};
