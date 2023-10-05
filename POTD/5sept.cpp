class Solution{
    public:
    long long int f (string s, int k) {
        if(k<0) return 0;
    	long long int lo=0, hi=0, ans=0, n=s.size(), cnt=0;
    	vector<int> A(26, 0);
    	while(hi<n) {
    	    A[s[hi]-'a']++;
    	    if(A[s[hi]-'a']==1) cnt++;
    	    while(cnt>k) {
    	        A[s[lo]-'a']--;
    	        if(A[s[lo]-'a']==0) cnt--;
    	        lo++;
    	    }
    	    ans += (hi-lo+1);
    	    hi++;
    	}
    	return ans;
    }
    long long int substrCount (string s, int k) {
        return f(s, k)-f(s, k-1);
    }
};
