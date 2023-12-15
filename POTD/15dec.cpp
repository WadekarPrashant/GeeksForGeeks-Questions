class Solution{
	public:
	    int MOD=1e9+7;
		int nthPoint(int n){
		   int t1=1,t2=2;
		   if(n==1) return t1;
		   else if(n==2) return t2;
		   else{
		       for(int i=2;i<n;i++){
		           int t3=t1+t2;
		           t1=t2%MOD;
		           t2=t3%MOD;
		       }
		   }
		   return t2;
		}
};
