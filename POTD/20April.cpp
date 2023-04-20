class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
        int ptr=0;
        int i=0;
        bool ans=true;
        while(i<N)
        {
            if(S[i]=='1')
            {
                if(i-X>ptr)
                {
                    ans=false;
                    break;
                }
                else
                ptr=i+X+1;
            }
            i++;
        }
        
        if(ptr<N)
        ans=false;
        
        return ans;
    }
};