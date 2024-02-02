class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int i=0,neg=0,ans=0;
        if(s[0]=='-')i++,neg=1;
        
        for(;i<s.size();i++)
            if(s[i]>='0' && s[i]<='9')
                ans=ans*10+s[i]-'0';
            else return -1;

        return neg?-ans:ans;
    
    }
};
