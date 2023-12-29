class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    // Your Code Here
	    if(n%k!=0)return 0;
	    unordered_map<string,int>freq;
	    for(int i=k; i<=n; i+=k){
	        string sub = s.substr(i-k,k);
	        freq[sub]++;
	    }
	    if(freq.size()>2)return 0;
	    if(freq.size()==1)return 1;
	    vector<int>f;
	    for(auto i:freq){
	        f.push_back(i.second);
	    }
	    if(f[0]>f[1])
	        return f[1]==1 ? 1:0;
	    else if(f[0]<f[1])
	        return f[0]==1? 1:0;
	   else if(f[1]==f[0] && f[0]==1)return 1;
	   return 0;
	    
	    
	}
};