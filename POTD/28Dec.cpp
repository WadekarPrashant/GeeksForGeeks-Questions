class Solution{
    public:
    bool solve(string wild, string pattern,int i,int j)
    {
        if(i==wild.length())return j==pattern.length();
       
        if(wild[i]==pattern[j]||wild[i]=='?'){
            if(solve(wild,pattern,i+1,j+1))return true;
        }
        if(wild[i]=='*'){
            if(solve(wild,pattern,i+1,j))return true;
            for(int k=j+1;k<=pattern.length();k++){
                if(solve(wild,pattern,i+1,k))return true;
            }
        }
        return false;
    }
    bool match(string wild, string pattern)
    {
        // code here
        return solve(wild,pattern,0,0);
    }
};