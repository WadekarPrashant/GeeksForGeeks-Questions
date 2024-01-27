class Solution{
public:
    pair<int,string> dp[27][27];
    string matrixChainOrder(int p[], int n){
        return f(1,n-1,p).second;
    }
    
    pair<int,string> f(int i,int j,int p[]){
        if(i==j){
            string curr = "";
            curr += 'A' + i-1; 
            return {0,curr};
        }
        
        if(dp[i][j].second != "") return dp[i][j];
        
        int val = INT_MAX;
        string s = "";
        
        for(int k=i;k<j;k++){
            pair<int,string> a =  f(i,k,p);
            pair<int,string> b =  f(k+1,j,p);
            int q = p[i-1]*p[j]*p[k] + a.first + b.first;
            if(q<val){
                val = q;
                s = "(" + a.second + b.second + ")";
            }
        }
        return dp[i][j] = {val,s};
    }
};
