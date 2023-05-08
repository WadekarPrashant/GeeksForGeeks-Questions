class Solution{
    public:
        int modulo(string s,int m)
        {
            //code here
            int ans=1;
            int sol=0;
            if(s[s.size()-1]=='1'){
                    sol=((sol%m)+(ans%m))%m;
            }
            for(int i = s.size()-2 ; i>=0 ; i--){
                ans=(ans*2)%m;
                if(s[i]=='1'){
                    sol=((sol%m)+(ans%m))%m;
                }
            }
            return sol;
        }
};
