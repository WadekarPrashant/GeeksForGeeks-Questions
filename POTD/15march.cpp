class Solution{
    //Complete the function and return minimum number of operations
    public:
    int noofop(string &s,int k,int m)
    {
        int i=0;
        int j=s.length()-1;
        int ans=0;
        while(i<j)
        {
            if(s[i]!=s[j] ) 
            {

                if(i>=k&&j<=(k+m-1))
                 return 1e9;           
                  ans++;
            }
            i++;
            j--;
        }
        return ans;
    }
    int specialPalindrome(string s1, string s2){
        //Code Here
        int n=s1.size();
        int m=s2.size();
        if(n<m) return -1;
      
       if(s1==s2)
       {
           int ans= noofop(s1,-1,-1);
           if(ans==0) return 0;
           else return -1;
       }
        int minans=1e9;
        int ans=0;
        string temp;
        for(int i=0;i<=n-m;i++)
        {   
          ans=0;
          temp=s1;
          int k=i;

          for(int j=0;j<m;j++)
          {
              if(temp[k]==s2[j])
              {
                  k++;
                  continue;
              }
              ans++;
                            temp[k]=s2[j];

              k++;
          }
          ans+=noofop(temp,i,m);
          minans=min(minans,ans);
        }
        if(minans==1e9) return -1;
        return minans;
    }
};