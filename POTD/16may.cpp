class Solution{
    public:
    int dp[51];

bool isPowerOfFive(long long y){
    if(y==1){
        return true;
    }
    long long x=5;
    long long expo=1;
    while(expo<y){
        expo=expo*x;
    }
    return expo==y;
}

long long helper(string &s, int curr){
    if(curr<0){
        return 0;
    }
    if(dp[curr]!=-1){
        return dp[curr];
    }
    long long res=INT_MAX;
    long long val=0;
    long long power=0;
    for(int i=curr;i>=0;i--){
        if(s[i]=='1'){
            val+=pow(2,power);
        }
        if(isPowerOfFive(val)==true && s[i]!='0'){ // cannot have leading zeros
            long long temp=helper(s,i-1);
            if(temp!=INT_MAX){
                res=min(res,1+temp);
            }
        } 
        power++;
    }
    return dp[curr]=res;
}

int cuts(string s){
    memset(dp,-1,sizeof(dp));
    int res=helper(s,s.size()-1);
    return res==INT_MAX ? -1 : res;
}
};
