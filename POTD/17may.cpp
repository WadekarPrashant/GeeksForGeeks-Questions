class Solution{
public:
   int isPossible(int n, int m, string s){
        // code hereint row=0;
        int col=0;
        int row=0;
        int lm=0;
        int rm=0;
        int um=0;
        int dm=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='L')col--;
            if(s[i]=='R')col++;
            if(s[i]=='U')row++;
            if(s[i]=='D')row--;
            
            lm=min(lm,col);
            rm=max(rm,col);
            dm=min(dm,row);
            um=max(um,row);
        }
        
        if(rm-lm<m && um-dm<n)return 1;
        return 0;
        
    }
};
